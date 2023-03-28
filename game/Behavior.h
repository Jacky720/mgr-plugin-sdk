#pragma once

#include "cObj.h"
#include "hkpRigidBody.h"
#include "cLockonPartsList.h"
#include "BattleParameterImplement.h"
#include "EspCtrlCustomImpl.h"
#include "CharacterControl.h"
#include "lib.h"
#include "StateMachineContextPl0010.h"
#include "StateMachineFactoryPl0010.h"

class Behavior : public cObj
{
public:
  int field_530;
  int field_534;
  int field_538;
  int field_53C;
  cVec4 field_540;
  int field_550;
  int field_554;
  int field_558;
  int field_55C;
  float field_560;
  float field_564;
  float field_568;
  float field_56C;
  int field_570;
  int field_574;
  int field_578;
  int field_57C;
  int field_580;
  int field_584;
  int *field_588;
  int field_58C;
  char field_590;
  int field_594;
  int field_598;
  int field_59C;
  int field_5A0;
  int field_5A4;
  int field_5A8;
  int field_5AC;
  int field_5B0;
  int field_5B4;
  int field_5B8;
  int field_5BC;
  int field_5C0;
  int field_5C4;
  int field_5C8;
  int field_5CC;
  int field_5D0;
  int field_5D4;
  int field_5D8;
  int field_5DC;
  int field_5E0;
  int field_5E4;
  int field_5E8;
  int field_5EC;
  hkpRigidBody *field_5F0;
  hkpRigidBody *field_5F4;
  int field_5F8;
  int field_5FC;
  float field_600;
  int field_604;
  int field_608;
  int field_60C;
  int field_610;
  int field_614;
  int m_nCurrentAction;
  int m_nCurrentActionId;
  int field_620;
  int field_624;
  int field_628;
  int field_62C;
  int field_630;
  int field_634;
  int field_638;
  int field_63C;
  int field_640;
  int field_644;
  int field_648;
  int field_64C;
  int field_650;
  int field_654;
  int field_658;
  int field_65C;
  int field_660;
  int field_664;
  int field_668;
  int field_66C;
  int field_670;
  int field_674;
  int field_678;
  int field_67C;
  int field_680;
  int field_684;
  int field_688;
  int field_68C;
  int field_690;
  float field_694;
  float field_698;
  float field_69C;
  float field_6A0;
  float field_6A4;
  float field_6A8;
  float field_6AC;
  char field_6B0;
  int field_6B4;
  int field_6B8;
  int field_6BC;
  int field_6C0;
  int field_6C4;
  int field_6C8;
  int field_6CC;
  float field_6D0;
  float field_6D4;
  float field_6D8;
  float field_6DC;
  int field_6E0;
  int field_6E4;
  float field_6E8;
  int field_6EC;
  cLockonPartsList m_cLockonPartsList;
  int field_710;
  int field_714;
  int field_718;
  int field_71C;
  int field_720;
  int field_724;
  int field_728;
  int field_72C;
  int field_730;
  int field_734;
  float field_738;
  int field_73C;
  int field_740;
  int field_744;
  int field_748;
  int field_74C;
  int field_750;
  BattleParameterImplement *m_pBattleParameterImplement;
  int field_758;
  int field_75C;
  int field_760;
  CharacterControl *m_pCharacterControl;
  int field_768;
  int field_76C;
  int field_770;
  int field_774;
  int field_778;
  int field_77C;
  int field_780;
  float field_784;
  int field_788;
  int field_78C;
  int field_790;
  int field_794;
  EspCtrlCustomImpl *m_pEspCtrlCustomImpl;
  int field_79C;
  void *m_pEffectIntegrationContainer;
  int field_7A4;
  int field_7A8;
  int field_7AC;
  int field_7B0;
  int field_7B4;
  int field_7B8;
  int field_7BC;
  float field_7C0;
  int m_pContraints;
  int field_7C8;
  int field_7CC;
  StateMachineContextPl0010 *m_pStateMachineContext;
  StateMachineFactoryPl0010 *m_pStateMachineFactory;
  int field_7D8;
  int field_7DC;
  int field_7E0;
  int field_7E4;
  int field_7E8;
  int field_7EC;
  int field_7F0;
  int field_7F4;
  int field_7F8;
  int field_7FC;
  int field_800;
  int field_804;
  int field_808;
  int field_80C;
  int field_810;
  int field_814;
  int field_818;
  int field_81C;
  int field_820;
  short field_824;
  int field_828;
  int field_82C;
  int field_830;
  int field_834;
  int field_838;
  int field_83C;
  int field_840;
  int field_844;
  char field_848;
  char field_849;
  int field_84C;
  int field_850;
  int field_854;
  int field_858;
  int field_85C;
  float field_860;
  float field_864;
  float field_868;
  float field_86C;

  Behavior();
  virtual ~Behavior() override {};
  void Startup();
};