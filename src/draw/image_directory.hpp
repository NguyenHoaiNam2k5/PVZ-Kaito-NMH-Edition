#pragma once
#include <map>
#include <string>
using namespace std;

#define ZOMBIE_CREDIT_DIRECTORY rand(ZOMBIE_CREDIT1_DIRECTORY, ZOMBIE_CREDIT2_DIRECTORY)
#define ZOMBIE_WALK_DIRECTORY rand(ZOMBIE_WALK1_DIRECTORY, ZOMBIE_WALK2_DIRECTORY)
#define ARMLESS_ZOMBIE_WALK_DIRECTORY rand(ARMLESS_ZOMBIE_WALK1_DIRECTORY, ARMLESS_ZOMBIE_WALK2_DIRECTORY)
#define ZOMBIE_DIE_DIRECTORY rand(ZOMBIE_DIE1_DIRECTORY, ZOMBIE_DIE2_DIRECTORY)

#define FLAG_ZOMBIE_WALK_1_DIRECTORY rand(FLAG_ZOMBIE_WALK1_1_DIRECTORY, FLAG_ZOMBIE_WALK2_1_DIRECTORY)
#define FLAG_ZOMBIE_WALK_2_DIRECTORY rand(FLAG_ZOMBIE_WALK1_2_DIRECTORY, FLAG_ZOMBIE_WALK2_2_DIRECTORY)
#define FLAG_ZOMBIE_WALK_3_DIRECTORY rand(FLAG_ZOMBIE_WALK1_3_DIRECTORY, FLAG_ZOMBIE_WALK2_3_DIRECTORY)

#define DOOR_ZOMBIE_WALK_1_DIRECTORY rand(DOOR_ZOMBIE_WALK1_1_DIRECTORY, DOOR_ZOMBIE_WALK2_1_DIRECTORY)
#define DOOR_ZOMBIE_WALK_2_DIRECTORY rand(DOOR_ZOMBIE_WALK1_2_DIRECTORY, DOOR_ZOMBIE_WALK2_2_DIRECTORY)
#define DOOR_ZOMBIE_WALK_3_DIRECTORY rand(DOOR_ZOMBIE_WALK1_3_DIRECTORY, DOOR_ZOMBIE_WALK2_3_DIRECTORY)

/*
Contain all image used for SDL
*/
enum ImageType
{
    NULL_DIRECTORY = -1,

    POPCAP_LOGO_DIRECTORY,
    EA_LOGO_DIRECTORY,

    PEASHOOTER_DIRECTORY,
    SUNFLOWER_DIRECTORY,
    WALLNUT_DIRECTORY,
    SNOWPEA_DIRECTORY,
    POTATOMINE_DIRECTORY,
    CHERRYBOMB_DIRECTORY,

    PEASHOOTER_SHEET_DIRECTORY,
    PEASHOOTER_SHEET_BLINK_DIRECTORY,
    PEASHOOTER_ATTACK_DIRECTORY,
    PEASHOOTER_ATTACK_BLINK_DIRECTORY,

    SUNFLOWER_SHEET_DIRECTORY,
    SUNFLOWER_SHEET_BLINK_DIRECTORY,
    SUNFLOWER_HAPPY_DIRECTORY,
    SUNFLOWER_HAPPY_BLINK_DIRECTORY,

    WALLNUT_1_DIRECTORY,
    WALLNUT_2_DIRECTORY,
    WALLNUT_3_DIRECTORY,
    WALLNUT_4_DIRECTORY,
    WALLNUT_5_DIRECTORY,
    WALLNUT_1_BLINK_DIRECTORY,
    WALLNUT_2_BLINK_DIRECTORY,
    WALLNUT_3_BLINK_DIRECTORY,
    WALLNUT_4_BLINK_DIRECTORY,
    WALLNUT_5_BLINK_DIRECTORY,

    SNOWPEA_SHEET_DIRECTORY,
    SNOWPEA_SHEET_BLINK_DIRECTORY,
    SNOWPEA_ATTACK_DIRECTORY,
    SNOWPEA_ATTACK_BLINK_DIRECTORY,

    CHERRYBOMB_SHEET_DIRECTORY,
    CHERRYBOMB_SHEET_BLINK_DIRECTORY,
    CHERRYBOMB_EXPLOSION_DIRECTORY,

    POTATOMINE_UNARMED_DIRECTORY,
    POTATOMINE_UNARMED_BLINK_DIRECTORY,
    POTATOMINE_RECOVER_DIRECTORY,
    POTATOMINE_RECOVER_BLINK_DIRECTORY,
    POTATOMINE_IDLE_DIRECTORY,
    POTATOMINE_ATTACK_DIRECTORY,
    POTATOMINE_EXPLOSION_DIRECTORY,

    SEED_CHOSEN_DIRECTORY,
    SEED_PACKET_DIRECTORY,
    SUN_TAG_DIRECTORY,
    SEED_PACKET_BOT_BORDER_DIRECTORY,

    SUNFLOWER_TROPHY_DIRECTORY,
    AWARD_SCREEN_DIRECTORY,

    PEA_DIRECTORY,
    PEA_EXPLODE_DIRECTORY,
    SNOWZ_PEA_DIRECTORY,
    SNOWZ_PEA_EXPLODE_DIRECTORY,

    STARTING_SCREEN_DIRECTORY,
    LOAD_BAR_DIRT_DIRECTORY,
    LOAD_BAR_GRASS_DIRECTORY,
    LOAD_BAR_SPROUT_DIRECTORY,
    LOAD_BAR_ZOMBIEHEAD_DIRECTORY,

    CHOOSE_LEVELS_1_DIRECTORY,
    CHOOSE_LEVELS_2_DIRECTORY,
    BACK_BUTTON_DIRECTORY,
    BACK_PRESS_BUTTON_DIRECTORY,
    COMPLETED_DIRECTORY,
    CONTAINER_DIRECTORY,
    DAY_DIRECTORY,
    DAY_LIT_DIRECTORY,
    NAME_DIRECTORY,
    NIGHT_DIRECTORY,
    NIGHT_LIT_DIRECTORY,
    SELECTOR_DIRECTORY,
    SELECTOR_BLINK_DIRECTORY,
    STONE_DIRECTORY,
    THUMB_BG_DAY_DIRECTORY,
    THUMB_BG_NIGHT_DIRECTORY,
    NORMAL_DIRECTORY,
    FLAG_DIRECTORY,
    CONE_DIRECTORY,
    BUCKET_DIRECTORY,
    DOOR_DIRECTORY,

    BACKGROUND_LV0_DIRECTORY,
    BACKGROUND_LV1_DIRECTORY,
    BACKGROUND_LV2_DIRECTORY,
    BACKGROUND_DIRECTORY,
    BACKGROUND_NIGHT_DIRECTORY,
    LOSING_MESSAGE_DIRECTORY,
    WINNING_MESSAGE_DIRECTORY,

    SUN_DIRECTORY,
    SUN_BAR_DIRECTORY,
    ICON_BAR_DIRECTORY,
    SHOVEL_BAR_DIRECTORY,
    SHOVEL_DIRECTORY,
    FLAG_METER,
    FLAG_METER_PROGRESS,
    FLAG_METER_PART,

