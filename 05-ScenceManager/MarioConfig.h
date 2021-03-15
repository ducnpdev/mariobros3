#pragma once

#define MARIO_ANI_BIG_IDLE_RIGHT			0
#define MARIO_ANI_BIG_IDLE_LEFT				1
#define MARIO_ANI_SMALL_IDLE_RIGHT			2
#define MARIO_ANI_SMALL_IDLE_LEFT			3
#define MARIO_ANI_BIG_WALKING_RIGHT			4
#define MARIO_ANI_BIG_WALKING_LEFT			5
#define MARIO_ANI_SMALL_WALKING_RIGHT		6
#define MARIO_ANI_SMALL_WALKING_LEFT		7
#define MARIO_ANI_DIE						8
#define	LEVEL_MARIO_SMAIL					1
#define	LEVEL_MARIO_BIG						2
#define MARIO_BIG_BBOX_WIDTH				15
#define MARIO_BIG_BBOX_HEIGHT				27
#define MARIO_SMALL_BBOX_WIDTH				13
#define MARIO_SMALL_BBOX_HEIGHT				15
#define MARIO_UNTOUCHABLE_TIME				5000

// **************** MARIO -> DYANMIC POSITION ****************
#define NUMBER_AFTER_MARIO_SIT_DOWN		10



// **************** MARIO -> BoundingBox - BoundingBox ****************
#define BBOX_MARIO_BIG_SIT_WIDTH			14
#define BBOX_MARIO_BIG_SIT_HEIGHT			18
#define BBOX_MARIO_BIG_WIDTH			    14
#define BBOX_MARIO_BIG_HEIGHT			    27

#define BBOX_MARIO_TAIL_SIT_WIDTH			14
#define BBOX_MARIO_TAIL_SIT_HEIGHT			18
#define BBOX_MARIO_TAIL_WIDTH			    14
#define BBOX_MARIO_TAIL_HEIGHT			    27
#define BBOX_MARIO_TAIL_SPLUS_LEFT		    7

#define BBOX_MARIO_FIRE_SIT_WIDTH			14
#define BBOX_MARIO_FIRE_SIT_HEIGHT			18
#define BBOX_MARIO_FIRE_WIDTH			    14
#define BBOX_MARIO_FIRE_HEIGHT			    27

// **************** MARIO -> LEVEL - LEVEL ****************
#define DIRECTION_MARIO_RIGHT				1
#define DIRECTION_MARIO_LEFT				-1
#define LEVEL_MARIO_SMAIL				1
#define LEVEL_MARIO_BIG				    2
#define LEVEL_MARIO_TAIL				3
#define LEVEL_MARIO_FIRE				4


// **************** MARIO -> SPEED - SPEED ****************
#define SPEED_MARIO_WALKING					0.08f 
#define SPEED_MARIO_RUNNING					0.1f
#define SPEED_MARIO_RUNNING_FAST			0.12f
#define MARIO_JUMP_SPEED_Y					0.15f
#define SPEED_MARIO_JUMP_DEFLECT			0.2f
#define MARIO_GRAVITY						0.001f
#define SPEED_MARIO_DIE_DEFLECT				0.5f
#define MARIO_DIE_DEFLECT_SPEED							0.5f
// **************** MARIO -> STATE - STATE ****************
#define STATE_MARIO_IDLE					0
#define STATE_MARIO_WALKING_RIGHT			110
#define STATE_MARIO_WALKING_LEFT			120
#define STATE_MARIO_RUNNING_RIGHT			130
#define STATE_MARIO_RUNNING_LEFT			140
#define STATE_MARIO_RUNNING_FAST_RIGHT			150
#define STATE_MARIO_RUNNING_FAST_LEFT			160
#define STATE_MARIO_RUNNING_TURN_RIGHT			170
#define STATE_MARIO_RUNNING_TURN_LEFT			180
#define STATE_MARIO_SITDOWN			190
#define STATE_MARIO_TURN_RIGHT 200
#define STATE_MARIO_TURN_LEFT 210

#define STATE_MARIO_JUMP					300
#define STATE_MARIO_DIE						999

// **************** MARIO -> TIME - TIME ****************

