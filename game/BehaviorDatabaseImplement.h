#pragma once
#include "BehaviorDatabase.h"
#include "Behavior.h"
#include "lib.h"

class BehaviorDatabaseImplement : public BehaviorDatabase
{
public:
    struct UsedContainer
    {
        int field_0;
        int field_4;
        int field_8;
    };
    lib::AllocatedArray<BehaviorDatabaseImplement::UsedContainer> *m_pUsedContainer;
    lib::StaticArray<BehaviorData *, 2048> *m_pBehaviorData;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;
    int field_24;
    int field_28;
    int field_2C;
};

static BehaviorDatabaseImplement *&g_pBehaviorDatabaseImplement = *(BehaviorDatabaseImplement **)(shared::base + 0x17E9BF4);

BehaviorDatabaseImplement *GetBehaviorDatabaseImplement()
{
    return ((BehaviorDatabaseImplement *(__cdecl *)())(shared::base + 0x68B0B0))();
}