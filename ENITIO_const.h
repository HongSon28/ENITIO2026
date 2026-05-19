int currentProcess = 0;
String my_MAC_address;
uint8_t my_MAC_address_arr[6] = {};

const uint8_t MainMenuProcess = 0 ;
const uint8_t ProfileProcess = 1 ;
const uint8_t TreasureHuntProcess = 2 ; 
const uint8_t SnakeGameProcess = 3 ;
const uint8_t MusicProcess = 4 ; 
const uint8_t AdminProcess = 5 ;
const uint8_t CreditProcess = 6 ;

#define NAV_WAIT 4000

#define EEPROM_SIZE 20

const uint8_t PROFILE_enable_add = 0;
const uint8_t OG_add = 1;
const uint8_t NAME_add = 2;
const uint8_t isGL_add = 3;
const uint8_t ID_add = 4;
const uint8_t PLAYER_enable_add = 5;
const uint8_t PLAYER_HP_add = 6;
const uint8_t PLAYER_EN_add = 7;
const uint8_t PLAYER_MaxHP_add = 8;
const uint8_t PLAYER_MaxEn_add = 9;
const uint8_t PLAYER_MANA_add = 10;
const uint8_t PLAYER_numKilled_add = 11;
const uint8_t PLAYER_numL1Treasure_add = 12;
const uint8_t PLAYER_numL2Treasure_add = 13;
const uint8_t PLAYER_num_bonus6HP_add = 14;
const uint8_t PLAYER_num_bonus1MaxEn_add = 15;
const uint8_t PLAYER_num_bonus1MANA_add = 16;
const uint8_t PLAYER_num_fiveminx2EnRegen_add = 17;
const uint8_t PLAYER_num_bomb_add = 18;


int EN_RECOVER_DURATION;
/*
int VIRUS_DECAY_DURATION;
int VIRUS_IMMUNITY_DURATION;
int VIRUS_INFECTION_PROBABILITY;  // integer between 0 and 100
*/
uint8_t PARTICIPANT_MaxHP;
uint8_t GL_MaxHP;
uint8_t PARTICIPANT_MaxEn;
uint8_t GL_MaxEn;
uint8_t INITIAL_MANA;
uint8_t HEAL_MANA;
uint8_t MAX_ATTACK_MANA;
uint8_t MAX_COLLECT_MANA;
uint8_t BOMB_HP_DEDUCTION;
uint8_t KILL_UPDATE_SERVER_INTERVAL;

int failed_kill_feedback = 0;
int failed_kill_OG[50] = {};
int failed_kill_ID[50] = {};
int current_failed_save_pointer = 0;
int current_failed_read_pointer = 0;
