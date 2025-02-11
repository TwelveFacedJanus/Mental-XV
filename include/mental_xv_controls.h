#ifndef MENTAL_XV_CONTROLS_H_
#define MENTAL_XV_CONTROLS_H_ 1

/*! @defgroup keys Keyboard key tokens
 *  @brief Keyboard key tokens.
 *
 *  See [key input](@ref input_key) for how these are used.
 *
 *  These key codes are inspired by the _USB HID Usage Tables v1.12_ (p. 53-60),
 *  but re-arranged to map to 7-bit ASCII for printable keys (function keys are
 *  put in the 256+ range).
 *
 *  The naming of the key codes follow these rules:
 *   - The US keyboard layout is used
 *   - Names of printable alphanumeric characters are used (e.g. "A", "R",
 *     "3", etc.)
 *   - For non-alphanumeric characters, Unicode:ish names are used (e.g.
 *     "COMMA", "LEFT_SQUARE_BRACKET", etc.). Note that some names do not
 *     correspond to the Unicode standard (usually for brevity)
 *   - Keys that lack a clear US mapping are named "WORLD_x"
 *   - For non-printable keys, custom names are used (e.g. "F4",
 *     "BACKSPACE", etc.)
 *
 *  @ingroup input
 *  @{
 */

/* Printable keys */
#define MENTAL_KEY_SPACE              32
#define MENTAL_KEY_APOSTROPHE         39  /* ' */
#define MENTAL_KEY_COMMA              44  /* , */
#define MENTAL_KEY_MINUS              45  /* - */
#define MENTAL_KEY_PERIOD             46  /* . */
#define MENTAL_KEY_SLASH              47  /* / */
#define MENTAL_KEY_0                  48
#define MENTAL_KEY_1                  49
#define MENTAL_KEY_2                  50
#define MENTAL_KEY_3                  51
#define MENTAL_KEY_4                  52
#define MENTAL_KEY_5                  53
#define MENTAL_KEY_6                  54
#define MENTAL_KEY_7                  55
#define MENTAL_KEY_8                  56
#define MENTAL_KEY_9                  57
#define MENTAL_KEY_SEMICOLON          59  /* ; */
#define MENTAL_KEY_EQUAL              61  /* = */
#define MENTAL_KEY_A                  65
#define MENTAL_KEY_B                  66
#define MENTAL_KEY_C                  67
#define MENTAL_KEY_D                  68
#define MENTAL_KEY_E                  69
#define MENTAL_KEY_F                  70
#define MENTAL_KEY_G                  71
#define MENTAL_KEY_H                  72
#define MENTAL_KEY_I                  73
#define MENTAL_KEY_J                  74
#define MENTAL_KEY_K                  75
#define MENTAL_KEY_L                  76
#define MENTAL_KEY_M                  77
#define MENTAL_KEY_N                  78
#define MENTAL_KEY_O                  79
#define MENTAL_KEY_P                  80
#define MENTAL_KEY_Q                  81
#define MENTAL_KEY_R                  82
#define MENTAL_KEY_S                  83
#define MENTAL_KEY_T                  84
#define MENTAL_KEY_U                  85
#define MENTAL_KEY_V                  86
#define MENTAL_KEY_W                  87
#define MENTAL_KEY_X                  88
#define MENTAL_KEY_Y                  89
#define MENTAL_KEY_Z                  90
#define MENTAL_KEY_LEFT_BRACKET       91  /* [ */
#define MENTAL_KEY_BACKSLASH          92  /* \ */
#define MENTAL_KEY_RIGHT_BRACKET      93  /* ] */
#define MENTAL_KEY_GRAVE_ACCENT       96  /* ` */
#define MENTAL_KEY_WORLD_1            161 /* non-US #1 */
#define MENTAL_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define MENTAL_KEY_ESCAPE             256
#define MENTAL_KEY_ENTER              257
#define MENTAL_KEY_TAB                258
#define MENTAL_KEY_BACKSPACE          259
#define MENTAL_KEY_INSERT             260
#define MENTAL_KEY_DELETE             261
#define MENTAL_KEY_RIGHT              262
#define MENTAL_KEY_LEFT               263
#define MENTAL_KEY_DOWN               264
#define MENTAL_KEY_UP                 265
#define MENTAL_KEY_PAGE_UP            266
#define MENTAL_KEY_PAGE_DOWN          267
#define MENTAL_KEY_HOME               268
#define MENTAL_KEY_END                269
#define MENTAL_KEY_CAPS_LOCK          280
#define MENTAL_KEY_SCROLL_LOCK        281
#define MENTAL_KEY_NUM_LOCK           282
#define MENTAL_KEY_PRINT_SCREEN       283
#define MENTAL_KEY_PAUSE              284
#define MENTAL_KEY_F1                 290
#define MENTAL_KEY_F2                 291
#define MENTAL_KEY_F3                 292
#define MENTAL_KEY_F4                 293
#define MENTAL_KEY_F5                 294
#define MENTAL_KEY_F6                 295
#define MENTAL_KEY_F7                 296
#define MENTAL_KEY_F8                 297
#define MENTAL_KEY_F9                 298
#define MENTAL_KEY_F10                299
#define MENTAL_KEY_F11                300
#define MENTAL_KEY_F12                301
#define MENTAL_KEY_F13                302
#define MENTAL_KEY_F14                303
#define MENTAL_KEY_F15                304
#define MENTAL_KEY_F16                305
#define MENTAL_KEY_F17                306
#define MENTAL_KEY_F18                307
#define MENTAL_KEY_F19                308
#define MENTAL_KEY_F20                309
#define MENTAL_KEY_F21                310
#define MENTAL_KEY_F22                311
#define MENTAL_KEY_F23                312
#define MENTAL_KEY_F24                313
#define MENTAL_KEY_F25                314
#define MENTAL_KEY_KP_0               320
#define MENTAL_KEY_KP_1               321
#define MENTAL_KEY_KP_2               322
#define MENTAL_KEY_KP_3               323
#define MENTAL_KEY_KP_4               324
#define MENTAL_KEY_KP_5               325
#define MENTAL_KEY_KP_6               326
#define MENTAL_KEY_KP_7               327
#define MENTAL_KEY_KP_8               328
#define MENTAL_KEY_KP_9               329
#define MENTAL_KEY_KP_DECIMAL         330
#define MENTAL_KEY_KP_DIVIDE          331
#define MENTAL_KEY_KP_MULTIPLY        332
#define MENTAL_KEY_KP_SUBTRACT        333
#define MENTAL_KEY_KP_ADD             334
#define MENTAL_KEY_KP_ENTER           335
#define MENTAL_KEY_KP_EQUAL           336
#define MENTAL_KEY_LEFT_SHIFT         340
#define MENTAL_KEY_LEFT_CONTROL       341
#define MENTAL_KEY_LEFT_ALT           342
#define MENTAL_KEY_LEFT_SUPER         343
#define MENTAL_KEY_RIGHT_SHIFT        344
#define MENTAL_KEY_RIGHT_CONTROL      345
#define MENTAL_KEY_RIGHT_ALT          346
#define MENTAL_KEY_RIGHT_SUPER        347
#define MENTAL_KEY_MENU               348

