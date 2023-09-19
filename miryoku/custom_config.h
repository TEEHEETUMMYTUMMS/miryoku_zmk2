

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define MIRYOKU_KLUDGE_MOUSEKEYSPR
// #define MIRYOKU_KEYBOARD_CORNE

#if !defined (MIRYOKU_LAYOUTMAPPING_CORNE)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC   K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC  \
&kp LCTRL K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp LCTRL \
&kp LSHFT K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &mo U_TAP \
                    K32  K33  K34       K35  K36  K37

#endif

#define MIRYOKU_LAYER_BASE \
U_LT(U_BUTTON, SQT),&kp COMMA,        &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
U_MT(LALT, A),     U_MT(LGUI, O),     U_MT(LCTRL, E),    U_MT(LSHFT, U),    &kp I,             &kp D,             U_MT(LSHFT, H),    U_MT(LCTRL, T),    U_MT(LGUI, N),     U_MT(LALT, S),     \
&kp SEMI,          U_MT(RALT, Q),     &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             U_MT(RALT, V),     U_LT(U_BUTTON, Z), \
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_SYM, BSPC), U_LT(U_NUM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP




#define MIRYOKU_LAYER_EXTRA \
U_LT(U_BUTTON, Q), &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LALT, A),     U_MT(LGUI, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LGUI, L),     U_MT(LALT, SQT),   \
&kp Z,             U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, DEL),  U_LT(U_SYM, BSPC), U_LT(U_NUM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, SPACE),U_LT(U_MEDIA, ESC),U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp SQT,           &kp COMMA,         &kp DOT,           &kp P,             &kp Y,             &kp F,             &kp G,             &kp C,             &kp R,             &kp L,             \
&kp A,             &kp O,             &kp E,             &kp U,             &kp I,             &kp D,             &kp H,             &kp T,             &kp N,             &kp S,             \
&kp SLASH,         &kp Q,             &kp J,             &kp K,             &kp X,             &kp B,             &kp M,             &kp W,             &kp V,             &kp Z,             \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          U_LT(U_SYM, TAB),  &kp RET,           &kp SPACE,         &kp ESC,           U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
&kp LC(Z),         U_CUT,             U_CPY,             U_PST,             &kp LC(Y),         &kp LC(Y),         U_PST,             U_CPY,             U_CUT,             &kp LC(Z),         \
&kp LALT,          &kp LGUI,          &kp LCTRL,         &kp LSHFT,         &to U_BASE,        &to U_BASE,        &kp LSHFT,         &kp LCTRL,         &kp LGUI,          &kp LALT,          \
&kp LC(Z),         U_CUT,             U_CPY,             U_PST,             &kp LC(Y),         &kp LC(Y),         U_PST,             U_CPY,             U_CUT,             &kp LC(Z),         \
U_NP,              U_NP,              U_BTN3,            U_BTN2,            U_BTN1,            U_BTN1,            U_BTN2,            U_BTN3,            U_NP,              U_NP




#define MIRYOKU_LAYER_MOUSE \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              &to U_BUTTON,      &to U_BASE,        &to U_EXTRA,       &to U_TAP,         U_BOOT,            \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LGUI,          &kp LALT,          \
&kp LC(Z),         U_CUT,             U_CPY,             U_PST,             &kp LC(Y),         U_NA,              &to U_MOUSE,       &to U_NUM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN2,            U_BTN1,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// U_BOOT,            &to U_TAP,         &to U_EXTRA,       &to U_BASE,        &to U_BUTTON,      U_NU,              U_WH_L,            U_MS_U,            U_WH_R,            U_WH_U,            \
// &kp LALT,          &kp LGUI,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_R,            U_WH_D,            \
// U_NA,              &kp RALT,          &to U_NUM,         &to U_MOUSE,       U_NA,              &kp LC(Y),         U_PST,             U_CPY,             U_CUT,             &kp LC(Z),         \
// U_NP,              U_NP,              U_BTN3,            U_BTN2,            U_BTN1,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
&kp PG_DN,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           &to U_BUTTON,      &to U_BASE,        &kp ESC,           &to U_TAP,         U_BOOT,            \
&kp PG_UP,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp CAPS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LGUI,          &kp LALT,          \
&kp LC(Z),         U_CUT,             U_CPY,             U_PST,             &kp LC(Y),         U_NA,              &to U_NAV,         &to U_SYM,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// U_BOOT,            &to U_TAP,         &to U_EXTRA,       &to U_BASE,        &to U_BUTTON,      &kp INS,           &kp HOME,          &kp UP,            &kp END,           &kp PG_UP,         \
// &kp LALT,          &kp LGUI,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp CAPS,          &kp LEFT,          &kp DOWN,          &kp RIGHT,         &kp PG_DN,         \
// U_NA,              &kp RALT,          &to U_SYM,         &to U_NAV,         U_NA,              &kp LC(Y),         U_PST,             U_CPY,             U_CUT,             &kp LC(Z),         \
// U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
U_NU,              &kp C_BRI_DEC,     &kp C_VOL_UP,      &kp C_BRI_UP,      U_EP_TOG,          &to U_BUTTON,      &to U_BASE,        &to U_EXTRA,       &to U_TAP,         U_BOOT,            \
U_NU,              &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &u_out_tog,        U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LGUI,          &kp LALT,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_bt_sel_4,       U_NA,              &to U_MEDIA,       &to U_FUN,         &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// U_BOOT,            &to U_TAP,         &to U_EXTRA,       &to U_BASE,        &to U_BUTTON,      U_EP_TOG,          U_NU,              &kp C_VOL_UP,      U_NU,              &kp C_BRI_UP,      \
// &kp LALT,          &kp LGUI,          &kp LCTRL,         &kp U,             U_NA,              &u_out_tog,        &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        &kp C_BRI_DEC,     \
// U_NA,              &kp RALT,          &to U_FUN,         &to U_MEDIA,       U_NA,              &u_bt_sel_4,       &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
// U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP




#define MIRYOKU_LAYER_NUM \
U_BOOT,            &to U_TAP,         &to U_EXTRA,       &to U_BASE,        &to U_BUTTON,      &kp PRCNT,         &kp N7,            &kp N8,            &kp N9,            &kp PLUS,          \
&kp LALT,          &kp LGUI,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp ASTRK,         &kp N4,            &kp N5,            &kp N6,            &kp MINUS,         \
U_NA,              &kp RALT,          &to U_MOUSE,       &to U_NUM,         U_NA,              &kp DLLR,          &kp N1,            &kp N2,            &kp N3,            &kp EQUAL,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp FSLH,          &kp N0,            &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_BOOT,            &to U_TAP,         &to U_EXTRA,       &to U_BASE,        &to U_BUTTON,      &kp TILDE,         &kp LBRC,          &kp AMPS,          &kp RBRC,          &kp EXCL,          \
&kp LALT,          &kp LGUI,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp BSLH,          &kp LPAR,          &kp QUESTION,      &kp RPAR,          &kp HASH,          \
U_NA,              &kp RALT,          &to U_NAV,         &to U_SYM,         U_NA,              &kp CARET,         &kp LBKT,          &kp PIPE,          &kp RBKT,          &kp AT,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp QUESTION,      &kp MINUS,         &kp GRAVE,         U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_BOOT,            &to U_TAP,         &to U_EXTRA,       &to U_BASE,        &to U_BUTTON,      &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LALT,          &kp LGUI,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp K_APP,         &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &to U_MEDIA,       &to U_FUN,         &kp PAUSE_BREAK,   &kp SLCK,          &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPACE,         &kp ESC,           U_NP,              U_NP
