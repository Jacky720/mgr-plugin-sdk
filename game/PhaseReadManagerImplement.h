#pragma once

#include "Hw.h"
#include "PhaseReadManager.h"
#include "shared.h"

class PhaseReadManagerImplement : public PhaseReadManager
{
public:
  int field_4;
  enum ReaderState : int
  {
    None = 0x0,
    StayNoData = 0x1,
    ReadStart = 0x2,
    ReadWait = 0x3,
    StayData = 0x4,
    ReleaseStart = 0x5,
    ReleaseWait = 0x6,
    ReadCancelStart = 0x7,
    ReadCancelWait = 0x8,
  } m_nReaderState;
  int field_C;
  int field_10;
  int field_14;
  int field_18;
  int field_1C;
  int field_20;
  int field_24;
  Hw::cHeapPhysical field_28;
  int field_98;
  int field_9C;
  int field_A0;
  int field_A4;
  int field_A8;
  int field_AC;
  int field_B0;
  int field_B4;
  int field_B8;
  int field_BC;
  int field_C0;
  int field_C4;
  int field_C8;
  int field_CC;
  int field_D0;
  int field_D4;
  int field_D8;
  int field_DC;
  int field_E0;
  int field_E4;
  int field_E8;
  int field_EC;
  int field_F0;
  int field_F4;
  int field_F8;
  int field_FC;
  int field_100;
  int field_104;
  int field_108;
  int field_10C;
  int field_110;
  int field_114;
  int field_118;
  int field_11C;
  int field_120;
  int field_124;
  int field_128;
  int field_12C;
  int field_130;
  int field_134;
  int field_138;
  int field_13C;
  int field_140;
  int field_144;
  int field_148;
  int field_14C;
  int field_150;
  int field_154;
  int field_158;
  int field_15C;
  int field_160;
  int field_164;
  int field_168;
  int field_16C;
  int field_170;
  int field_174;
  int field_178;
  int field_17C;
  int field_180;
  int field_184;
  int field_188;
  int field_18C;
  int field_190;
  int field_194;
  int field_198;
  int field_19C;
  int field_1A0;
  int field_1A4;
  int field_1A8;
  int field_1AC;
  int field_1B0;
  int field_1B4;
  int field_1B8;
  int field_1BC;
  int field_1C0;
  int field_1C4;
  int field_1C8;
  int field_1CC;
  int field_1D0;
  int field_1D4;
  int field_1D8;
  int field_1DC;
  int field_1E0;
  int field_1E4;
  int field_1E8;
  int field_1EC;
  int field_1F0;
  int field_1F4;
  int field_1F8;
  int field_1FC;
  int field_200;
  int field_204;
  int field_208;
  int field_20C;
  int field_210;
  int field_214;
  int field_218;
  int field_21C;
  int field_220;
  int field_224;
  int field_228;
  int field_22C;
  int field_230;
  int field_234;
  int field_238;
  int field_23C;
  int field_240;
  int field_244;
  int field_248;
  int field_24C;
  int field_250;
  int field_254;
  int field_258;
  int field_25C;
  int field_260;
  int field_264;
  int field_268;
  int field_26C;
  int field_270;
  int field_274;
  int field_278;
  int field_27C;
  int field_280;
  int field_284;
  int field_288;
  int field_28C;
  int field_290;
  int field_294;
  int field_298;
  int field_29C;
  int field_2A0;
  int field_2A4;
  int field_2A8;
  int field_2AC;
  int field_2B0;
  int field_2B4;
  int field_2B8;
  int field_2BC;
  int field_2C0;
  int field_2C4;
  int field_2C8;
  int field_2CC;
  int field_2D0;
  int field_2D4;
  int field_2D8;
  int field_2DC;
  int field_2E0;
  int field_2E4;
  int field_2E8;
  int field_2EC;
  int field_2F0;
  int field_2F4;
  int field_2F8;
  int field_2FC;
  int field_300;
  int field_304;
  int field_308;
  int field_30C;
  int field_310;
  int field_314;
  int field_318;
  int field_31C;
  int field_320;
  int field_324;
  int field_328;
  int field_32C;
  int field_330;
  int field_334;
  int field_338;
  int field_33C;
  int field_340;
  int field_344;
  int field_348;
  int field_34C;
  int field_350;
  int field_354;
  int field_358;
  int field_35C;
  int field_360;
  int field_364;
  int field_368;
  int field_36C;
  int field_370;
  int field_374;
  int field_378;
  int field_37C;
  int field_380;
  int field_384;
  int field_388;
  int field_38C;
  int field_390;
  int field_394;
  int field_398;
  int field_39C;
  int field_3A0;
  int field_3A4;
  int field_3A8;
  int field_3AC;
  int field_3B0;
  int field_3B4;
  int field_3B8;
  int field_3BC;
  int field_3C0;
  int field_3C4;
  int field_3C8;
  int field_3CC;
  int field_3D0;
  int field_3D4;
  int field_3D8;
  int field_3DC;
  int field_3E0;
  int field_3E4;
  int field_3E8;
  int field_3EC;
  int field_3F0;
  int field_3F4;
  int field_3F8;
  int field_3FC;
  int field_400;
  int field_404;
  int field_408;
  int field_40C;
  int field_410;
  int field_414;
  int field_418;
  int field_41C;
  int field_420;
  int field_424;
  int field_428;
  int field_42C;
  int field_430;
  int field_434;
  int field_438;
  int field_43C;
  int field_440;
  int field_444;
  int field_448;
  int field_44C;
  int field_450;
  int field_454;
  int field_458;
  int field_45C;
  int field_460;
  int field_464;
  int field_468;
  int field_46C;
  int field_470;
  int field_474;
  int field_478;
  int field_47C;
  int field_480;
  int field_484;
  int field_488;
  int field_48C;
  int field_490;
  int field_494;
  int field_498;
  int field_49C;

  virtual int field_0() {};
  virtual int field_4() {};
  virtual int field_8(int a2, int a3, int a4, int a5) {};
  virtual int field_C() {};
  virtual int field_10() {};
  virtual int field_14() {};
  virtual int field_18() {};
  virtual bool field_1C() {};
  virtual int field_20() {};
  virtual int field_24() {};
  virtual ~PhaseReadManagerImplement() {};
};

static PhaseReadManagerImplement *&g_pPhaseReadManagerImplement = *(PhaseReadManagerImplement**)(shared::base + 0x19C51C0);