#pragma once

namespace Hw
{
    class cHeap;
    class cHeapVariableBase;
    class cHeapVariable;
    class cTexture;
    class CameraProj;
    class cCameraBase;
    class cHeapPhysical;
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
  int field_28;
  int field_2C;
  int field_30;
  int field_34;
  int field_38;
  int field_3C;
  int field_40;
  int field_44;
  int field_48;
  int field_4C;
  int field_50;
  int field_54;
  int field_58;
  int field_5C;

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
  void *AllocateMemory(size_t size, Hw::cHeapVariable *heap);
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

class Hw::cCameraBase
{
public:

  virtual ~cCameraBase() {};
};

class Hw::cHeapPhysical : public Hw::cHeap
{
public:
  int field_60;
  int field_64;
  int field_68;
  int field_6C;

  virtual ~cHeapPhysical() override {};
};