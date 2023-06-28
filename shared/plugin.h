#include "injector/injector.hpp"
#include "shared.h"
#include "stdint.h"
#include <list>

namespace plugin
{
    namespace UpdateEvent
    {
        uintptr_t returnAddress = shared::base + 0x6526A2;
        std::list<void(*)()> funcPtrs;

        void Run()
        {
            for (auto& f : funcPtrs)
                f();
        }

        void Add(void(*funcPtr)())
        {
            funcPtrs.emplace_back(funcPtr);
        }

        void __declspec(naked) MainHook()
        {
            __asm
            {
                pushad
                call Run
                popad
                jmp returnAddress
            }
        }

        uint32_t DoHook(uint32_t address)
        {
            uint32_t origCall = (uint32_t)injector::ReadRelativeOffset(address + 1);

            injector::MakeCALL(address, MainHook, true);

            return origCall;
        }
    }

    void InitEvents()
    {
        UpdateEvent::returnAddress = UpdateEvent::DoHook(shared::base + 0x6526A2);
    }

    void OnStartup();

    void Init();
    {
        InitEvents();
        OnStartup();
    }
}