    PAUSE_ICON_DIRECTORY,
    PAUSE_ICON_A_DIRECTORY,
    TURBO_ICON_DIRECTORY,
    TURBO_ICON_A_DIRECTORY,
    MENU_DIRECTORY,
    CONTINUE_DIRECTORY,
    OK_DIRECTORY,
    CANCEL_DIRECTORY,
    RENAME_MENU_DIRECTORY,
    NEW_USER_DIRECTORY,
    LEAVE_PROMPT_DIRECTORY,
    QUIT_PROMPT_DIRECTORY,
    RESET_PROMPT_DIRECTORY,
    RESTART_PROMPT_DIRECTORY,
    SLIDER_DIRECTORY,
    LOCK_DIRECTORY,

    // NORMAL ZOMBIE---------------------------------------------------
    ZOMBIE_CREDIT1_DIRECTORY,
    ZOMBIE_CREDIT2_DIRECTORY,
    ZOMBIE_ARM_DIRECTORY,
    ZOMBIE_ARM_BLINK_DIRECTORY,

    ZOMBIE_WALK1_DIRECTORY,
    ZOMBIE_WALK2_DIRECTORY,
    ZOMBIE_WALK1_BLINK_DIRECTORY,
    ZOMBIE_WALK2_BLINK_DIRECTORY,

    ZOMBIE_DIE1_DIRECTORY,
    ZOMBIE_DIE2_DIRECTORY,
    ZOMBIE_DIE1_BLINK_DIRECTORY,
    ZOMBIE_DIE2_BLINK_DIRECTORY,
    ZOMBIE_HEAD_DIRECTORY,
    ZOMBIE_HEAD_BLINK_DIRECTORY,
    ZOMBIE_BURNT_DIRECTORY,

    ZOMBIE_EATING_DIRECTORY,
    ZOMBIE_EATING_BLINK_DIRECTORY,

    // ARMLESS ZOMBIE--------------------------------------------------------

    ARMLESS_ZOMBIE_WALK1_DIRECTORY,
    ARMLESS_ZOMBIE_WALK2_DIRECTORY,
    ARMLESS_ZOMBIE_WALK1_BLINK_DIRECTORY,
    ARMLESS_ZOMBIE_WALK2_BLINK_DIRECTORY,
    ARMLESS_ZOMBIE_EATING_DIRECTORY,
    ARMLESS_ZOMBIE_EATING_BLINK_DIRECTORY,

    // FLAG ZOMBIE--------------------------------------------------------

    FLAG_ZOMBIE_WALK1_1_DIRECTORY,
    FLAG_ZOMBIE_WALK2_1_DIRECTORY,
    FLAG_ZOMBIE_WALK1_1_BLINK_DIRECTORY,
    FLAG_ZOMBIE_WALK2_1_BLINK_DIRECTORY,
    FLAG_ZOMBIE_EATING_1_DIRECTORY,
    FLAG_ZOMBIE_EATING_1_BLINK_DIRECTORY,

    FLAG_ZOMBIE_WALK1_2_DIRECTORY,
    FLAG_ZOMBIE_WALK2_2_DIRECTORY,
    FLAG_ZOMBIE_WALK1_2_BLINK_DIRECTORY,
    FLAG_ZOMBIE_WALK2_2_BLINK_DIRECTORY,
    FLAG_ZOMBIE_EATING_2_DIRECTORY,
    FLAG_ZOMBIE_EATING_2_BLINK_DIRECTORY,

    FLAG_ZOMBIE_WALK1_3_DIRECTORY,
    FLAG_ZOMBIE_WALK2_3_DIRECTORY,
    FLAG_ZOMBIE_WALK1_3_BLINK_DIRECTORY,
    FLAG_ZOMBIE_WALK2_3_BLINK_DIRECTORY,
    FLAG_ZOMBIE_EATING_3_DIRECTORY,
    FLAG_ZOMBIE_EATING_3_BLINK_DIRECTORY,

    // CONEHEAD ZOMBIE--------------------------------------------------------
    CONE_DROP_DIRECTORY,
    CONE_DROP_BLINK_DIRECTORY,
    CONE1_DIRECTORY,
    CONE1_BLINK_DIRECTORY,
    CONE2_DIRECTORY,
    CONE2_BLINK_DIRECTORY,
    CONE3_DIRECTORY,
    CONE3_BLINK_DIRECTORY,

    // BUCKETHEAD ZOMBIE--------------------------------------------------------
    BUCKET_DROP_DIRECTORY,
    BUCKET_DROP_BLINK_DIRECTORY,
    BUCKET1_DIRECTORY,
    BUCKET1_BLINK_DIRECTORY,
    BUCKET2_DIRECTORY,
    BUCKET2_BLINK_DIRECTORY,
    BUCKET3_DIRECTORY,
    BUCKET3_BLINK_DIRECTORY,

    // DOOR ZOMBIE--------------------------------------------------------
    DOOR_ZOMBIE_CREDIT1_DIRECTORY,
    DOOR_ZOMBIE_CREDIT2_DIRECTORY,

    DOOR_ZOMBIE_WALK1_1_DIRECTORY,
    DOOR_ZOMBIE_WALK2_1_DIRECTORY,
    DOOR_ZOMBIE_WALK1_1_BLINK_DIRECTORY,
    DOOR_ZOMBIE_WALK2_1_BLINK_DIRECTORY,
    DOOR_ZOMBIE_EATING_1_DIRECTORY,
    DOOR_ZOMBIE_EATING_1_BLINK_DIRECTORY,

    DOOR_ZOMBIE_WALK1_2_DIRECTORY,
    DOOR_ZOMBIE_WALK2_2_DIRECTORY,
    DOOR_ZOMBIE_WALK1_2_BLINK_DIRECTORY,
    DOOR_ZOMBIE_WALK2_2_BLINK_DIRECTORY,
    DOOR_ZOMBIE_EATING_2_DIRECTORY,
    DOOR_ZOMBIE_EATING_2_BLINK_DIRECTORY,

    DOOR_ZOMBIE_WALK1_3_DIRECTORY,
    DOOR_ZOMBIE_WALK2_3_DIRECTORY,
    DOOR_ZOMBIE_WALK1_3_BLINK_DIRECTORY,
    DOOR_ZOMBIE_WALK2_3_BLINK_DIRECTORY,
    DOOR_ZOMBIE_EATING_3_DIRECTORY,
    DOOR_ZOMBIE_EATING_3_BLINK_DIRECTORY,

    //-------------------------------------------------------
    START_READY_DIRECTORY,
    START_SET_DIRECTORY,
    START_PLANT_DIRECTORY,
    HUGE_WAVE_DIRECTORY,
    FINAL_WAVE_DIRECTORY,

    BLACK_SCREEN_DIRECTORY,
    WHITE_SCREEN_DIRECTORY,

    FRONTYARD_C1,
    FRONTYARD_C2,
    FRONTYARD_C3,
    FRONTYARD_C4,
    FRONTYARD_C5,
    FRONTYARD_C6,
    FRONTYARD_C7,
    FRONTYARD_C8,
    FRONTYARD_C9,
    FRONTYARD_R1,
    FRONTYARD_R2,
    FRONTYARD_R3,
    FRONTYARD_R4,
    FRONTYARD_R5,

