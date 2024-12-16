#ifndef _DEF_H_
#define _DEF_H_

#include <vector>
#include <SDL.h>
#include <SDL_ttf.h>

//~ #define INHIBIT(X) X
#define INHIBIT(X) /* X */

#define APP_NAME "fileman"

// Parameters for RK3326
#if defined(DEVICE_RK3326)
   #define SCREEN_WIDTH             480
   #define SCREEN_HEIGHT            320
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                14
   #define LINE_HEIGHT              24
   #define ICON_SIZE                24
   #define MARGIN_X                 8
   #define KEYBOARD_MARGIN          3
   #define KEYBOARD_KEY_SPACING     3
   #define KEYBOARD_SYMBOL_SIZE     24

// Parameters for RK3399
#elif defined(DEVICE_RK3399)
   #define SCREEN_WIDTH             1920
   #define SCREEN_HEIGHT            1152
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                48
   #define LINE_HEIGHT              72
   #define ICON_SIZE                58
   #define MARGIN_X                 24
   #define KEYBOARD_MARGIN          19
   #define KEYBOARD_KEY_SPACING     10
   #define KEYBOARD_SYMBOL_SIZE     58

// Parameters for rk3566
#elif defined(DEVICE_RK3566)
   #define SCREEN_WIDTH             640
   #define SCREEN_HEIGHT            480
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                20
   #define LINE_HEIGHT              32
   #define ICON_SIZE                24
   #define MARGIN_X                 10
   #define KEYBOARD_MARGIN          8
   #define KEYBOARD_KEY_SPACING     4
   #define KEYBOARD_SYMBOL_SIZE     24

// Parameters for h700
#elif defined(DEVICE_H700)
   #define SCREEN_WIDTH             640
   #define SCREEN_HEIGHT            480
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                20
   #define LINE_HEIGHT              32
   #define ICON_SIZE                24
   #define MARGIN_X                 10
   #define KEYBOARD_MARGIN          8
   #define KEYBOARD_KEY_SPACING     4
   #define KEYBOARD_SYMBOL_SIZE     24

// Parameters for rk3566-x55
#elif defined(DEVICE_RK3566_X55)
   #define SCREEN_WIDTH             1280
   #define SCREEN_HEIGHT            720
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                48
   #define LINE_HEIGHT              72
   #define ICON_SIZE                58
   #define MARGIN_X                 24
   #define KEYBOARD_MARGIN          19
   #define KEYBOARD_KEY_SPACING     10
   #define KEYBOARD_SYMBOL_SIZE     58

// Parameters for rk3588
#elif defined(DEVICE_RK3588)
   #define SCREEN_WIDTH             1280
   #define SCREEN_HEIGHT            720
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                48
   #define LINE_HEIGHT              72
   #define ICON_SIZE                58
   #define MARGIN_X                 24
   #define KEYBOARD_MARGIN          19
   #define KEYBOARD_KEY_SPACING     10
   #define KEYBOARD_SYMBOL_SIZE     58

// Parameters for sd865
#elif defined(DEVICE_SD865)
   #define SCREEN_WIDTH             1280
   #define SCREEN_HEIGHT            720
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                48
   #define LINE_HEIGHT              72
   #define ICON_SIZE                58
   #define MARGIN_X                 24
   #define KEYBOARD_MARGIN          19
   #define KEYBOARD_KEY_SPACING     10
   #define KEYBOARD_SYMBOL_SIZE     58

// Parameters for handheld
#elif defined(DEVICE_AMD64)
   #define SCREEN_WIDTH             1280
   #define SCREEN_HEIGHT            720
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                48
   #define LINE_HEIGHT              72
   #define ICON_SIZE                58
   #define MARGIN_X                 24
   #define KEYBOARD_MARGIN          19
   #define KEYBOARD_KEY_SPACING     10
   #define KEYBOARD_SYMBOL_SIZE     58

