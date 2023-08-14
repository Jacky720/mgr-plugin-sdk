#pragma once
#include "GameWorkManager.h"
#include "shared.h"

class GameWorkManagerImplement : public GameWorkManager
{
public:
    int field_4;
    int field_8;
    int m_nJustHitted;
    int m_nCombo;
    int m_nPartsCutted;
    int field_18;
    int field_1C;
    int m_nKills;
    float m_fComboTime;
    int m_bTakeDamage;
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
    int field_60;
    int field_64;
    int field_68;
    int field_6C;
    int m_nBPToReceive;
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
    int m_nTauntCount;
    int field_B4;
    int field_B8;
    float field_BC;
    int m_bInBattle;
    int field_C4;
    int field_C8;
    int field_CC;
    int field_D0;
    float m_fDispTime;
    int m_nDispTotalBP;
    int m_nDispTotalZandatsu;
    int m_nDispTotalCombos;
    int m_nDispTotalKills;
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

    static inline GameWorkManagerImplement *&pInstance = *(GameWorkManagerImplement**)(shared::base + 0x17EA184);
};

