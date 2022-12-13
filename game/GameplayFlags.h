#pragma once

// shared::base + 0x17EA094
enum GameplayFlags
{
  b0 = 0x1,
  b1 = 0x2,
  b2 = 0x4,
  b3 = 0x8,
  b4 = 0x10,
  b5 = 0x20,
  VisorEnabled = 0x40,
  GamePlayerNoLockonButton = 0x80,
  GameGekkoJammingEscapeMomentCamera = 0x100,
  GameShootingFinish = 0x200,
  GameTGSMode = 0x400,
  GameXYAttackOff = 0x800,
  GameTutorialFromStory = 0x1000,
  GameEm0091Manipulate = 0x2000,
  GameHP1Raiden = 0x4000,
  GameDepresssionRaiden = 0x8000,
  GameSoldierMonologue = 0x10000,
  GameKogekkoPlay = 0x20000,
  GameWeaponSelect = 0x40000,
  GameSliderNinjarunMode = 0x80000,
  GameCodecSubjectivePointView = 0x100000,
  GameInzangekiCamdir = 0x200000,
  b22 = 0x400000,
  b23 = 0x800000,
  GameNoExpAdd = 0x1000000,
  GameItemNoDrop = 0x2000000,
  GamePhaseEndUiDisplayOff = 0x4000000,
  GameResultDisplayOn = 0x8000000,
  GameBattlecollisionOff = 0x10000000,
  PlayerNoDiveKill = 0x20000000,
  PlayerNoMove = 0x40000000,
  PlayerNoXA = 0x80000000,
};

