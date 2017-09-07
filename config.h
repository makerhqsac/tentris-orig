#ifndef config_h
#define config_h


#define SD_CS             4

#define NEO_PIN           6

#undef USE_ANALOG_JOY

#ifdef USE_ANALOG_JOY
#define JOY_X             A0
#define JOY_Y             A1
#define JOY_BTN           2
#else
#define BUTTON_LEFT       0
#define BUTTON_RIGHT      2
#define BUTTON_DOWN       3
#define BUTTON_ROTATE     4
#endif

#define BUZZER            9

#define BACKGROUND_COLOR  COLOR_GRAY

#define BOARD_WIDTH       10
#define BOARD_HEIGHT      20

#define GAMEOVER_X        90
#define GAMEOVER_Y        20

#define SCORE_X           GAMEOVER_X
#define SCORE_Y           GAMEOVER_Y + 50
#define LINE_SCORE_VALUE  100

#define MIN(X, Y)         (((X) < (Y)) ? (X) : (Y))

#define SHAPE_COUNT       7

#define SHAPE_I           0
#define SHAPE_J           1
#define SHAPE_L           2
#define SHAPE_O           3
#define SHAPE_S           4
#define SHAPE_T           5
#define SHAPE_Z           6

#define DIM
#ifdef DIM
#define COLOR_GRAY        COLOR {2, 2, 2}
#define COLOR_WHITE       COLOR {5,5,5}
#define COLOR_BLACK       COLOR {0,0,0}
#define COLOR_CYAN        COLOR {0,5,5}
#define COLOR_YELLOW      COLOR {5,5,0}
#define COLOR_BLUE        COLOR {0,0,5}
#define COLOR_ORANGE      COLOR {5,3,0}
#define COLOR_LIME        COLOR {0,5,0}
#define COLOR_PURPLE      COLOR {5,0,5}
#define COLOR_RED         COLOR {5,0,0}
#else
#define COLOR_GRAY        COLOR {33, 33, 33}
#define COLOR_WHITE       COLOR {255,255,255}
#define COLOR_BLACK       COLOR {0,0,0}
#define COLOR_CYAN        COLOR {0,255,255}
#define COLOR_YELLOW      COLOR {255,255,0}
#define COLOR_BLUE        COLOR {0,0,255}
#define COLOR_ORANGE      COLOR {255,165,0}
#define COLOR_LIME        COLOR {0,255,0}
#define COLOR_PURPLE      COLOR {255,0,255}
#define COLOR_RED         COLOR {255,0,0}
#endif

#define SHAPE_I_COLOR     COLOR_CYAN
#define SHAPE_J_COLOR     COLOR_BLUE
#define SHAPE_L_COLOR     COLOR_ORANGE
#define SHAPE_O_COLOR     COLOR_YELLOW
#define SHAPE_S_COLOR     COLOR_LIME
#define SHAPE_T_COLOR     COLOR_PURPLE
#define SHAPE_Z_COLOR     COLOR_RED

#define FILE_NAME         "highscores.txt"

#define MOVE_DELAY        200
#define DOWN_DELAY        150
#define ROTATE_DELAY      150
#define DEBOUNCE          50

#define NEXTSHAPE_X       GAMEOVER_X
#define NEXTSHAPE_Y       SCORE_Y + 50
#endif