#define MENTAL_KEY_LAST               MENTAL_KEY_MENU
/*! @} */

/*! @defgroup buttons Mouse buttons
 *  @brief Mouse button IDs.
 *
 *  See [mouse button input](@ref input_mouse_button) for how these are used.
 *
 *  @ingroup input
 *  @{ */
#define MENTAL_MOUSE_BUTTON_1         0
#define MENTAL_MOUSE_BUTTON_2         1
#define MENTAL_MOUSE_BUTTON_3         2
#define MENTAL_MOUSE_BUTTON_4         3
#define MENTAL_MOUSE_BUTTON_5         4
#define MENTAL_MOUSE_BUTTON_6         5
#define MENTAL_MOUSE_BUTTON_7         6
#define MENTAL_MOUSE_BUTTON_8         7
#define MENTAL_MOUSE_BUTTON_LAST      MENTAL_MOUSE_BUTTON_8
#define MENTAL_MOUSE_BUTTON_LEFT      MENTAL_MOUSE_BUTTON_1
#define MENTAL_MOUSE_BUTTON_RIGHT     MENTAL_MOUSE_BUTTON_2
#define MENTAL_MOUSE_BUTTON_MIDDLE    MENTAL_MOUSE_BUTTON_3
/*! @} */

#endif // MENTAL_XV_CONTROLS_H_