// **************** MARIO -> AMIMATION - ANIMATION ****************
// ## mario small ##
#define ANI_MARIO_SMALL_IDLE_RIGHT			0
#define ANI_MARIO_SMALL_IDLE_LEFT			1
#define ANI_MARIO_SMALL_WALK_RIGHT			2
#define ANI_MARIO_SMALL_WALK_LEFT			3
#define ANI_MARIO_SMALL_RUN_FAST_RIGHT			4
#define ANI_MARIO_SMALL_RUN_FAST_LEFT			5
#define ANI_MARIO_SMALL_JUMP_RIGHT			6
#define ANI_MARIO_SMALL_JUMP_LEFT			7
#define ANI_MARIO_SMALL_KICK_RIGHT			8
#define ANI_MARIO_SMALL_KICK_LEFT			9
#define ANI_MARIO_SMALL_IDLE_TORTOISESHELL_RIGHT		10
#define ANI_MARIO_SMALL_IDLE_TORTOISESHELL_LEFT			11
#define ANI_MARIO_SMALL_WALK_TORTOISESHELL_RIGHT		12
#define ANI_MARIO_SMALL_WALK_TORTOISESHELL_LEFT			13
#define ANI_MARIO_SMALL_JUMP_TORTOISESHELL_RIGHT		14
#define ANI_MARIO_SMALL_JUMP_TORTOISESHELL_LEFT			15
#define ANI_MARIO_SMALL_TURN_RIGHT			16
#define ANI_MARIO_SMALL_TURN_LEFT			17
#define ANI_MARIO_SMALL_MAX_POWER_RIGHT		18
#define ANI_MARIO_SMALL_MAX_POWER_LEFT		19
#define ANI_MARIO_SMALL_RUN_RIGHT			20
#define ANI_MARIO_SMALL_RUN_LEFT			21

// ## mario big ##
#define ANI_MARIO_BIG_IDLE_RIGHT			22
#define ANI_MARIO_BIG_IDLE_LEFT				23
#define ANI_MARIO_BIG_WALK_RIGHT			24
#define ANI_MARIO_BIG_WALK_LEFT				25
#define ANI_MARIO_BIG_RUN_RIGHT				26
#define ANI_MARIO_BIG_RUN_LEFT				27
#define ANI_MARIO_BIG_JUMP_RIGHT			28
#define ANI_MARIO_BIG_JUMP_LEFT				29  
#define ANI_MARIO_BIG_KICK_RIGHT			30	
#define ANI_MARIO_BIG_KICK_LEFT				31
#define ANI_MARIO_BIG_IDLE_TORTOISESHELL_RIGHT			32
#define ANI_MARIO_BIG_IDLE_TORTOISESHELL_LEFT			33
#define ANI_MARIO_BIG_WALK_TORTOISESHELL_RIGHT			34
#define ANI_MARIO_BIG_WALK_TORTOISESHELL_LEFT			35
#define ANI_MARIO_BIG_JUMP_TORTOISESHELL_RIGHT			36
#define ANI_MARIO_BIG_JUMP_TORTOISESHELL_LEFT			37
#define ANI_MARIO_BIG_TURN_RIGHT			38
#define ANI_MARIO_BIG_TURN_LEFT				39
#define ANI_MARIO_BIG_RUN_FAST_RIGHT		40
#define ANI_MARIO_BIG_RUN_FAST_LEFT			41
#define ANI_MARIO_BIG_SIT_RIGHT				42
#define ANI_MARIO_BIG_SIT_LEFT				43
#define ANI_MARIO_BIG_MAX_POWER_RIGHT		44
#define ANI_MARIO_BIG_MAX_POWER_LEFT		45

