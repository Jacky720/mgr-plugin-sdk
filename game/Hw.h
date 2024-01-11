#pragma once
#include <Windows.h>
#include <d3d9.h>
#include "shared.h"

namespace Hw
{
    class cHeap;
    class cHeapVariableBase;
    class cHeapVariable;
    class cTexture;
    class CameraProj;
    class cCameraBase;
    class cHeapPhysical;
    class cHeapHook;
    class cHeapFixed;
    class cHeapOneTime;
    class cHeapPhysicalBase;
    class cHeapGlobal;
    class cShareHeapPhysical;
    class cPrimHeap;
    class cIndexBufferHeap;
    class cRenderTargetInfo;
    class cOtWork;
    template <typename T>
    struct cFixedVector
    {
        int field_0;
        T* m_pStart;
        int m_nCapacity;
        int field_C;
        int field_10;
    };

    inline LPDIRECT3D9 &pDirect3D9 = *(LPDIRECT3D9*)(shared::base + 0x1B206D8);
    inline LPDIRECT3DDEVICE9 &GraphicDevice = *(LPDIRECT3DDEVICE9*)(shared::base + 0x1B206D4);
    inline HWND &OSWindow = *(HWND*)(shared::base + 0x19D504C); 
}

class Hw::cHeap
{
public:
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  int field_14;
  int field_18;
  int field_1C;
  int field_20;
  int field_24;
  Hw::cHeapVariable *m_pReservedHeap;
  Hw::cHeapGlobal *m_pGlobalHeap;
  Hw::cHeapVariable *m_pNext;
  Hw::cHeapVariable *m_pPrev;
  const char *m_TargetAlloc;
  int field_3C;
  HANDLE *m_pHandle;
  int field_44;
  int m_nFixedSizeAllocation;
  int m_nMaxPhysical;
  int m_nFreePhysical;
  int field_54;

  virtual ~cHeap() {};
};

class Hw::cHeapVariableBase : public Hw::cHeap
{
public:

  virtual ~cHeapVariableBase() override {};
};

class Hw::cHeapVariable : public Hw::cHeapVariableBase
{
public:

  virtual ~cHeapVariable() override {};
};

class Hw::cTexture
{
public:
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  int field_14;
  int field_18;

  virtual ~cTexture() {};
};

class Hw::CameraProj
{
public:

  virtual ~CameraProj() {};
};

class Hw::cCameraBase : public Hw::CameraProj
{
public:

};

class Hw::cHeapPhysicalBase : public Hw::cHeap
{
public:
  int field_58;
  int field_5C;
  int field_60;
  int field_64;
  int field_68;
  int field_6C;

  virtual ~cHeapPhysicalBase() override {};
};

class Hw::cHeapPhysical : public Hw::cHeapPhysicalBase
{
public:

  virtual ~cHeapPhysical() override {};
};

class Hw::cHeapHook
{
public:

  virtual ~cHeapHook() {};
};

class Hw::cHeapFixed : public Hw::cHeap
{
public:

  virtual ~cHeapFixed() override {};
};

class Hw::cHeapOneTime : public Hw::cHeap
{
public:

  virtual ~cHeapOneTime() override {};
};

class Hw::cHeapGlobal : public Hw::cHeapVariableBase
{
public:

  virtual ~cHeapGlobal() override {};
};

class Hw::cShareHeapPhysical : Hw::cHeapPhysical
{
public:

  virtual ~cShareHeapPhysical() override {};
};

class Hw::cPrimHeap
{
public:
  int field_4;
  int field_8;
  int field_C;
  int field_10;

  virtual ~cPrimHeap() {};
};

class Hw::cIndexBufferHeap
{
public:
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  int field_14;
  int field_18;
  
  virtual ~cIndexBufferHeap() {};
};

class Hw::cRenderTargetInfo
{
public:
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  int field_14;
  int field_18;
  int field_1C;
  int field_20;
  int field_24;
  int field_28;
  int field_2C;

  virtual ~cRenderTargetInfo() {};
};

class Hw::cOtWork
{
public:
  
  virtual ~cOtWork() {};
};

VALIDATE_SIZE(Hw::cHeap, 0x58);
VALIDATE_SIZE(Hw::cHeapPhysicalBase, 0x70);