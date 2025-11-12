/*
===========================================================================
Copyright (C) 1999 - 2005, Id Software, Inc.
Copyright (C) 2000 - 2013, Raven Software, Inc.
Copyright (C) 2001 - 2013, Activision, Inc.
Copyright (C) 2013 - 2015, OpenJK contributors

This file is part of the OpenJK source code.

OpenJK is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License version 2 as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, see <http://www.gnu.org/licenses/>.
===========================================================================
*/

#include "qcommon/q_version.h"

#if defined(XCVAR_PROTO)
	#define XCVAR_DEF( name, defVal, update, flags, announce ) extern vmCvar_t name;
#elif defined(XCVAR_DECL)
	#define XCVAR_DEF( name, defVal, update, flags, announce ) vmCvar_t name;
#elif defined(XCVAR_LIST)
	#define XCVAR_DEF( name, defVal, update, flags, announce ) { & name , #name , defVal , update , flags , announce },
#else
	#warning "missing XCVAR expansion def"
	#define XCVAR_DEF( ... )
#endif

XCVAR_DEF( bg_fighterAltControl,		"0",			NULL,						CVAR_SYSTEMINFO,								qtrue )
XCVAR_DEF( capturelimit,				"8",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( com_optvehtrace,				"0",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( d_altRoutes,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_asynchronousGroupAI,		"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_break,						"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_JediAI,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_noGroupAI,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_noroam,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_npcai,						"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_npcaiming,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_npcfreeze,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_noIntermissionWait,		"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( d_patched,					"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_perPlayerGhoul2,			"0",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_powerDuelPrint,			"0",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( d_projectileGhoul2Collision,	"1",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberAlwaysBoxTrace,		"0",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberBoxTraceSize,			"0",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberCombat,				"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( d_saberGhoul2Collision,		"1",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberInterpolate,			"0",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( d_saberKickTweak,			"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( d_saberSPStyleDamage,		"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( d_saberStanceDebug,			"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( d_siegeSeekerNPC,			"0",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( dedicated,					"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( developer,					"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( dmflags,						"0",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( duel_fraglimit,				"10",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( fraglimit,					"20",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )
XCVAR_DEF( g_adaptRespawn,				"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_allowDuelSuicide,			"1",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_allowHighPingDuelist,		"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_allowNPC,					"1",			NULL,						CVAR_CHEAT,										qtrue )
XCVAR_DEF( g_allowTeamVote,				"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_allowVote,					"-1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_antiFakePlayer,			"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_armBreakage,				"0",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_austrian,					"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_autoMapCycle,				"0",			NULL,						CVAR_ARCHIVE|CVAR_NORESTART,					qtrue )
XCVAR_DEF( g_banIPs,					"",				NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_charRestrictRGB,			"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_duelWeaponDisable,			"1",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qtrue )
XCVAR_DEF( g_debugAlloc,				"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_debugDamage,				"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_debugMelee,				"0",			NULL,						CVAR_SERVERINFO,								qtrue )
XCVAR_DEF( g_debugMove,					"0",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_debugSaberLocks,			"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( g_debugServerSkel,			"0",			NULL,						CVAR_CHEAT,										qfalse )
// Alnico mod: Option to disable the chat
XCVAR_DEF( g_disableChat,				"0",			NULL,						CVAR_ARCHIVE,									qtrue )
#ifdef _DEBUG
XCVAR_DEF( g_disableServerG2,			"0",			NULL,						CVAR_NONE,										qtrue )
#endif
XCVAR_DEF( g_dismember,					"0",			NULL,						CVAR_ARCHIVE,									qtrue )
////////////////////////////////////////////////////////////////////////////////
// Alnico mod: Disruptor mods
// Disruptor alt damage (does not apply to "instant alt")
XCVAR_DEF( g_disruptor_altDamage,		"100",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor energy (ammo) required per shot (alt fire - does not apply to "instant alt")
XCVAR_DEF( g_disruptor_altEnergyPerShot,"6",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor alt firing rate (time between shots, in milliseconds) - does not apply to "instant alt"
XCVAR_DEF( g_disruptor_altFireTime,		"1300",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor main damage (does not apply to siege mode) - also applies to "alt fire" in "instant alt" mode
XCVAR_DEF( g_disruptor_damage,			"30",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor: disable scope (unfortunately, the scope will still flash on and off, due to client-size prediction)
XCVAR_DEF( g_disruptor_disableScope,	"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor energy (ammo) required per shot (main fire - also applies to "instant alt")
XCVAR_DEF( g_disruptor_energyPerShot,	"5",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor main firing rate (time between shots, in milliseconds) - also applies to "instant alt"
XCVAR_DEF( g_disruptor_fireTime,		"600",			NULL,						CVAR_ARCHIVE,									qfalse )
// Instant Disruptor alt fire (becomes identical to the main fire mode, just zoomed in)
XCVAR_DEF( g_disruptor_instantAlt,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor main fire also disintegrates (if it results in a kill) - also applies to the "instant alt" mode
XCVAR_DEF( g_disruptor_mainDisint,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor disintegration prevents death scream
XCVAR_DEF( g_disruptor_muteDisint,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor: allow jumping while zoomed in
XCVAR_DEF( g_disruptor_scopeJump,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// Disruptor main damage (siege only)
XCVAR_DEF( g_disruptor_siegeDamage,		"50",			NULL,						CVAR_ARCHIVE,									qfalse )
// End of Disruptor mods (Alnico Mod)
////////////////////////////////////////////////////////////////////////////////
XCVAR_DEF( g_doWarmup,					"0",			NULL,						CVAR_NONE,										qtrue )
//XCVAR_DEF( g_engineModifications,		"1",			NULL,						CVAR_ARCHIVE,									qfalse )
// Alnico mod: Allow health / armor items in Duel mode?
XCVAR_DEF( g_duel_allowHealthItems,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// Alnico mod: Fall damage multiplier
XCVAR_DEF( g_fallDamageScale,			"1.0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_ff_objectives,				"0",			NULL,						CVAR_CHEAT|CVAR_NORESTART,						qtrue )
XCVAR_DEF( g_filterBan,					"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_fixSaberDisarmBonus,		"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_fixSaberMoveData,			"1",			CVU_FixSaberMoveData,		CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_fixRunWalkAnims,			"1",			CVU_FixRunWalkAnims,		CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_fixWeaponAttackAnim,		"1",			CVU_FixWeaponAttackAnim,	CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_forceBasedTeams,			"0",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qfalse )
XCVAR_DEF( g_forceClientUpdateRate,		"250",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_forceDodge,				"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_forcePowerDisable,			"0",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qtrue )
XCVAR_DEF( g_forceRegenTime,			"200",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_forceRespawn,				"60",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_fraglimitVoteCorrection,	"1",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_friendlyFire,				"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_friendlySaber,				"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_g2TraceLod,				"3",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_gametype,					"0",			NULL,						CVAR_SERVERINFO|CVAR_LATCH,						qfalse )
XCVAR_DEF( g_gravity,					"800",			NULL,						CVAR_NONE,										qtrue )
// Alnico mod: Quake-3-style "impressive" award for 2 consecutive disruptor hits,
//     on supported clients (e.g. TaystJK with cg_drawRewards 2)
XCVAR_DEF( g_impressiveReward,          "0",            NULL,                       CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_inactivity,				"0",			NULL,						CVAR_NONE,										qtrue )
// Alnico mod: switch weapons without waiting for the fireTime delay
XCVAR_DEF( g_instantWeaponChange,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_jediVmerc,					"0",			NULL,						CVAR_SERVERINFO|CVAR_LATCH|CVAR_ARCHIVE,		qtrue )
XCVAR_DEF( g_knockback,					"1000",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_locationBasedDamage,		"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_log,						"games.log",	NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_logClientInfo,				"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_logSync,					"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_maxConnPerIP,				"3",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_maxForceRank,				"7",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qfalse )
XCVAR_DEF( g_maxGameClients,			"0",			NULL,						CVAR_SERVERINFO|CVAR_LATCH|CVAR_ARCHIVE,		qfalse )
XCVAR_DEF( g_maxHolocronCarry,			"3",			NULL,						CVAR_LATCH,										qfalse )
XCVAR_DEF( g_motd,						"",				NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_needpass,					"0",			NULL,						CVAR_SERVERINFO|CVAR_ROM,						qfalse )
XCVAR_DEF( g_noSpecMove,				"0",			NULL,						CVAR_SERVERINFO,								qtrue )
XCVAR_DEF( g_npcspskill,				"0",			NULL,						CVAR_ARCHIVE|CVAR_INTERNAL,						qfalse )
XCVAR_DEF( g_password,					"",				NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_powerDuelEndHealth,		"90",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_powerDuelStartHealth,		"150",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_privateDuel,				"1",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_randFix,					"1",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_restarted,					"0",			NULL,						CVAR_ROM,										qfalse )
XCVAR_DEF( g_saberBladeFaces,			"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_saberDamageScale,			"1",			NULL,						CVAR_ARCHIVE,									qtrue )
#ifdef DEBUG_SABER_BOX
XCVAR_DEF( g_saberDebugBox,				"0",			NULL,						CVAR_CHEAT,										qfalse )
#endif
#ifndef FINAL_BUILD
XCVAR_DEF( g_saberDebugPrint,			"0",			NULL,						CVAR_CHEAT,										qfalse )
#endif
XCVAR_DEF( g_saberDmgDelay_Idle,		"350",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberDmgDelay_Wound,		"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberDmgVelocityScale,		"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberLockFactor,			"2",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberLocking,				"1",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberLockRandomNess,		"2",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_saberRealisticCombat,		"0",			NULL,						CVAR_CHEAT,										qfalse )
XCVAR_DEF( g_saberRestrictForce,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_saberTraceSaberFirst,		"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_saberWallDamageScale,		"0.4",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_securityLog,				"1",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_showDuelHealths,			"0",			NULL,						CVAR_SERVERINFO,								qfalse )
XCVAR_DEF( g_siegeRespawn,				"20",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_siegeTeam1,				"none",			NULL,						CVAR_ARCHIVE|CVAR_SERVERINFO,					qfalse )
XCVAR_DEF( g_siegeTeam2,				"none",			NULL,						CVAR_ARCHIVE|CVAR_SERVERINFO,					qfalse )
XCVAR_DEF( g_siegeTeamSwitch,			"1",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE,					qfalse )
XCVAR_DEF( g_slowmoDuelEnd,				"0",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_smoothClients,				"1",			NULL,						CVAR_NONE,										qfalse )
////////////////////////////////////////////////////////////////////////////////
// Alnico mod: "Custom Spawn Equipment" cvars (only applies to GT_FFA, GT_TEAM, and GT_CTF)
// Ammo
XCVAR_DEF( g_spawn_ammo_blaster,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_spawn_ammo_powercell,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_spawn_ammo_metalBolts,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_spawn_ammo_rockets,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_spawn_ammo_thermal,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_spawn_ammo_tripmine,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_spawn_ammo_detpack,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// g_spawn_armor: starting armor (shields)
XCVAR_DEF( g_spawn_armor,			    "25",			NULL,						CVAR_ARCHIVE,									qfalse )
// g_spawn_equippedHoldableItem: which holdable item should be equipped at spawn
XCVAR_DEF( g_spawn_equippedHoldableItem,"0",			NULL,						CVAR_ARCHIVE,									qfalse )
// g_spawn_equippedWeapon: By default, the player will start with WP_SABER equipped
XCVAR_DEF( g_spawn_equippedWeapon,	    "3",			NULL,						CVAR_ARCHIVE,									qfalse )
// g_spawn_health: starting health
XCVAR_DEF( g_spawn_health,			    "125",			NULL,						CVAR_ARCHIVE,									qfalse )
// Holdable items (bitmask, e.g. Jetpack + Binoculars + ..., default: none)
XCVAR_DEF( g_spawn_holdableItems,	    "0",			NULL,						CVAR_ARCHIVE,									qfalse )
// g_spawn_max_health: Max (idle) health. Also impacts armor (shields)
//     Starting health / armor (g_spawn_health / g_spawn_armor) can be higher than g_spawn_max_health, but will slowly decrease to this value.
XCVAR_DEF( g_spawn_max_health,		    "100",			NULL,						CVAR_ARCHIVE,									qtrue )
// g_spawn_trueJedi: cannot pickup weapons other than WP_SABER, cannot pickup certain items (health, holdable items, ...)
XCVAR_DEF( g_spawn_trueJedi,		    "0",			NULL,						CVAR_ARCHIVE,									qtrue )
// g_spawn_trueNonJedi: disable force powers (including jump level 1)
XCVAR_DEF( g_spawn_trueNonJedi,		    "0",			NULL,						CVAR_ARCHIVE,									qtrue )
// g_spawn_weapons: available weapons (bitmask). Default value: WP_SABER and WP_BRYAR_PISTOL
XCVAR_DEF( g_spawn_weapons,				"24",			NULL,						CVAR_ARCHIVE,									qfalse )
// End of "Custom Spawn Equipment" cvars (Alnico mod)
////////////////////////////////////////////////////////////////////////////////
XCVAR_DEF( g_spawnInvulnerability,		"3000",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_speed,						"250",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_statLog,					"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_statLogFile,				"statlog.log",	NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_stepSlideFix,				"1",			NULL,						CVAR_SERVERINFO,								qtrue )
////////////////////////////////////////////////////////////////////////////////
// Alnico mod: Stun Baton mods
// Stun baton alt firing rate (time between shots)
XCVAR_DEF( g_stunBaton_altFireTime,		"400",			NULL,						CVAR_ARCHIVE,									qfalse )
// Stun baton damage (both for main and alt fire)
XCVAR_DEF( g_stunBaton_damage,			"20",			NULL,						CVAR_ARCHIVE,									qfalse )
// Stun baton main firing rate (time between shots)
XCVAR_DEF( g_stunBaton_fireTime,		"400",			NULL,						CVAR_ARCHIVE,									qfalse )
// End of Stun Baton mods (Alnico Mod)
////////////////////////////////////////////////////////////////////////////////
XCVAR_DEF( g_synchronousClients,		"0",			NULL,						CVAR_SYSTEMINFO,								qfalse )
XCVAR_DEF( g_teamAutoJoin,				"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_teamForceBalance,			"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_timeouttospec,				"70",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_userinfoValidate,			"25165823",		NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( g_useWhileThrowing,			"1",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( g_voteDelay,					"3000",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( g_warmup,					"20",			NULL,						CVAR_ARCHIVE,									qtrue )
XCVAR_DEF( g_weaponDisable,				"0",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_LATCH,		qtrue )
XCVAR_DEF( g_weaponRespawn,				"5",			NULL,						CVAR_NONE,										qtrue )
// Alnico mod: Welcome message
XCVAR_DEF( g_welcomeMsg,				"",				NULL,						CVAR_ARCHIVE,									qfalse )
// Alnico mod: Welcome message duration (in seconds)
XCVAR_DEF( g_welcomeMsgDuration,		"0",			NULL,						CVAR_ARCHIVE,									qfalse )
XCVAR_DEF( gamedate,					SOURCE_DATE,	NULL,						CVAR_ROM,										qfalse )
XCVAR_DEF( gamename,					JK_VERSION,		NULL,						CVAR_SERVERINFO|CVAR_ROM,						qfalse )
XCVAR_DEF( pmove_fixed,					"0",			NULL,						CVAR_SYSTEMINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( pmove_float,					"0",			NULL,						CVAR_SYSTEMINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( pmove_msec,					"8",			NULL,						CVAR_SYSTEMINFO|CVAR_ARCHIVE,					qtrue )
XCVAR_DEF( RMG,							"0",			NULL,						CVAR_NONE,										qtrue )
XCVAR_DEF( sv_cheats,					"1",			NULL,						CVAR_NONE,										qfalse )
XCVAR_DEF( sv_fps,						"40",			NULL,						CVAR_ARCHIVE|CVAR_SERVERINFO,					qtrue )
XCVAR_DEF( sv_maxclients,				"8",			NULL,						CVAR_SERVERINFO|CVAR_LATCH|CVAR_ARCHIVE,		qfalse )
XCVAR_DEF( timelimit,					"0",			NULL,						CVAR_SERVERINFO|CVAR_ARCHIVE|CVAR_NORESTART,	qtrue )

#undef XCVAR_DEF