    WIN_00_DIRECTORY,
    WIN_01_DIRECTORY,
    WIN_02_DIRECTORY,
    WIN_03_DIRECTORY,
    WIN_04_DIRECTORY,
    WIN_05_DIRECTORY,
    WIN_06_DIRECTORY,
    WIN_07_DIRECTORY,
    WIN_08_DIRECTORY,
    WIN_09_DIRECTORY,
    WIN_10_DIRECTORY,
    WIN_11_DIRECTORY,
    WIN_12_DIRECTORY,
    WIN_13_DIRECTORY,
    WIN_14_DIRECTORY,
    WIN_15_DIRECTORY,
    WIN_16_DIRECTORY,
    WIN_17_DIRECTORY,
    WIN_18_DIRECTORY,
    WIN_19_DIRECTORY,
    WIN_20_DIRECTORY,
    WIN_21_DIRECTORY,
    WIN_22_DIRECTORY,
    WIN_23_DIRECTORY,
    WIN_24_DIRECTORY,
    WIN_25_DIRECTORY,
    WIN_26_DIRECTORY,
    WIN_27_DIRECTORY,
    WIN_28_DIRECTORY,
    WIN_29_DIRECTORY,
    WIN_30_DIRECTORY,
    WIN_31_DIRECTORY,
    WIN_32_DIRECTORY,
    WIN_33_DIRECTORY,
    WIN_34_DIRECTORY,
    WIN_35_DIRECTORY,
    WIN_36_DIRECTORY,
    WIN_37_DIRECTORY,
    WIN_38_DIRECTORY,
    WIN_39_DIRECTORY,
    WIN_40_DIRECTORY,
    WIN_41_DIRECTORY,
    WIN_42_DIRECTORY,
    WIN_43_DIRECTORY,
    WIN_44_DIRECTORY,
    WIN_45_DIRECTORY,
    WIN_46_DIRECTORY,
    WIN_47_DIRECTORY,
    WIN_48_DIRECTORY,
    WIN_49_DIRECTORY,
    WIN_50_DIRECTORY,
    WIN_51_DIRECTORY,
    WIN_52_DIRECTORY,
    WIN_53_DIRECTORY,
    WIN_54_DIRECTORY,
    WIN_55_DIRECTORY,
    WIN_56_DIRECTORY,
    WIN_57_DIRECTORY,
    WIN_58_DIRECTORY,
    WIN_59_DIRECTORY,
    WIN_60_DIRECTORY,
    WIN_61_DIRECTORY,
    WIN_62_DIRECTORY,
    WIN_63_DIRECTORY,
    WIN_64_DIRECTORY,
    WIN_65_DIRECTORY,
    WIN_66_DIRECTORY,
    WIN_67_DIRECTORY,
    WIN_68_DIRECTORY,
    WIN_69_DIRECTORY,
    WIN_70_DIRECTORY,
    WIN_71_DIRECTORY,
    WIN_72_DIRECTORY,
    WIN_73_DIRECTORY,

    MOUSE_CURSOR_DIRECTORY,
    MOWER_DIRECTORY,

    SHADOW_DIRECTORY,
    BULLET_SHADOW_DIRECTORY,
    SOD_ROLL,
    SOD_ROLL_CAP,

    COUNT_USED_DIRECTORY
};

struct Image
{
    /*
    Contain all image directory corresponding
    */
    string img_dir;
    /*
    The number of sheet, column in sprite of images
    */
    int n_sheet, c_sheet;
    int alpha;
    Image(string _dir);
    Image(string _dir, int _n, int _c);
    Image(string _dir, int _n, int _c, int _a);
};

