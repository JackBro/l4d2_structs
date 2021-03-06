#ifndef _INCLUDE_GAMERULES_H_
#define _INCLUDE_GAMERULES_H_
/*
Inheritance Tree:
 CTerrorGameRules
  CCSGameRules
   CTeamplayRules
    CMultiplayRules
     CGameRules
      CMemZeroOnNew
      CAutoGameSystemPerFrame
       CBaseGameSystemPerFrame
        IGameSystemPerFrame
         IGameSystem
		 */

struct CTerrorGameRules
{
	void * vptr;
	char BaseClassStuff[884]; // 4 ignoring a bunch of stuff
	int m_iSurvivorScore[2]; // 888
	int m_iCampaignScore[2]; // 896
	int m_iChapterScore[2]; // 904
	int m_iChapterDamage[2]; // 912
	int m_iScavengeTeamScore[10]; // 920 - 2 teams x 5 rounds
	int m_iScavengeMatchScore[2]; // 960
	float m_flTeamRoundTime[2]; // 968
	int m_iVersusDistancePerSurvivor[8]; // 976
	int m_iVersusSurvivorDeathDistance[8]; // 1008
	bool m_bSurvivorIsAliveForFinale[4]; // 1040
	int m_iUnknown1044; // 1044 Might be another bool array;
	int m_iVersusSurvivalMultiplier[2]; // 1048
	int m_iVersusDefibsUsed[2]; // 1056
	int m_iUnknown1064; // 1064
	bool m_bInIntro; // 1068
	char padding[3]; // 1069 assume padding
	float m_flRoundStartTime; // 1072
	float m_flRoundEndTime; // 1076
	float m_flAccumulatedTime; // 1080
	int m_nRoundNumber; // 1084
	int m_nRoundLimit; // 1088
	int m_iWinningTeamNumber[5]; // 1092  up to 5 maps per campaign or rounds of scav?
	float m_flTeamBestRoundTime; // 1112
	float m_flRoundDuration[2]; // 1116
	int m_nScavengeItemsRemaining; // 1124
	int m_nScavengeItemsGoal; // 1128
	int m_iServerRank; // 1132
	int m_iServerPlayerCount; // 1136
	bool m_bIsDedicatedServer; // 1140
	// implied padding[3];
	int m_iServerSteamGroupID; // 1144
	bool m_bAreTeamsFlipped; // 1148
	bool m_bInSecondHalfOfRound; // 1149
	bool m_bIsTransitioningToNextMap; // 1150
	bool m_bIsVersusVoteRestarting; // 1151
	bool m_bChallengeModeActive; // 1152
	// implied padding[3];
	int m_iSacrificeEscapees; // 1156
	float m_flUnknown1160; // 1160
};
		 
		 /*
VTable for CTerrorGameRules: (0, 0)
 Lin  Win Function
   0    0 CGameRules::Name(void)
   1    1 CMultiplayRules::Init(void)
   2    2 CBaseGameSystemPerFrame::PostInit(void)
   3    3 CBaseGameSystemPerFrame::Shutdown(void)
   4    4 CTerrorGameRules::LevelInitPreEntity(void)
   5    5 CTerrorGameRules::LevelInitPostEntity(void)
   6    6 CBaseGameSystemPerFrame::LevelShutdownPreEntity(void)
   7    7 CBaseGameSystemPerFrame::LevelShutdownPostEntity(void)
   8    8 CBaseGameSystemPerFrame::OnSave(void)
   9    9 CBaseGameSystemPerFrame::OnRestore(void)
  10   10 CBaseGameSystemPerFrame::SafeRemoveIfDesired(void)
  11   11 CBaseGameSystemPerFrame::IsPerFrame(void)
  12   12 CTerrorGameRules::~CTerrorGameRules()
  13   12 CTerrorGameRules::~CTerrorGameRules()
  14   13 CBaseGameSystemPerFrame::FrameUpdatePreEntityThink(void)
  15   14 CGameRules::FrameUpdatePostEntityThink(void)
  16   15 CBaseGameSystemPerFrame::PreClientUpdate(void)
  17   16 CMultiplayRules::Damage_IsTimeBased(int)
  18   17 CMultiplayRules::Damage_ShouldGibCorpse(int)
  19   18 CMultiplayRules::Damage_ShowOnHUD(int)
  20   19 CMultiplayRules::Damage_NoPhysicsForce(int)
  21   20 CMultiplayRules::Damage_ShouldNotBleed(int)
  22   21 CTerrorGameRules::Damage_GetTimeBased(void)
  23   22 CMultiplayRules::Damage_GetShouldGibCorpse(void)
  24   23 CTerrorGameRules::Damage_GetShowOnHud(void)
  25   24 CTerrorGameRules::Damage_GetNoPhysicsForce(void)
  26   25 CMultiplayRules::Damage_GetShouldNotBleed(void)
  27   26 CMultiplayRules::SwitchToNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *)
  28   27 CCSGameRules::GetNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *)
  29   28 CCSGameRules::ShouldCollide(int, int)
  30   29 CCSGameRules::DefaultFOV(void)
  31   30 CTerrorGameRules::GetViewVectors(void)const
  32   31 CTerrorGameRules::GetAmmoDamage(CBaseEntity *, CBaseEntity *, int)
  33   32 CGameRules::GetDamageMultiplier(void)
  34   33 CMultiplayRules::IsMultiplayer(void)
  35   34 CTerrorGameRules::GetEncryptionKey(void)
  36   35 CTerrorGameRules::InRoundRestart(void)
  37   36 CTerrorGameRules::CheckAchievementsEnabled(int)
  38   37 CMultiplayRules::GetTaggedConVarList(KeyValues *)
  39   38 CTerrorGameRules::OnBeginChangeLevel(char  const*)
  40   39 CCSGameRules::LevelShutdown(void)
  41   40 CTeamplayRules::Precache(void)
  42   41 CMultiplayRules::RefreshSkillData(bool)
  43   42 CTerrorGameRules::Think(void)
  44   43 CMultiplayRules::IsAllowedToSpawn(CBaseEntity *)
  45   44 CCSGameRules::EndGameFrame(void)
  46   45 CGameRules::IsSkillLevel(int)
  47   46 CGameRules::GetSkillLevel(void)
  48   47 CGameRules::OnSkillLevelChanged(int)
  49   48 CGameRules::SetSkillLevel(int)
  50   49 CMultiplayRules::FAllowFlashlight(void)
  51   50 CTerrorGameRules::FShouldSwitchWeapon(CBasePlayer *, CBaseCombatWeapon *)
  52   51 CMultiplayRules::IsDeathmatch(void)
  53   52 CTeamplayRules::IsTeamplay(void)
  54   53 CMultiplayRules::IsCoOp(void)
  55   54 CTerrorGameRules::GetGameDescription(void)
  56   55 CTerrorGameRules::ClientConnected(edict_t *, char  const*, char  const*, char *, int)
  57   56 CTeamplayRules::InitHUD(CBasePlayer *)
  58   57 CTerrorGameRules::ClientDisconnected(edict_t *)
  59   58 CTerrorGameRules::FlPlayerFallDamage(CBasePlayer *)
  60   59 CTeamplayRules::FPlayerCanTakeDamage(CBasePlayer *, CBaseEntity *)
  61   60 CTeamplayRules::ShouldAutoAim(CBasePlayer *, edict_t *)
  62   61 CGameRules::GetAutoAimScale(CBasePlayer *)
  63   62 CTerrorGameRules::GetAutoAimMode(void)
  64   63 CGameRules::ShouldUseRobustRadiusDamage(CBaseEntity *)
  65   64 CCSGameRules::RadiusDamage(CTakeDamageInfo  const&, Vector  const&, float, int, CBaseEntity *)
  66   65 CCSGameRules::FlPlayerFallDeathDoesScreenFade(CBasePlayer *)
  67   66 CMultiplayRules::AllowDamage(CBaseEntity *, CTakeDamageInfo  const&)
  68   67 CTerrorGameRules::PlayerSpawn(CBasePlayer *)
  69   68 CMultiplayRules::PlayerThink(CBasePlayer *)
  70   69 CTerrorGameRules::FPlayerCanRespawn(CBasePlayer *)
  71   70 CMultiplayRules::FlPlayerSpawnTime(CBasePlayer *)
  72   71 CTerrorGameRules::GetPlayerSpawnSpot(CBasePlayer *)
  73   72 CCSGameRules::IsSpawnPointValid(CBaseEntity *, CBasePlayer *)
  74   73 CMultiplayRules::AllowAutoTargetCrosshair(void)
  75   74 CCSGameRules::ClientCommand(CBaseEntity *, CCommand  const&)
  76   75 CTerrorGameRules::ClientSettingsChanged(CBasePlayer *)
  77   76 CTeamplayRules::IPointsForKill(CBasePlayer *, CBasePlayer *)
  78   77 CTerrorGameRules::PlayerKilled(CBasePlayer *, CTakeDamageInfo  const&)
  79   78 CCSGameRules::DeathNotice(CBasePlayer *, CTakeDamageInfo  const&)
  80   79 CGameRules::GetDamageCustomString(CTakeDamageInfo  const&)
  81   80 CGameRules::AdjustPlayerDamageInflicted(float)
  82   81 CGameRules::AdjustPlayerDamageTaken(CTakeDamageInfo *)
  83   82 CMultiplayRules::CanHavePlayerItem(CBasePlayer *, CBaseCombatWeapon *)
  84   83 CMultiplayRules::WeaponShouldRespawn(CBaseCombatWeapon *)
  85   84 CMultiplayRules::FlWeaponRespawnTime(CBaseCombatWeapon *)
  86   85 CMultiplayRules::FlWeaponTryRespawn(CBaseCombatWeapon *)
  87   86 CMultiplayRules::VecWeaponRespawnSpot(CBaseCombatWeapon *)
  88   87 CMultiplayRules::CanHaveItem(CBasePlayer *, CItem *)
  89   88 CMultiplayRules::PlayerGotItem(CBasePlayer *, CItem *)
  90   89 CMultiplayRules::ItemShouldRespawn(CItem *)
  91   90 CMultiplayRules::FlItemRespawnTime(CItem *)
  92   91 CMultiplayRules::VecItemRespawnSpot(CItem *)
  93   92 CMultiplayRules::VecItemRespawnAngles(CItem *)
  94   94 CGameRules::CanHaveAmmo(CBaseCombatCharacter *, int)
  95   93 CGameRules::CanHaveAmmo(CBaseCombatCharacter *, char  const*)
  96   95 CMultiplayRules::PlayerGotAmmo(CBaseCombatCharacter *, char *, int)
  97   96 CGameRules::GetAmmoQuantityScale(int)
  98   97 CCSGameRules::InitDefaultAIRelationships(void)
  99   98 CCSGameRules::AIClassText(int)
 100   99 CMultiplayRules::FlHealthChargerRechargeTime(void)
 101  100 CMultiplayRules::FlHEVChargerRechargeTime(void)
 102  101 CMultiplayRules::DeadPlayerWeapons(CBasePlayer *)
 103  102 CMultiplayRules::DeadPlayerAmmo(CBasePlayer *)
 104  103 CTeamplayRules::GetTeamID(CBaseEntity *)
 105  104 CTeamplayRules::PlayerRelationship(CBaseEntity *, CBaseEntity *)
 106  105 CTeamplayRules::PlayerCanHearChat(CBasePlayer *, CBasePlayer *)
 107  106 CGameRules::CheckChatText(CBasePlayer *, char *)
 108  107 CTeamplayRules::GetTeamIndex(char  const*)
 109  108 CTeamplayRules::GetIndexedTeamName(int)
 110  109 CTeamplayRules::IsValidTeam(char  const*)
 111  110 CTeamplayRules::ChangePlayerTeam(CBasePlayer *, char  const*, bool, bool)
 112  111 CCSGameRules::SetDefaultPlayerTeam(CBasePlayer *)
 113  112 CCSGameRules::UpdateClientData(CBasePlayer *)
 114  113 CCSGameRules::PlayTextureSounds(void)
 115  114 CMultiplayRules::PlayFootstepSounds(CBasePlayer *)
 116  115 CGameRules::AllowSoundscapes(void)
 117  116 CCSGameRules::FAllowNPCs(void)
 118  117 CMultiplayRules::EndMultiplayerGame(void)
 119  118 CTerrorGameRules::WeaponTraceEntity(CBaseEntity *, Vector  const&, Vector  const&, unsigned int, CGameTrace *)
 120  119 CTerrorGameRules::InitScripts(void)
 121  120 CTerrorGameRules::CreateStandardEntities(void)
 122  121 CTerrorGameRules::GetChatPrefix(bool, CBasePlayer *)
 123  122 CTerrorGameRules::GetChatLocation(bool, CBasePlayer *)
 124  123 CTerrorGameRules::GetChatFormat(bool, CBasePlayer *)
 125  124 CGameRules::ShouldBurningPropsEmitLight(void)
 126  125 CGameRules::CanEntityBeUsePushed(CBaseEntity *)
 127  126 CCSGameRules::CreateCustomNetworkStringTables(void)
 128  127 CGameRules::MarkAchievement(IRecipientFilter &, char  const*)
 129  128 CMultiplayRules::ResetMapCycleTimeStamp(void)
 130  129 CTerrorGameRules::UpdateGameplayStatsFromSteam(void)
 131  130 CGameRules::DoFindClientInPVS(edict_t *, unsigned char *, unsigned int)
 132  131 CGameRules::GetGameTypeName(void)
 133  132 CGameRules::GetGameType(void)
 134  133 CGameRules::ForceSplitScreenPlayersOnToSameTeam(void)
 135  134 CGameRules::IsTopDown(void)
 136  135 CGameRules::GetTopDownMovementAxis(void)
 137  136 CTerrorGameRules::GetMaxHumanPlayers(void)const
 138  137 CMultiplayRules::GetDeathScorer(CBaseEntity *, CBaseEntity *, CBaseEntity *)
 139  138 CMultiplayRules::VoiceCommand(CBaseMultiplayerPlayer *, int, int)
 140  139 CMultiplayRules::HandleTimeLimitChange(void)
 141  140 CMultiplayRules::InitCustomResponseRulesDicts(void)
 142  141 CMultiplayRules::ShutdownCustomResponseRulesDicts(void)
 143  142 CMultiplayRules::UseSuicidePenalty(void)
 144  143 CMultiplayRules::GetNextLevelName(char *, int, bool)
 145  144 CMultiplayRules::ChangeLevel(void)
 146  145 CCSGameRules::GoToIntermission(void)
 147  146 CTeamplayRules::GetCaptureValueForPlayer(CBasePlayer *)
 148  147 CTeamplayRules::TeamMayCapturePoint(int, int)
 149  148 CTeamplayRules::PlayerMayCapturePoint(CBasePlayer *, int, char *, int)
 150  149 CTeamplayRules::PlayerMayBlockPoint(CBasePlayer *, int, char *, int)
 151  150 CTeamplayRules::PointsMayBeCaptured(void)
 152  151 CTeamplayRules::SetLastCapPointChanged(int)
 153  152 CTeamplayRules::TimerMayExpire(void)
 154  153 CTeamplayRules::SetWinningTeam(int, int, bool, bool, bool)
 155  154 CTeamplayRules::SetStalemate(int, bool, bool)
 156  155 CTeamplayRules::SetSwitchTeams(bool)
 157  156 CTeamplayRules::ShouldSwitchTeams(void)
 158  157 CTeamplayRules::HandleSwitchTeams(void)
 159  158 CTeamplayRules::SetScrambleTeams(bool)
 160  159 CTeamplayRules::ShouldScrambleTeams(void)
 161  160 CTeamplayRules::HandleScrambleTeams(void)
 162  161 CTerrorGameRules::PlayersAllowedToAttack(void)const
 163  162 CTerrorGameRules::GetBuyTimeLength(void)const
 164  163 CTerrorGameRules::PopulateDeathEvent(IGameEvent *, CBaseEntity  const*, CBaseCombatCharacter  const*, CTakeDamageInfo  const&)
 165  164 CTerrorGameRules::DoesEntityBlockExplosions(CBaseEntity *)const
 166  165 CCSGameRules::DeathNoticeForEntity(CBaseCombatCharacter *, CTakeDamageInfo  const&)
 167  166 CTerrorGameRules::CheckRoundTimeExpired(void)
 168  167 CTerrorGameRules::CheckWinConditions(void)
 169  168 CTerrorGameRules::TerminateRound(float, int)
 170  169 CTerrorGameRules::TeamFull(int)
 171  170 CCSGameRules::CheckGameOver(void)
 172  171 CCSGameRules::CheckMaxRounds(void)
 173  172 CCSGameRules::CheckWinLimit(void)
 174  173 CCSGameRules::CheckFragLimit(void)
 175  174 CTerrorGameRules::CheckRestartRound(void)
 176  175 CTerrorGameRules::NeededPlayersCheck(bool &)
 177  176 CCSGameRules::SetAllowWeaponSwitch(bool)
 178  177 CCSGameRules::GetAllowWeaponSwitch(void)
 179  178 CTerrorGameRules::RestartRound(void)
 180  179 CTerrorGameRules::CleanUpMap(void)
 181  180 CTerrorGameRules::PopulateDeathEvent(KeyValues *, CBaseEntity  const*, CBaseCombatCharacter  const*, CTakeDamageInfo  const&)
 182  181 CTerrorGameRules::TrackPlayerZombieDamage(CTerrorPlayer *, int, bool)
 183  182 CTerrorGameRules::GetPlayerZombieDamage(ZombieClassType, bool)
 184  183 CTerrorGameRules::ClearPlayerZombieDamage(void)
 */

#endif // _INCLUDE_GAMERULES_H_
