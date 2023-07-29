#pragma once

#include "Behavior.h"

// physical object
class BehaviorAppBase : public Behavior
{
public:
    int m_nHealth;
    int m_nMaxHealth;
    int field_878;
    int field_87C;
    int field_880;
    int field_884;
    int field_888;
    int field_88C;
    cVec4 m_vecVelocity;
    int field_8A0;
    float field_8A4;
    float field_8A8;
    int field_8AC;
    int field_8B0;
    int field_8B4;
    int field_8B8;
    int field_8BC;
    int field_8C0;
    int field_8C4;
    int field_8C8;
    int field_8CC;
    int field_8D0;
    int field_8D4;
    float field_8D8;
    int field_8DC;
    int field_8E0;
    int field_8E4;
    int field_8E8;
    int field_8EC;
    int field_8F0;
    int field_8F4;
    int field_8F8;
    int field_8FC;
    float field_900;
    float field_904;
    float field_908;
    float field_90C;
    float field_910;
    int field_914;
    int field_918;
    int field_91C;
    float field_920;
    int field_924;
    float field_928;
    int field_92C;
    int field_930;
    int field_934;
    int field_938;
    int field_93C;
    int field_940;
    int field_944;
    int field_948;
    int field_94C;
    int field_950;
    int field_954;
    int field_958;
    int field_95C;
    int field_960;
    int field_964;
    int field_968;
    int field_96C;
    int field_970;
    float field_974;
    int field_978;
    int field_97C;
    float field_980;
    float field_984;
    float field_988;
    float field_98C;
    float field_990;
    float field_994;
    float field_998;
    float field_99C;
    float field_9A0;
    float field_9A4;
    float field_9A8;
    float field_9AC;
    float field_9B0;
    float field_9B4;
    float field_9B8;
    float field_9BC;
    float field_9C0;
    float field_9C4;
    float field_9C8;
    float field_9CC;
    int field_9D0;
    int field_9D4;
    int field_9D8;
    int field_9DC;
    float field_9E0;
    float field_9E4;
    float field_9E8;
    float field_9EC;
    float field_9F0;
    // empty constructor
    BehaviorAppBase()
    {

    }
    void Heal(int heal)
    {
        CallVMTFunc<194, BehaviorAppBase *, int>(this, heal);
    }
    void SetupHealth(int health)
    {
        ((void(__thiscall *)(BehaviorAppBase *, int))(shared::base + 0x68EDF0))(this, health);
    }
    void Damage(int damage, bool leave1Hp)
    {
        CallVMTFunc<195, BehaviorAppBase *, int, bool>(this, damage, leave1Hp);
    }
};

VALIDATE_SIZE(BehaviorAppBase, 0x9F4);