/*
all image in game
*/
const Image all_img[] = {
    Image("./resources/icon/PopCap.png", 0, 0, 0), // POPCAP_LOGO_DIRECTORY
    Image("./resources/icon/EA.png", 0, 0, 0),     // EA_LOGO_DIRECTORY

    Image("./resources/images/Plant_sheet/peashooter/Peashooter.png", 0, 0, 200),  // PEASHOOTER_DIRECTORY
    Image("./resources/images/Plant_sheet/sunflower/Sunflower.png", 0, 0, 200),    // SUNFLOWER_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut.png", 0, 0, 200),          // WALLNUT_DIRECTORY
    Image("./resources/images/Plant_sheet/snowpea/SnowPea.png", 0, 0, 200),        // SNOWPEA_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine.png", 0, 0, 200), // POTATOMINE_DIRECTORY
    Image("./resources/images/Plant_sheet/cherrybomb/Cherrybomb.png", 0, 0, 200),  // CHERRYBOMB_DIRECTORY

    Image("./resources/images/Plant_sheet/peashooter/peashooter_sheet.png", 60, 8),            // PEASHOOTER_SHEET_DIRECTORY
    Image("./resources/images/Plant_sheet/peashooter/peashooter_sheet_blink.png", 60, 8, 70),  // PEASHOOTER_SHEET_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/peashooter/peashooter_attack.png", 60, 8),           // PEASHOOTER_ATTACK_DIRECTORY
    Image("./resources/images/Plant_sheet/peashooter/peashooter_attack_blink.png", 60, 8, 70), // PEASHOOTER_ATTACK_BLINK_DIRECTORY

    Image("./resources/images/Plant_sheet/sunflower/sunflower_sheet.png", 60, 8),           // SUNFLOWER_SHEET_DIRECTORY
    Image("./resources/images/Plant_sheet/sunflower/sunflower_sheet_blink.png", 60, 8, 70), // SUNFLOWER_SHEET_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/sunflower/sunflower_happy.png", 60, 8),           // SUNFLOWER_HAPPY_DIRECTORY
    Image("./resources/images/Plant_sheet/sunflower/sunflower_happy_blink.png", 60, 8, 70), // SUNFLOWER_HAPPY_BLINK_DIRECTORY

    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-1.png", 58, 8),           // WALLNUT_1_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-2.png", 31, 8),           // WALLNUT_2_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-3.png", 50, 8),           // WALLNUT_3_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-4.png", 50, 8),           // WALLNUT_4_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-5.png", 50, 8),           // WALLNUT_5_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-1_blink.png", 58, 8, 70), // WALLNUT_1_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-2_blink.png", 31, 8, 70), // WALLNUT_2_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-3_blink.png", 50, 8, 70), // WALLNUT_3_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-4_blink.png", 50, 8, 70), // WALLNUT_4_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/walnut/Walnut-sheet-5_blink.png", 50, 8, 70), // WALLNUT_5_BLINK_DIRECTORY

    Image("./resources/images/Plant_sheet/snowpea/snowpea_sheet.png", 30, 8),            // SNOWPEA_SHEET_DIRECTORY
    Image("./resources/images/Plant_sheet/snowpea/snowpea_sheet_blink.png", 30, 8, 70),  // SNOWPEA_SHEET_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/snowpea/snowpea_attack.png", 30, 8),           // SNOWPEA_ATTACK_DIRECTORY
    Image("./resources/images/Plant_sheet/snowpea/snowpea_attack_blink.png", 30, 8, 70), // SNOWPEA_ATTACK_BLINK_DIRECTORY

    Image("./resources/images/Plant_sheet/cherrybomb/cherrybomb_sheet.png", 21, 8),           // CHERRYBOMB_SHEET_DIRECTORY
    Image("./resources/images/Plant_sheet/cherrybomb/cherrybomb_sheet_blink.png", 21, 8, 70), // CHERRYBOMB_SHEET_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/cherrybomb/cherrybomb_explosion.png", 84, 8),       // CHERRYBOMB_EXPLOSION_DIRECTORY

    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_unarmed.png", 27, 8),           // POTATOMINE_UNARMED_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_unarmed_blink.png", 27, 8, 70), // POTATOMINE_UNARMED_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_recover.png", 25, 8),           // POTATOMINE_RECOVER_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_recover_blink.png", 25, 8, 70), // POTATOMINE_RECOVER_BLINK_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_idle.png", 30, 8),              // POTATOMINE_IDLE_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_attack.png", 20, 8),            // POTATOMINE_ATTACK_DIRECTORY
    Image("./resources/images/Plant_sheet/potatomine/Potato_Mine_explosion.png", 32, 8),         // POTATOMINE_EXPLOSION_DIRECTORY

    Image("./resources/images/Plant_seed/Seed_Packet_Select.png"),    // SEED_CHOSEN_DIRECTORY
    Image("./resources/images/Plant_seed/Seed_Packet.png"),           // SEED_PACKET_DIRECTORY
    Image("./resources/images/Plant_seed/Sun_Tag.png"),               // SUN_TAG_DIRECTORY
    Image("./resources/images/Plant_seed/Seed_Packet_BotBorder.png"), // SEED_PACKET_BOT_BORDER_DIRECTORY

    Image("./resources/images/New_plant/Sunflower_trophy.png"), // SUNFLOWER_TROPHY_DIRECTORY
    Image("./resources/images/New_plant/AwardScreen.png"),      // AWARD_SCREEN_DIRECTORY

    Image("./resources/images/Bullets/Pea/pea.png"),                     // PEA_DIRECTORY
    Image("./resources/images/Bullets/Pea/pea_explode.png"),             // PEA_EXPLODE_DIRECTORY
    Image("./resources/images/Bullets/Snowz_pea/snowz_pea.png"),         // SNOWZ_PEA_DIRECTORY
    Image("./resources/images/Bullets/Snowz_pea/snowz_pea_explode.png"), // SNOWZ_PEA_EXPLODE_DIRECTORY

    Image("./resources/images/Background/titlescreen.png", 0, 0, 0),               // STARTING_SCREEN_DIRECTORY
    Image("./resources/images/Background/loadbar/LoadBar_dirt.png"),               // LOAD_BAR_DIRT_DIRECTORY
    Image("./resources/images/Background/loadbar/LoadBar_grass.png"),              // LOAD_BAR_GRASS_DIRECTORY
    Image("./resources/images/Background/loadbar/LoadBar_sprout.png", 18, 18),     // LOAD_BAR_SPROUT_DIRECTORY
    Image("./resources/images/Background/loadbar/LoadBar_zombiehead.png", 18, 18), // LOAD_BAR_ZOMBIEHEAD_DIRECTORY

    Image("./resources/images/Choose_level/pvz_levelselection_bg.png"),    // CHOOSE_LEVELS_1_DIRECTORY
    Image("./resources/images/Choose_level/pvz_levelselection2_bg.png"),   // CHOOSE_LEVELS_2_DIRECTORY
    Image("./resources/images/Choose_level/back.png"),                     // BACK_BUTTON_DIRECTORY
    Image("./resources/images/Choose_level/back_press.png"),               // BACK_PRESS_BUTTON_DIRECTORY
    Image("./resources/images/Choose_level/completed.png"),                // COMPLETED_DIRECTORY
    Image("./resources/images/Choose_level/container.png"),                // CONTAINER_DIRECTORY
    Image("./resources/images/Choose_level/day.png"),                      // DAY_DIRECTORY
    Image("./resources/images/Choose_level/day_lit.png"),                  //  DAY_LIT_DIRECTORY
    Image("./resources/images/Choose_level/name.png"),                     // NAME_DIRECTORY
    Image("./resources/images/Choose_level/night.png"),                    //  NIGHT_DIRECTORY
    Image("./resources/images/Choose_level/night_lit.png"),                // NIGHT_LIT_DIRECTORY
    Image("./resources/images/Choose_level/selector.png"),                 // SELECTOR_DIRECTORY
    Image("./resources/images/Choose_level/selector_blink.png", 0, 0, 70), // SELECTOR_BLINK_DIRECTORY
    Image("./resources/images/Choose_level/stone.png"),                    // STONE_DIRECTORY
    Image("./resources/images/Choose_level/thumb_bg_day.png"),             // THUMB_BG_DAY_DIRECTORY
    Image("./resources/images/Choose_level/thumb_bg_night.png"),           //  THUMB_BG_NIGHT_DIRECTORY
    Image("./resources/images/Choose_level/normal.png"),                   //  NORMAL_DIRECTORY
    Image("./resources/images/Choose_level/flag.png"),                     // FLAG_DIRECTORY
    Image("./resources/images/Choose_level/cone.png"),                     //  CONE_DIRECTORY
    Image("./resources/images/Choose_level/bucket.png"),                   // BUCKET_DIRECTORY
    Image("./resources/images/Choose_level/door.png"),                     // DOOR_DIRECTORY

    Image("./resources/images/Background/Frontyard_LV0.jpg"),   // BACKGROUND_LV0_DIRECTORY
    Image("./resources/images/Background/Frontyard_LV1.png"),   // BACKGROUND_LV1_DIRECTORY
    Image("./resources/images/Background/Frontyard_LV2.png"),   // BACKGROUND_LV2_DIRECTORY
    Image("./resources/images/Background/Frontyard.png"),       // BACKGROUND_DIRECTORY
    Image("./resources/images/Background/Frontyard_night.png"), // BACKGROUND_NIGHT_DIRECTORY
    Image("./resources/images/Background/ZombiesWon.png"),      // LOSING_MESSAGE_DIRECTORY
    Image("./resources/images/Background/Winning_Pic.png"),     // WINNING_MESSAGE_DIRECTORY

    Image("./resources/images/Icons/sun.png"),                    // SUN_DIRECTORY
    Image("./resources/images/Icons/sun_bar.png"),                // SUN_BAR_DIRECTORY
    Image("./resources/images/Icons/Item_Bar.png"),               // ICON_BAR_DIRECTORY
    Image("./resources/images/Icons/Shovel.png"),                 // SHOVEL_BAR_DIRECTORY
    Image("./resources/images/Icons/Shovel2.png", 0, 0, 200),     // SHOVEL_DIRECTORY
    Image("./resources/images/Icons/FlagMeter.png"),              // FLAG_METER
    Image("./resources/images/Icons/FlagMeterLevelProgress.png"), // FLAG_METER_PROGRESS
    Image("./resources/images/Icons/FlagMeterParts.png"),         // FLAG_METER_PART

    Image("./resources/images/Icons/Pause_Button.png"),           // PAUSE_ICON_DIRECTORY
    Image("./resources/images/Icons/Pause_Button_Activited.png"), // PAUSE_ICON_A_DIRECTORY
    Image("./resources/images/Icons/Turbo_Button.png"),           // TURBO_ICON_DIRECTORY
    Image("./resources/images/Icons/Turbo_Button_Activited.png"), // TURBO_ICON_A_DIRECTORY
    Image("./resources/images/Icons/menu.png"),                   // MENU_DIRECTORY
    Image("./resources/images/Icons/continue.png"),               // CONTINUE_DIRECTORY
    Image("./resources/images/Icons/ok.png"),                     // OK_DIRECTORY
    Image("./resources/images/Icons/cancel.png"),                 // CANCEL_DIRECTORY
    Image("./resources/images/Icons/rename_menu.png"),            // RENAME_MENU_DIRECTORY
    Image("./resources/images/Icons/new_user.png"),               // NEW_USER_DIRECTORY
    Image("./resources/images/Icons/leave_prompt.png"),           // LEAVE_PROMPT_DIRECTORY
    Image("./resources/images/Icons/quit_prompt.png"),            // QUIT_PROMPT_DIRECTORY
    Image("./resources/images/Icons/reset_prompt.png"),           // RESET_PROMPT_DIRECTORY
    Image("./resources/images/Icons/restart_prompt.png"),         // RESTART_PROMPT_DIRECTORY
    Image("./resources/images/Icons/options_sliderknob2.png"),    // SLIDER_DIRECTORY
    Image("./resources/images/Icons/lock.png"),                   // LOCK_DIRECTORY

    // NORMAL ZOMBIE------------------------------------------------------------------------
    Image("./resources/images/Zombie/Normal/Zombie_credit1.png", 22, 8),       // ZOMBIE_CREDIT1_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_credit2.png", 22, 8),       // ZOMBIE_CREDIT2_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_arm.png", 30, 8),           // ZOMBIE_ARM_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_arm_blink.png", 30, 8, 70), // ZOMBIE_ARM_BLINK_DIRECTORY

    Image("./resources/images/Zombie/Normal/ZombieWalk1.png", 46, 8),            // ZOMBIE_WALK1_DIRECTORY
    Image("./resources/images/Zombie/Normal/ZombieWalk2.png", 46, 8),            // ZOMBIE_WALK2_DIRECTORY
    Image("./resources/images/Zombie/Normal/ZombieWalk1_blink.png", 46, 8, 70),  // ZOMBIE_WALK1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Normal/ZombieWalk2_blink.png", 46, 8, 70),  // ZOMBIE_WALK2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_die1.png", 33, 8),            // ZOMBIE_DIE1_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_die2.png", 39, 8),            // ZOMBIE_DIE2_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_die1_blink.png", 33, 8, 70),  // ZOMBIE_DIE1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_die2_blink.png", 39, 8, 70),  // ZOMBIE_DIE2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_head.png", 12, 12),           // ZOMBIE_HEAD_DIRECTORY
    Image("./resources/images/Zombie/Normal/Zombie_head_blink.png", 12, 12, 70), // ZOMBIE_HEAD_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Zombie_burnt.png", 43, 8),                  // ZOMBIE_BURNT_DIRECTORY
    Image("./resources/images/Zombie/Normal/ZombieAttack.png", 39, 8),           // ZOMBIE_EATING_DIRECTORY
    Image("./resources/images/Zombie/Normal/ZombieAttack_blink.png", 39, 8, 70), // ZOMBIE_EATING_BLINK_DIRECTORY

    // ARMLESS ZOMBIE--------------------------------------------------------
    Image("./resources/images/Zombie/Armless/ArmlessWalk1.png", 46, 8),            // ARMLESS_ZOMBIE_WALK1_DIRECTORY
    Image("./resources/images/Zombie/Armless/ArmlessWalk2.png", 46, 8),            // ARMLESS_ZOMBIE_WALK2_DIRECTORY
    Image("./resources/images/Zombie/Armless/ArmlessWalk1_blink.png", 46, 8, 70),  // ARMLESS_ZOMBIE_WALK1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Armless/ArmlessWalk2_blink.png", 46, 8, 70),  // ARMLESS_ZOMBIE_WALK2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Armless/ArmlessAttack.png", 39, 8),           // ARMLESS_ZOMBIE_EATING_DIRECTORY
    Image("./resources/images/Zombie/Armless/ArmlessAttack_blink.png", 39, 8, 70), // ARMLESS_ZOMBIE_EATING_BLINK_DIRECTORY

    // FLAG ZOMBIE--------------------------------------------------------
    Image("./resources/images/Zombie/Flag/Degrade1/FlagZombieWalk1_1.png", 46, 8),            // FLAG_ZOMBIE_WALK1_1_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade1/FlagZombieWalk2_1.png", 46, 8),            // FLAG_ZOMBIE_WALK2_1_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade1/FlagZombieWalk1_1_blink.png", 46, 8, 70),  // FLAG_ZOMBIE_WALK1_1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade1/FlagZombieWalk2_1_blink.png", 46, 8, 70),  // FLAG_ZOMBIE_WALK2_1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade1/FlagZombieAttack_1.png", 39, 8),           // FLAG_ZOMBIE_EATING_1_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade1/FlagZombieAttack_1_blink.png", 39, 8, 70), // FLAG_ZOMBIE_EATING_1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade2/FlagZombieWalk1_2.png", 46, 8),            // FLAG_ZOMBIE_WALK1_2_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade2/FlagZombieWalk2_2.png", 46, 8),            // FLAG_ZOMBIE_WALK2_2_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade2/FlagZombieWalk1_2_blink.png", 46, 8, 70),  // FLAG_ZOMBIE_WALK1_2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade2/FlagZombieWalk2_2_blink.png", 46, 8, 70),  // FLAG_ZOMBIE_WALK2_2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade2/FlagZombieAttack_2.png", 39, 8),           // FLAG_ZOMBIE_EATING_2_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade2/FlagZombieAttack_2_blink.png", 39, 8, 70), // FLAG_ZOMBIE_EATING_2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade3/FlagZombieWalk1_3.png", 46, 8),            // FLAG_ZOMBIE_WALK1_3_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade3/FlagZombieWalk2_3.png", 46, 8),            // FLAG_ZOMBIE_WALK2_3_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade3/FlagZombieWalk1_3_blink.png", 46, 8, 70),  // FLAG_ZOMBIE_WALK1_3_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade3/FlagZombieWalk2_3_blink.png", 46, 8, 70),  // FLAG_ZOMBIE_WALK2_3_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade3/FlagZombieAttack_3.png", 39, 8),           // FLAG_ZOMBIE_EATING_3_DIRECTORY
    Image("./resources/images/Zombie/Flag/Degrade3/FlagZombieAttack_3_blink.png", 39, 8, 70), // FLAG_ZOMBIE_EATING_3_BLINK_DIRECTORY

    // CONEHEAD ZOMBIE------------------------------------------------------------------------
    Image("./resources/images/Zombie/Cone/cone_drop.png", 8, 8),           // CONE_DROP_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone_drop_blink.png", 8, 8, 70), // CONE_DROP_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone1.png", 178, 13),            // CONE1_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone1_blink.png", 178, 13, 70),  // CONE1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone2.png", 178, 13),            // CONE2_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone2_blink.png", 178, 13, 70),  // CONE2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone3.png", 178, 13),            // CONE3_DIRECTORY
    Image("./resources/images/Zombie/Cone/cone3_blink.png", 178, 13, 70),  // CONE3_BLINK_DIRECTORY

    // BUCKETHEAD ZOMBIE------------------------------------------------------------------------
    Image("./resources/images/Zombie/Bucket/bucket_drop.png", 8, 8),           // BUCKET_DROP_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket_drop_blink.png", 8, 8, 70), // BUCKET_DROP_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket1.png", 178, 13),            // BUCKET1_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket1_blink.png", 178, 13, 70),  // BUCKET1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket2.png", 178, 13),            // BUCKET2_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket2_blink.png", 178, 13, 70),  // BUCKET2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket3.png", 178, 13),            // BUCKET3_DIRECTORY
    Image("./resources/images/Zombie/Bucket/bucket3_blink.png", 178, 13, 70),  // BUCKET3_BLINK_DIRECTORY

    // DOOR ZOMBIE------------------------------------------------------------------------
    Image("./resources/images/Zombie/Door/DoorZombie_credit1.png", 22, 8),                    // DOOR_ZOMBIE_CREDIT1_DIRECTORY
    Image("./resources/images/Zombie/Door/DoorZombie_credit1.png", 22, 8),                    // DOOR_ZOMBIE_CREDIT2_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade1/DoorZombieWalk1_1.png", 46, 8),            // DOOR_ZOMBIE_WALK1_1_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade1/DoorZombieWalk2_1.png", 46, 8),            // DOOR_ZOMBIE_WALK2_1_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade1/DoorZombieWalk1_1_blink.png", 46, 8, 70),  // DOOR_ZOMBIE_WALK1_1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade1/DoorZombieWalk2_1_blink.png", 46, 8, 70),  // DOOR_ZOMBIE_WALK2_1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade1/DoorZombieAttack_1.png", 39, 8),           // DOOR_ZOMBIE_EATING_1_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade1/DoorZombieAttack_1_blink.png", 39, 8, 70), // DOOR_ZOMBIE_EATING_1_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade2/DoorZombieWalk1_2.png", 46, 8),            // DOOR_ZOMBIE_WALK1_2_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade2/DoorZombieWalk2_2.png", 46, 8),            // DOOR_ZOMBIE_WALK2_2_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade2/DoorZombieWalk1_2_blink.png", 46, 8, 70),  // DOOR_ZOMBIE_WALK1_2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade2/DoorZombieWalk2_2_blink.png", 46, 8, 70),  // DOOR_ZOMBIE_WALK2_2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade2/DoorZombieAttack_2.png", 39, 8),           // DOOR_ZOMBIE_EATING_2_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade2/DoorZombieAttack_2_blink.png", 39, 8, 70), // DOOR_ZOMBIE_EATING_2_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade3/DoorZombieWalk1_3.png", 46, 8),            // DOOR_ZOMBIE_WALK1_3_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade3/DoorZombieWalk2_3.png", 46, 8),            // DOOR_ZOMBIE_WALK2_3_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade3/DoorZombieWalk1_3_blink.png", 46, 8, 70),  // DOOR_ZOMBIE_WALK1_3_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade3/DoorZombieWalk2_3_blink.png", 46, 8, 70),  // DOOR_ZOMBIE_WALK2_3_BLINK_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade3/DoorZombieAttack_3.png", 39, 8),           // DOOR_ZOMBIE_EATING_3_DIRECTORY
    Image("./resources/images/Zombie/Door/Degrade3/DoorZombieAttack_3_blink.png", 39, 8, 70), // DOOR_ZOMBIE_EATING_3_BLINK_DIRECTORY

    //----------------------------------------------------------------------------------------------
    Image("./resources/images/Announcement/StartReady.png"),         // START_READY_DIRECTORY
    Image("./resources/images/Announcement/StartSet.png"),           // START_SET_DIRECTORY
    Image("./resources/images/Announcement/StartPlant.png"),         // START_PLANT_DIRECTORY
    Image("./resources/images/Announcement/NextWave.png", 0, 0, 0),  // HUGE_WAVE_DIRECTORY
    Image("./resources/images/Announcement/FinalWave.png", 0, 0, 0), // FINAL_WAVE_DIRECTORY
    Image("./resources/images/Black_Screen.png", 0, 0, 150),         // BLACK_SCREEN_DIRECTORY
    Image("./resources/images/White_Screen.png", 0, 0, 70),          // WHITE_SCREEN_DIRECTORY

    Image("./resources/images/Background/yard_blink/Frontyardc1.png", 0, 0, 100), // FRONTYARD_C1
    Image("./resources/images/Background/yard_blink/Frontyardc2.png", 0, 0, 100), // FRONTYARD_C2
    Image("./resources/images/Background/yard_blink/Frontyardc3.png", 0, 0, 100), // FRONTYARD_C3
    Image("./resources/images/Background/yard_blink/Frontyardc4.png", 0, 0, 100), // FRONTYARD_C4
    Image("./resources/images/Background/yard_blink/Frontyardc5.png", 0, 0, 100), // FRONTYARD_C5
    Image("./resources/images/Background/yard_blink/Frontyardc6.png", 0, 0, 100), // FRONTYARD_C6
    Image("./resources/images/Background/yard_blink/Frontyardc7.png", 0, 0, 100), // FRONTYARD_C7
    Image("./resources/images/Background/yard_blink/Frontyardc8.png", 0, 0, 100), // FRONTYARD_C8
    Image("./resources/images/Background/yard_blink/Frontyardc9.png", 0, 0, 100), // FRONTYARD_C9
    Image("./resources/images/Background/yard_blink/Frontyardr1.png", 0, 0, 100), // FRONTYARD_R1
    Image("./resources/images/Background/yard_blink/Frontyardr2.png", 0, 0, 100), // FRONTYARD_R2
    Image("./resources/images/Background/yard_blink/Frontyardr3.png", 0, 0, 100), // FRONTYARD_R3
    Image("./resources/images/Background/yard_blink/Frontyardr4.png", 0, 0, 100), // FRONTYARD_R4
    Image("./resources/images/Background/yard_blink/Frontyardr5.png", 0, 0, 100), // FRONTYARD_R5

    Image("./resources/images/Background/win/win_e_00.png"), // WIN_00_DIRECTORY
    Image("./resources/images/Background/win/win_e_01.png"), // WIN_01_DIRECTORY
    Image("./resources/images/Background/win/win_e_02.png"), // WIN_02_DIRECTORY
    Image("./resources/images/Background/win/win_e_03.png"), // WIN_03_DIRECTORY
    Image("./resources/images/Background/win/win_e_04.png"), // WIN_04_DIRECTORY
    Image("./resources/images/Background/win/win_e_05.png"), // WIN_05_DIRECTORY
    Image("./resources/images/Background/win/win_e_06.png"), // WIN_06_DIRECTORY
    Image("./resources/images/Background/win/win_e_07.png"), // WIN_07_DIRECTORY
    Image("./resources/images/Background/win/win_e_08.png"), // WIN_08_DIRECTORY
    Image("./resources/images/Background/win/win_e_09.png"), // WIN_09_DIRECTORY
    Image("./resources/images/Background/win/win_e_10.png"), // WIN_10_DIRECTORY
    Image("./resources/images/Background/win/win_e_11.png"), // WIN_11_DIRECTORY
    Image("./resources/images/Background/win/win_e_12.png"), // WIN_12_DIRECTORY
    Image("./resources/images/Background/win/win_e_13.png"), // WIN_13_DIRECTORY
    Image("./resources/images/Background/win/win_e_14.png"), // WIN_14_DIRECTORY
    Image("./resources/images/Background/win/win_e_15.png"), // WIN_15_DIRECTORY
    Image("./resources/images/Background/win/win_e_16.png"), // WIN_16_DIRECTORY
    Image("./resources/images/Background/win/win_e_17.png"), // WIN_17_DIRECTORY
    Image("./resources/images/Background/win/win_e_18.png"), // WIN_18_DIRECTORY
    Image("./resources/images/Background/win/win_e_19.png"), // WIN_19_DIRECTORY
    Image("./resources/images/Background/win/win_e_20.png"), // WIN_20_DIRECTORY
    Image("./resources/images/Background/win/win_e_21.png"), // WIN_21_DIRECTORY
    Image("./resources/images/Background/win/win_e_22.png"), // WIN_22_DIRECTORY
    Image("./resources/images/Background/win/win_e_23.png"), // WIN_23_DIRECTORY
    Image("./resources/images/Background/win/win_e_24.png"), // WIN_24_DIRECTORY
    Image("./resources/images/Background/win/win_e_25.png"), // WIN_25_DIRECTORY
    Image("./resources/images/Background/win/win_e_26.png"), // WIN_26_DIRECTORY
    Image("./resources/images/Background/win/win_e_27.png"), // WIN_27_DIRECTORY
    Image("./resources/images/Background/win/win_e_28.png"), // WIN_28_DIRECTORY
    Image("./resources/images/Background/win/win_e_29.png"), // WIN_29_DIRECTORY
    Image("./resources/images/Background/win/win_e_30.png"), // WIN_30_DIRECTORY
    Image("./resources/images/Background/win/win_e_31.png"), // WIN_31_DIRECTORY
    Image("./resources/images/Background/win/win_e_32.png"), // WIN_32_DIRECTORY
    Image("./resources/images/Background/win/win_e_33.png"), // WIN_33_DIRECTORY
    Image("./resources/images/Background/win/win_e_34.png"), // WIN_34_DIRECTORY
    Image("./resources/images/Background/win/win_e_35.png"), // WIN_35_DIRECTORY
    Image("./resources/images/Background/win/win_e_36.png"), // WIN_36_DIRECTORY
    Image("./resources/images/Background/win/win_e_37.png"), // WIN_37_DIRECTORY
    Image("./resources/images/Background/win/win_e_38.png"), // WIN_38_DIRECTORY
    Image("./resources/images/Background/win/win_e_39.png"), // WIN_39_DIRECTORY
    Image("./resources/images/Background/win/win_e_40.png"), // WIN_40_DIRECTORY
    Image("./resources/images/Background/win/win_e_41.png"), // WIN_41_DIRECTORY
    Image("./resources/images/Background/win/win_e_42.png"), // WIN_42_DIRECTORY
    Image("./resources/images/Background/win/win_e_43.png"), // WIN_43_DIRECTORY
    Image("./resources/images/Background/win/win_e_44.png"), // WIN_44_DIRECTORY
    Image("./resources/images/Background/win/win_e_45.png"), // WIN_45_DIRECTORY
    Image("./resources/images/Background/win/win_e_46.png"), // WIN_46_DIRECTORY
    Image("./resources/images/Background/win/win_e_47.png"), // WIN_47_DIRECTORY
    Image("./resources/images/Background/win/win_e_48.png"), // WIN_48_DIRECTORY
    Image("./resources/images/Background/win/win_e_49.png"), // WIN_49_DIRECTORY
    Image("./resources/images/Background/win/win_e_50.png"), // WIN_50_DIRECTORY
    Image("./resources/images/Background/win/win_e_51.png"), // WIN_51_DIRECTORY
    Image("./resources/images/Background/win/win_e_52.png"), // WIN_52_DIRECTORY
    Image("./resources/images/Background/win/win_e_53.png"), // WIN_53_DIRECTORY
    Image("./resources/images/Background/win/win_e_54.png"), // WIN_54_DIRECTORY
    Image("./resources/images/Background/win/win_e_55.png"), // WIN_55_DIRECTORY
    Image("./resources/images/Background/win/win_e_56.png"), // WIN_56_DIRECTORY
    Image("./resources/images/Background/win/win_e_57.png"), // WIN_57_DIRECTORY
    Image("./resources/images/Background/win/win_e_58.png"), // WIN_58_DIRECTORY
    Image("./resources/images/Background/win/win_e_59.png"), // WIN_59_DIRECTORY
    Image("./resources/images/Background/win/win_e_60.png"), // WIN_60_DIRECTORY
    Image("./resources/images/Background/win/win_e_61.png"), // WIN_61_DIRECTORY
    Image("./resources/images/Background/win/win_e_62.png"), // WIN_62_DIRECTORY
    Image("./resources/images/Background/win/win_e_63.png"), // WIN_63_DIRECTORY
    Image("./resources/images/Background/win/win_e_64.png"), // WIN_64_DIRECTORY
    Image("./resources/images/Background/win/win_e_65.png"), // WIN_65_DIRECTORY
    Image("./resources/images/Background/win/win_e_66.png"), // WIN_66_DIRECTORY
    Image("./resources/images/Background/win/win_e_67.png"), // WIN_67_DIRECTORY
    Image("./resources/images/Background/win/win_e_68.png"), // WIN_68_DIRECTORY
    Image("./resources/images/Background/win/win_e_69.png"), // WIN_69_DIRECTORY
    Image("./resources/images/Background/win/win_e_70.png"), // WIN_70_DIRECTORY
    Image("./resources/images/Background/win/win_e_71.png"), // WIN_71_DIRECTORY
    Image("./resources/images/Background/win/win_e_72.png"), // WIN_72_DIRECTORY
    Image("./resources/images/Background/win/win_e_73.png"), // WIN_73_DIRECTORY

    Image("./resources/images/Icons/starter_fire_pack.png", 1, 1), // MOUSE_CURSOR_DIRECTORY
    Image("./resources/images/Icons/mower.png", 17, 8),            // MOWER_DIRECTORY

    Image("./resources/images/Shadow/plantshadow.png"), // SHADOW_DIRECTORY
    Image("./resources/images/Shadow/pea_shadows.png"), // BULLET_SHADOW_DIRECTORY

    Image("./resources/images/Background/SodRoll.png"),    // SOD_ROLL
    Image("./resources/images/Background/SodRollCap.png"), // SOD_ROLL_CAP

};