// Parameters for S922X
#elif defined(DEVICE_S922X)
   #define SCREEN_WIDTH             854
   #define SCREEN_HEIGHT            480
   #define HARDWARE_ACCELERATION    0
   #define FULLSCREEN               1
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                20
   #define LINE_HEIGHT              32
   #define ICON_SIZE                24
   #define MARGIN_X                 10
   #define KEYBOARD_MARGIN          8
   #define KEYBOARD_KEY_SPACING     4
   #define KEYBOARD_SYMBOL_SIZE     24

// Paramaters for desktop PC
#else
   #define SCREEN_WIDTH             640
   #define SCREEN_HEIGHT            480
   #define HARDWARE_ACCELERATION    1
   #define FULLSCREEN               0
   #define FONT_NAME                "NotoSans-Regular.ttf"
   #define FONT_NAME_MONO           "NotoSansMono-Regular.ttf"
   #define FONT_SIZE                20
   #define LINE_HEIGHT              32
   #define ICON_SIZE                24
   #define MARGIN_X                 10
   #define KEYBOARD_MARGIN          8
   #define KEYBOARD_KEY_SPACING     4
   #define KEYBOARD_SYMBOL_SIZE     24
#endif

// Colors
#define COLOR_TITLE_BG           68,  68,  68
#define COLOR_TEXT_NORMAL        255, 255, 255
#define COLOR_TEXT_SELECTED      255, 0, 0
#define COLOR_BODY_BG            45,  45,  45
#define COLOR_KEYBOARD_DARK      35,  35,  35
#define COLOR_CURSOR_FOCUS       21,  83,  158
#define COLOR_CURSOR_NO_FOCUS    80,  80,  80

// Framerate = 60fps
#define MS_PER_FRAME          16

// Timer for key holds
#define KEYHOLD_TIMER_FIRST   16
#define KEYHOLD_TIMER         4

// Timer for long file name scrolling
#define LONG_NAME_TIMER_FIRST   16
#define LONG_NAME_TIMER         1

// Size of dialog border
#define DIALOG_BORDER         4

// Scroll speed in image viewer
#define VIEWER_SCROLL_SPEED      20

// Button events
#if defined(DEVICE_AMD64) || defined(DEVICE_RK3326) || defined(DEVICE_RK3399) || defined(DEVICE_RK3566) || defined(DEVICE_RK3566_X55) || defined(DEVICE_RK3588) || defined(DEVICE_SD865) || defined(DEVICE_S922X) || defined(DEVICE_H700)
   #define BUTTON_PRESSED_UP              event.type == SDL_KEYDOWN && event.key.repeat == 0 && (event.key.keysym.sym == SDLK_UP || event.key.keysym.sym == SDLK_w)
   #define BUTTON_PRESSED_DOWN            event.type == SDL_KEYDOWN && event.key.repeat == 0 && (event.key.keysym.sym == SDLK_DOWN || event.key.keysym.sym == SDLK_s)
   #define BUTTON_PRESSED_LEFT            event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_LEFT
   #define BUTTON_PRESSED_RIGHT           event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_RIGHT
   #define BUTTON_PRESSED_PAGEUP          event.type == SDL_KEYDOWN && event.key.repeat == 0 && (event.key.keysym.sym == SDLK_RSHIFT || event.key.keysym.sym == SDLK_HOME)
   #define BUTTON_PRESSED_PAGEDOWN        event.type == SDL_KEYDOWN && event.key.repeat == 0 && (event.key.keysym.sym == SDLK_LSHIFT || event.key.keysym.sym == SDLK_END)
   #define BUTTON_PRESSED_VALIDATE        event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_x
   #define BUTTON_PRESSED_BACK            event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_z
   #define BUTTON_PRESSED_MENU_CONTEXT    event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_c
   #define BUTTON_PRESSED_SELECT          event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_a
   #define BUTTON_HELD_UP                 SDL_GetKeyboardState(NULL)[SDL_SCANCODE_UP] || SDL_GetKeyboardState(NULL)[SDL_SCANCODE_W]
   #define BUTTON_HELD_DOWN               SDL_GetKeyboardState(NULL)[SDL_SCANCODE_DOWN] || SDL_GetKeyboardState(NULL)[SDL_SCANCODE_S]
   #define BUTTON_HELD_LEFT               SDL_GetKeyboardState(NULL)[SDL_SCANCODE_LEFT]
   #define BUTTON_HELD_RIGHT              SDL_GetKeyboardState(NULL)[SDL_SCANCODE_RIGHT]
   #define BUTTON_HELD_PAGEUP             SDL_GetKeyboardState(NULL)[SDL_SCANCODE_RSHIFT] || SDL_GetKeyboardState(NULL)[SDL_SCANCODE_HOME] 
   #define BUTTON_HELD_PAGEDOWN           SDL_GetKeyboardState(NULL)[SDL_SCANCODE_LSHIFT] || SDL_GetKeyboardState(NULL)[SDL_SCANCODE_END] 
   #define BUTTON_HELD_SELECT             SDL_GetKeyboardState(NULL)[SDL_SCANCODE_A]
   #define BUTTON_HELD_VALIDATE           SDL_GetKeyboardState(NULL)[SDL_SCANCODE_X]
