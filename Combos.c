#include <stdint.h>

enum combos {
    COMBO_LCTL,
    COMBO_LGUI,
    COMBO_LALT,
    COMBO_LCTLGUI,
    COMBO_RCTL,
    COMBO_RGUI,
    COMBO_RALT,
    COMBO_RCTLGUI,
    COMBO_LENGTH // nifty trick to avoid manually specifying how many combos you have
};

// define keys that make up combos
const uint16_t PROGMEM fd_combo[]  = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM fs_combo[]  = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM fa_combo[]  = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM fds_combo[] = {KC_F, KC_D, KC_S, COMBO_END};

const uint16_t PROGMEM jk_combo[]    = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM jl_combo[]    = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM jsemi_combo[] = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM jkl_combo[]   = {KC_J, KC_K, KC_L, COMBO_END};
// more here...

// map combo names to their keys and the key they trigger
combo_t key_combos[] = {
    [COMBO_LCTL] = COMBO(fd_combo, KC_LCTL), [COMBO_LGUI] = COMBO(fs_combo, KC_LGUI), [COMBO_LALT] = COMBO(fa_combo, KC_LALT), [COMBO_LCTLGUI] = COMBO(fds_combo, LCTL(KC_LGUI)), [COMBO_RCTL] = COMBO(jk_combo, KC_RCTL), [COMBO_RGUI] = COMBO(jl_combo, KC_RGUI), [COMBO_RALT] = COMBO(jsemi_combo, KC_RALT), [COMBO_RCTLGUI] = COMBO(jkl_combo, LCTL(KC_RGUI)),
    // more here...
};