/*Corresponding blink of image*/
static map<int, int> blink_of = {
    {SELECTOR_DIRECTORY, SELECTOR_BLINK_DIRECTORY},

    {PEASHOOTER_SHEET_DIRECTORY, PEASHOOTER_SHEET_BLINK_DIRECTORY},
    {PEASHOOTER_ATTACK_DIRECTORY, PEASHOOTER_ATTACK_BLINK_DIRECTORY},

    {SUNFLOWER_SHEET_DIRECTORY, SUNFLOWER_SHEET_BLINK_DIRECTORY},
    {SUNFLOWER_HAPPY_DIRECTORY, SUNFLOWER_HAPPY_BLINK_DIRECTORY},

    {WALLNUT_1_DIRECTORY, WALLNUT_1_BLINK_DIRECTORY},
    {WALLNUT_2_DIRECTORY, WALLNUT_2_BLINK_DIRECTORY},
    {WALLNUT_3_DIRECTORY, WALLNUT_3_BLINK_DIRECTORY},
    {WALLNUT_4_DIRECTORY, WALLNUT_4_BLINK_DIRECTORY},
    {WALLNUT_5_DIRECTORY, WALLNUT_5_BLINK_DIRECTORY},

    {SNOWPEA_SHEET_DIRECTORY, SNOWPEA_SHEET_BLINK_DIRECTORY},
    {SNOWPEA_ATTACK_DIRECTORY, SNOWPEA_ATTACK_BLINK_DIRECTORY},

    {CHERRYBOMB_SHEET_DIRECTORY, CHERRYBOMB_SHEET_BLINK_DIRECTORY},

    {POTATOMINE_UNARMED_DIRECTORY, POTATOMINE_UNARMED_BLINK_DIRECTORY},
    {POTATOMINE_RECOVER_DIRECTORY, POTATOMINE_RECOVER_BLINK_DIRECTORY},

    {ZOMBIE_WALK1_DIRECTORY, ZOMBIE_WALK1_BLINK_DIRECTORY},
    {ZOMBIE_WALK2_DIRECTORY, ZOMBIE_WALK2_BLINK_DIRECTORY},
    {ZOMBIE_EATING_DIRECTORY, ZOMBIE_EATING_BLINK_DIRECTORY},

    {ZOMBIE_ARM_DIRECTORY, ZOMBIE_ARM_BLINK_DIRECTORY},
    {ARMLESS_ZOMBIE_WALK1_DIRECTORY, ARMLESS_ZOMBIE_WALK1_BLINK_DIRECTORY},
    {ARMLESS_ZOMBIE_WALK2_DIRECTORY, ARMLESS_ZOMBIE_WALK2_BLINK_DIRECTORY},
    {ARMLESS_ZOMBIE_EATING_DIRECTORY, ARMLESS_ZOMBIE_EATING_BLINK_DIRECTORY},

    {ZOMBIE_HEAD_DIRECTORY, ZOMBIE_HEAD_BLINK_DIRECTORY},
    {ZOMBIE_DIE1_DIRECTORY, ZOMBIE_DIE1_BLINK_DIRECTORY},
    {ZOMBIE_DIE2_DIRECTORY, ZOMBIE_DIE2_BLINK_DIRECTORY},

    {FLAG_ZOMBIE_WALK1_1_DIRECTORY, FLAG_ZOMBIE_WALK1_1_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_WALK1_2_DIRECTORY, FLAG_ZOMBIE_WALK1_2_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_WALK1_3_DIRECTORY, FLAG_ZOMBIE_WALK1_3_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_WALK2_1_DIRECTORY, FLAG_ZOMBIE_WALK2_1_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_WALK2_2_DIRECTORY, FLAG_ZOMBIE_WALK2_2_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_WALK2_3_DIRECTORY, FLAG_ZOMBIE_WALK2_3_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_EATING_1_DIRECTORY, FLAG_ZOMBIE_EATING_1_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_EATING_2_DIRECTORY, FLAG_ZOMBIE_EATING_2_BLINK_DIRECTORY},
    {FLAG_ZOMBIE_EATING_3_DIRECTORY, FLAG_ZOMBIE_EATING_3_BLINK_DIRECTORY},

    {CONE_DROP_DIRECTORY, CONE_DROP_BLINK_DIRECTORY},
    {CONE1_DIRECTORY, CONE1_BLINK_DIRECTORY},
    {CONE2_DIRECTORY, CONE2_BLINK_DIRECTORY},
    {CONE3_DIRECTORY, CONE3_BLINK_DIRECTORY},

    {BUCKET_DROP_DIRECTORY, BUCKET_DROP_BLINK_DIRECTORY},
    {BUCKET1_DIRECTORY, BUCKET1_BLINK_DIRECTORY},
    {BUCKET2_DIRECTORY, BUCKET2_BLINK_DIRECTORY},
    {BUCKET3_DIRECTORY, BUCKET3_BLINK_DIRECTORY},

    {DOOR_ZOMBIE_WALK1_1_DIRECTORY, DOOR_ZOMBIE_WALK1_1_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_WALK1_2_DIRECTORY, DOOR_ZOMBIE_WALK1_2_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_WALK1_3_DIRECTORY, DOOR_ZOMBIE_WALK1_3_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_WALK2_1_DIRECTORY, DOOR_ZOMBIE_WALK2_1_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_WALK2_2_DIRECTORY, DOOR_ZOMBIE_WALK2_2_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_WALK2_3_DIRECTORY, DOOR_ZOMBIE_WALK2_3_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_EATING_1_DIRECTORY, DOOR_ZOMBIE_EATING_1_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_EATING_2_DIRECTORY, DOOR_ZOMBIE_EATING_2_BLINK_DIRECTORY},
    {DOOR_ZOMBIE_EATING_3_DIRECTORY, DOOR_ZOMBIE_EATING_3_BLINK_DIRECTORY}

};

