#pragma once

#include "Hw.h"
#include "cChainCombo.h"
#include "cEffectDatsuDisp.h"
#include "cEffectSouDisp.h"
#include "cEffectZanDisp.h"
#include "cAttentionDisp.h"
#include "cQTEButton.h"
#include "cQTECallAlarm.h"
#include "cEnergyGaugeWhiteRaiden.h"
#include "cDryCellGauge2.h"
#include "cJammingDie.h"
#include "cJammingWall.h"
#include "cResultDisp.h"
#include "cItemGetDisp.h"
#include "cSubWeaponInfoDisp.h"
#include "cBossWeaponInfoDisp.h"
#include "cWeaponInfoDisp.h"
#include "cGrenadeGuideLine.h"
#include "cNinjyaRunNavi.h"
#include "cVisorMode.h"
#include "cRpgSite.h"
#include "cSentryGunSite.h"
#include "cStingerMissileSite.h"
#include "cStealthKillTarget.h"
#include "cDestinationDisp.h"
#include "cFreeMissionDisp.h"
#include "cUnLockInfoDisp.h"
#include "cVRMissionBackPanel.h"

class cPlayerInfoManager
{
public:
  int field_4;
  int field_8;
  int field_C;
  int field_10;
  cChainCombo *m_pcChainCombo;
  cEffectDatsuDisp *m_pcEffectDatsuDisp;
  cEffectSouDisp *m_pcEffectSouDisp;
  cEffectZanDisp *m_pcEffectZanDisp;
  cAttentionDisp *m_pcAttentionDisp;
  cQTEButton *m_pcQTEButton;
  cQTECallAlarm *m_pcQTECallAlarm;
  cEnergyGaugeWhiteRaiden *m_pcEnergyGaugeWhiteRaiden;
  cDryCellGauge2 *m_pcDryCellGauge2;
  cJammingDie *m_pcJammingDie;
  cJammingWall *m_pcJammingWall;
  cResultDisp *m_pcResultDisp;
  cItemGetDisp *m_pcItemGetDisp;
  int field_48;
  cSubWeaponInfoDisp *m_pcSubWeaponInfoDisp;
  cBossWeaponInfoDisp *m_pcBossWeaponInfoDisp;
  cWeaponInfoDisp *m_pcWeaponInfoDisp;
  cGrenadeGuideLine *m_pcGrenadeGuideLine;
  int field_5C;
  cNinjyaRunNavi *m_pcNinjyaRunNavi;
  cVisorMode *m_pcVisorMode;
  cRpgSite *m_pcRpgSite;
  cSentryGunSite *m_pcSentryGunSite;
  cStingerMissileSite *m_pcStingerMissileSite;
  cStealthKillTarget *m_pcStealthKillTarget;
  cDestinationDisp *m_pcDestinationDisp;
  cFreeMissionDisp *m_pcFreeMissionDisp;
  cUnLockInfoDisp *m_pcUnLockInfoDisp;
  cVRMissionBackPanel *m_pcVRMissionBackPanel;
  int field_88;
  int field_8C;
  float field_90;
  float field_94;
  float field_98;
  float field_9C;
  float field_A0;
  float field_A4;
  float field_A8;
  float field_AC;
  float field_B0;
  float field_B4;
  float field_B8;
  float field_BC;
  float field_C0;
  float field_C4;
  float field_C8;
  float field_CC;
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
  Hw::cHeapVariable *field_100;
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
  Hw::cHeapVariable *field_140;
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
  Hw::cHeapVariable *field_180;
  int field_184;
  int field_188;
  int field_18C;
  int field_190;
  int field_194;
  int field_198;
  int field_19C;

  virtual ~cPlayerInfoManager() {};

  static inline cPlayerInfoManager &Instance = *(cPlayerInfoManager*)(shared::base + 0x1737A10);
};

VALIDATE_SIZE(cPlayerInfoManager, 0x1A0);