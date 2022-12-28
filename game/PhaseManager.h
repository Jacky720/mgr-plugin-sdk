#pragma once
#include "cXmlBinary.h"

struct PhaseManager
{
  int field_0;
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
  unsigned int m_nCurrentPhase;
  int m_nCurrentPhaseHash;
  int field_3C;
  int field_40;
  int field_44;
  int field_48;
  int field_4C;
  int field_50;
  int field_54;
  int field_58;
  int field_5C;
  int field_60;
  int field_64;
  int field_68;
  int field_6C;
  int field_70;
  int field_74;
  int field_78;
  int field_7C;
  int field_80;
  int field_84;
  int field_88;
  int field_8C;
  int field_90;
  int field_94;
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
  float field_13C;
  float field_140;
  float field_144;
  float field_148;
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
  float field_190;
  float field_194;
  float field_198;
  float field_19C;
  int field_1A0;
  int field_1A4;
  int field_1A8;
  int field_1AC;
  int field_1B0;
  int field_1B4;
  cXmlBinary field_1B8;
  cXmlBinary field_1D8;
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
  float field_220;
  float field_224;
  float field_228;
  float field_22C;
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

  int GetCurrentPhase() noexcept;
  int CreateReadRoomList(int a2, int a3, int a4) noexcept;
  bool IsCurrentPhase(const char *phase) noexcept;
  bool IsDLCPhase() noexcept;
  bool IsSamDLC() noexcept;
  bool IsWolfDLC() noexcept;
  int SetDefaultData() noexcept;
  bool IsPassSubPhase(int a2, bool a3, const char *debugLog) noexcept;
  void Startup() noexcept;
  bool SetSubPhaseData(const char* phase) noexcept;
  bool SetPhaseData(int a2) noexcept;
  void GameOverEvent(int a2) noexcept;
};

extern PhaseManager& g_PhaseManager;