/*Corresponding eating of zombie walk image*/
static map<int, int> eat_of = {

    {ZOMBIE_WALK1_DIRECTORY, ZOMBIE_EATING_DIRECTORY},
    {ZOMBIE_WALK2_DIRECTORY, ZOMBIE_EATING_DIRECTORY},

    {ARMLESS_ZOMBIE_WALK1_DIRECTORY, ARMLESS_ZOMBIE_EATING_DIRECTORY},
    {ARMLESS_ZOMBIE_WALK2_DIRECTORY, ARMLESS_ZOMBIE_EATING_DIRECTORY},

    {FLAG_ZOMBIE_WALK1_1_DIRECTORY, FLAG_ZOMBIE_EATING_1_DIRECTORY},
    {FLAG_ZOMBIE_WALK1_2_DIRECTORY, FLAG_ZOMBIE_EATING_2_DIRECTORY},
    {FLAG_ZOMBIE_WALK1_3_DIRECTORY, FLAG_ZOMBIE_EATING_3_DIRECTORY},
    {FLAG_ZOMBIE_WALK2_1_DIRECTORY, FLAG_ZOMBIE_EATING_1_DIRECTORY},
    {FLAG_ZOMBIE_WALK2_2_DIRECTORY, FLAG_ZOMBIE_EATING_2_DIRECTORY},
    {FLAG_ZOMBIE_WALK2_3_DIRECTORY, FLAG_ZOMBIE_EATING_3_DIRECTORY},

    {DOOR_ZOMBIE_WALK1_1_DIRECTORY, DOOR_ZOMBIE_EATING_1_DIRECTORY},
    {DOOR_ZOMBIE_WALK1_2_DIRECTORY, DOOR_ZOMBIE_EATING_2_DIRECTORY},
    {DOOR_ZOMBIE_WALK1_3_DIRECTORY, DOOR_ZOMBIE_EATING_3_DIRECTORY},
    {DOOR_ZOMBIE_WALK2_1_DIRECTORY, DOOR_ZOMBIE_EATING_1_DIRECTORY},
    {DOOR_ZOMBIE_WALK2_2_DIRECTORY, DOOR_ZOMBIE_EATING_2_DIRECTORY},
    {DOOR_ZOMBIE_WALK2_3_DIRECTORY, DOOR_ZOMBIE_EATING_3_DIRECTORY}

};

/*Corresponding walking of zombie eat image*/
int walk_of(const int &img_dir);

const int front_yard_r = FRONTYARD_R1;
const int front_yard_c = FRONTYARD_C1;
const int win_dir = WIN_00_DIRECTORY;