#else
   #define BUTTON_PRESSED_UP              event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_UP
   #define BUTTON_PRESSED_DOWN            event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_DOWN
   #define BUTTON_PRESSED_LEFT            event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_LEFT
   #define BUTTON_PRESSED_RIGHT           event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_RIGHT
   #define BUTTON_PRESSED_PAGEUP          event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_PAGEUP
   #define BUTTON_PRESSED_PAGEDOWN        event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_PAGEDOWN
   #define BUTTON_PRESSED_VALIDATE        event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_RETURN
   #define BUTTON_PRESSED_BACK            event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_BACKSPACE
   #define BUTTON_PRESSED_MENU_CONTEXT    event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_x
   #define BUTTON_PRESSED_SELECT          event.type == SDL_KEYDOWN && event.key.repeat == 0 && event.key.keysym.sym == SDLK_INSERT
   #define BUTTON_HELD_UP                 SDL_GetKeyboardState(NULL)[SDL_SCANCODE_UP]
   #define BUTTON_HELD_DOWN               SDL_GetKeyboardState(NULL)[SDL_SCANCODE_DOWN]
   #define BUTTON_HELD_LEFT               SDL_GetKeyboardState(NULL)[SDL_SCANCODE_LEFT]
   #define BUTTON_HELD_RIGHT              SDL_GetKeyboardState(NULL)[SDL_SCANCODE_RIGHT]
   #define BUTTON_HELD_PAGEUP             SDL_GetKeyboardState(NULL)[SDL_SCANCODE_PAGEUP]
   #define BUTTON_HELD_PAGEDOWN           SDL_GetKeyboardState(NULL)[SDL_SCANCODE_PAGEDOWN]
   #define BUTTON_HELD_SELECT             SDL_GetKeyboardState(NULL)[SDL_SCANCODE_INSERT]
   #define BUTTON_HELD_VALIDATE           SDL_GetKeyboardState(NULL)[SDL_SCANCODE_RETURN]
#endif

// Globals
extern SDL_Window* g_window;
extern SDL_Renderer* g_renderer;
extern SDL_Joystick* g_joystick;
extern TTF_Font *g_font;                     // Variable size font
extern TTF_Font *g_fontMono;                 // Mono size font
extern int g_charW;                          // Width of one character in monospace font
class IWindow;
extern std::vector<IWindow *> g_windows;

// Textures for icons
extern SDL_Texture *g_iconFile;
extern SDL_Texture *g_iconDir;
extern SDL_Texture *g_iconUp;
extern SDL_Texture *g_iconCopy;
extern SDL_Texture *g_iconCut;
extern SDL_Texture *g_iconPaste;
extern SDL_Texture *g_iconTrash;
extern SDL_Texture *g_iconDisk;
extern SDL_Texture *g_iconSelect;
extern SDL_Texture *g_iconNone;
extern SDL_Texture *g_iconNewDir;
extern SDL_Texture *g_iconQuit;
extern SDL_Texture *g_iconEdit;
extern SDL_Texture *g_iconCancel;
extern SDL_Texture *g_iconFloppy;
extern SDL_Texture *g_iconImage;
extern SDL_Texture *g_iconFileText;
extern SDL_Texture *g_iconPlus;

#endif