// ## mario tail ##
#define ANI_MARIO_TAIL_IDLE_RIGHT			46
#define ANI_MARIO_TAIL_IDLE_LEFT				47
#define ANI_MARIO_TAIL_WALK_RIGHT			48
#define ANI_MARIO_TAIL_WALK_LEFT				49
#define ANI_MARIO_TAIL_RUN_RIGHT				50
#define ANI_MARIO_TAIL_RUN_LEFT				51
#define ANI_MARIO_TAIL_JUMP_RIGHT			52
#define ANI_MARIO_TAIL_JUMP_LEFT				53
#define ANI_MARIO_TAIL_KICK_RIGHT			54	
#define ANI_MARIO_TAIL_KICK_LEFT				55
#define ANI_MARIO_TAIL_IDLE_TORTOISESHELL_RIGHT			56
#define ANI_MARIO_TAIL_IDLE_TORTOISESHELL_LEFT			57
#define ANI_MARIO_TAIL_WALK_TORTOISESHELL_RIGHT			58
#define ANI_MARIO_TAIL_WALK_TORTOISESHELL_LEFT			59
#define ANI_MARIO_TAIL_JUMP_TORTOISESHELL_RIGHT			60
#define ANI_MARIO_TAIL_JUMP_TORTOISESHELL_LEFT			61
#define ANI_MARIO_TAIL_TURN_RIGHT			62
#define ANI_MARIO_TAIL_TURN_LEFT				63
#define ANI_MARIO_TAIL_RUN_FAST_RIGHT		64
#define ANI_MARIO_TAIL_RUN_FAST_LEFT			65
#define ANI_MARIO_TAIL_SIT_RIGHT				66
#define ANI_MARIO_TAIL_SIT_LEFT				67
#define ANI_MARIO_TAIL_FLY_LOW_RIGHT			68
#define ANI_MARIO_TAIL_FLY_LOW_LEFT			69
#define ANI_MARIO_TAIL_FLY_HIGH_RIGHT			70
#define ANI_MARIO_TAIL_FLY_HIGH_LEFT			71
#define ANI_MARIO_TAIL_MAX_POWER_RIGHT		72
#define ANI_MARIO_TAIL_MAX_POWER_LEFT		73

// ## mario fire ##
#define ANI_MARIO_FIRE_IDLE_RIGHT			74
#define ANI_MARIO_FIRE_IDLE_LEFT			75
#define ANI_MARIO_FIRE_WALK_RIGHT			76
#define ANI_MARIO_FIRE_WALK_LEFT			77
#define ANI_MARIO_FIRE_RUN_RIGHT			78
#define ANI_MARIO_FIRE_RUN_LEFT				79
#define ANI_MARIO_FIRE_JUMP_RIGHT			80
#define ANI_MARIO_FIRE_JUMP_LEFT			81
#define ANI_MARIO_FIRE_KICK_RIGHT			82	
#define ANI_MARIO_FIRE_KICK_LEFT			83
#define ANI_MARIO_FIRE_IDLE_TORTOISESHELL_RIGHT	84
#define ANI_MARIO_FIRE_IDLE_TORTOISESHELL_LEFT	85
#define ANI_MARIO_FIRE_WALK_TORTOISESHELL_RIGHT	86
#define ANI_MARIO_FIRE_WALK_TORTOISESHELL_LEFT			87
#define ANI_MARIO_FIRE_JUMP_TORTOISESHELL_RIGHT			88
#define ANI_MARIO_FIRE_JUMP_TORTOISESHELL_LEFT			89
#define ANI_MARIO_FIRE_TURN_RIGHT			90
#define ANI_MARIO_FIRE_TURN_LEFT			91
#define ANI_MARIO_FIRE_RUN_FAST_RIGHT		92
#define ANI_MARIO_FIRE_RUN_FAST_LEFT		93
#define ANI_MARIO_FIRE_SIT_RIGHT			94
#define ANI_MARIO_FIRE_SIT_LEFT				95
#define ANI_MARIO_FIRE_SHOOT_RIGHT			96
#define ANI_MARIO_FIRE_SHOOT_LEFT			97
#define ANI_MARIO_FIRE_MAX_POWER_RIGHT		98
#define ANI_MARIO_FIRE_MAX_POWER_LEFT		99

// ## mario special ##
#define ANI_MARIO_SMALL_WORLD_MAP		100
#define ANI_MARIO_BIG_WORLD_MAP			101
#define ANI_MARIO_TAIL_WORLD_MAP		102
#define ANI_MARIO_FIRE_WORLD_MAP		103
#define ANI_MARIO_SMALL_DIE				104


