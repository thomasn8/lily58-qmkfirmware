#include QMK_KEYBOARD_H


/* Empty layout
* ,-----------------------------------------.                    ,-----------------------------------------.
* |      |      |      |      |      |      |                    |      |      |      |      |      |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |      |      |      |      |      |                    |      |      |      |      |      |      |
* |------+------+------+------+------+------|                    |------+------+------+------+------+------|
* |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
* |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
* |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
* `-----------------------------------------/       /     \      \-----------------------------------------'
*                   |      |      |      | /       /       \      \  |      |      |      |
*                   |      |      |      |/       /         \      \ |      |      |      |
*                   `----------------------------'           '------''--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL, 
		KC_CAPS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RALT, 
		MO(1), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_UP, MO(1), 
		MO(2), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TAB, KC_BSPC, KC_N, KC_M, KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT, 
		KC_LCTL, KC_LALT, KC_LGUI, LSFT_T(KC_SPC), SC_SENT, KC_DOT, KC_COMM, KC_RCTL
	),
	
	[1] = LAYOUT(
		KC_TRNS, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU, 
		KC_TRNS, KC_GRV, KC_TILD, KC_HASH, KC_LBRC, KC_RBRC, KC_EXLM, KC_PMNS, KC_PPLS, KC_PEQL, KC_ASTR, KC_PERC, 
		KC_TRNS, KC_AT, KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_QUES, KC_SLSH, KC_PIPE, KC_BSLS, KC_LT, KC_NO, 
		KC_TRNS, KC_NO, KC_NO, KC_DLR, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_NO, KC_UNDS, KC_DQUO, KC_NO, KC_GT, KC_NO, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COLN, KC_SCLN, KC_TRNS
	),

	[2] = LAYOUT(
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_Z), SGUI(KC_Z), KC_PSCR, KC_HOME, KC_NO, 
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_SLSH), KC_NO, KC_NO, LGUI(KC_PPLS), KC_PGUP, 
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, LGUI(KC_PMNS), KC_PGDN, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO
	)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)



// KEY OVERIDES
// https://docs.qmk.fm/#/feature_key_overrides + https://docs.qmk.fm/#/keycodes
const key_override_t esc_key_override      = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, KC_NO);
const key_override_t n1_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_NO);
const key_override_t n2_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_NO);
const key_override_t n3_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_NO);
const key_override_t n4_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_NO);
const key_override_t n5_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_NO);
const key_override_t n6_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_NO);
const key_override_t n7_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_NO);
const key_override_t n8_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_NO);
const key_override_t n9_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_NO);
const key_override_t n0_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_NO);
const key_override_t dot_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_NO);
const key_override_t coma_key_override       = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_NO);
const key_override_t question_key_override    = ko_make_basic(MOD_MASK_SHIFT, KC_QUES, KC_NO);
const key_override_t slash_key_override    = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_NO);
const key_override_t quote_key_override   = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_NO);

const key_override_t kc_grv_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_GRV, KC_NO);
const key_override_t kc_tild_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_TILD, KC_NO);
const key_override_t kc_hash_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_HASH, KC_NO);
const key_override_t kc_lbrc_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_NO);
const key_override_t kc_rbrc_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, KC_NO);
const key_override_t kc_exlm_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_NO);
const key_override_t kc_ppls_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_PPLS, KC_NO);
const key_override_t kc_pmns_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_PMNS, KC_NO);
const key_override_t kc_peql_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_PEQL, KC_NO);
const key_override_t kc_astr_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_NO);
const key_override_t kc_perc_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_PERC, KC_NO);
const key_override_t kc_at_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_NO);
const key_override_t kc_circ_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_CIRC, KC_NO);
const key_override_t kc_ampr_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_NO);
const key_override_t kc_lprn_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_NO);
const key_override_t kc_rprn_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_NO);
const key_override_t kc_pipe_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_PIPE, KC_NO);
const key_override_t kc_bsls_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_NO);
const key_override_t kc_lt_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_LT, KC_NO);
const key_override_t kc_gt_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_GT, KC_NO);
const key_override_t kc_dlr_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_DLR, KC_NO);
const key_override_t kc_lcbr_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_NO);
const key_override_t kc_rcbr_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_NO);
const key_override_t kc_unds_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_UNDS, KC_NO);
const key_override_t kc_dquo_key_override   =  ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_NO);


const key_override_t **key_overrides = (const key_override_t *[]){
  &esc_key_override,
	&n1_key_override,
	&n2_key_override,
	&n3_key_override,
	&n4_key_override,
	&n5_key_override,
	&n6_key_override,
	&n7_key_override,
	&n8_key_override,
	&n9_key_override,
	&n0_key_override,
	&dot_key_override,
	&coma_key_override,
	&question_key_override,
	&slash_key_override,
	&quote_key_override,
	&kc_grv_key_override,
	&kc_tild_key_override,
	&kc_hash_key_override,
	&kc_lbrc_key_override,
	&kc_rbrc_key_override,
	&kc_exlm_key_override,
	&kc_ppls_key_override,
	&kc_pmns_key_override,
	&kc_peql_key_override,
	&kc_astr_key_override,
	&kc_perc_key_override,
	&kc_at_key_override,
	&kc_circ_key_override,
	&kc_ampr_key_override,
	&kc_lprn_key_override,
	&kc_rprn_key_override,
	&kc_pipe_key_override,
	&kc_bsls_key_override,
	&kc_lt_key_override,
	&kc_gt_key_override,
	&kc_dlr_key_override,
	&kc_lcbr_key_override,
	&kc_rcbr_key_override,
	&kc_unds_key_override,
	&kc_dquo_key_override,
  NULL // Null terminate the array of overrides!
};






//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

bool oled_task_user(void) {
  // Set cursor position
  oled_set_cursor(0, 1);

  // Caps lock status
  led_t led_state = host_keyboard_led_state();
  oled_write_P(led_state.caps_lock ? PSTR( "CAPS LOCK") : PSTR("         "), false);

  return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  return OLED_ROTATION_270;
}

// // When you add source files to SRC in rules.mk, you can use functions.
// const char *read_layer_state(void);
// const char *read_logo(void);
// void set_keylog(uint16_t keycode, keyrecord_t *record);
// const char *read_keylog(void);
// const char *read_keylogs(void);

// // const char *read_mode_icon(bool swap);
// // const char *read_host_led_state(void);
// // void set_timelog(void);
// // const char *read_timelog(void);

// bool oled_task_user(void) {
//   if (is_keyboard_master()) {
//     // If you want to change the display of OLED, you need to change here
//     oled_write_ln(read_layer_state(), false);
//     oled_write_ln(read_keylog(), false);
//     oled_write_ln(read_keylogs(), false);
//     //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
//     //oled_write_ln(read_host_led_state(), false);
//     //oled_write_ln(read_timelog(), false);
//   } else {
//     oled_write(read_logo(), false);
//   }
//     return false;
// }
#endif // OLED_ENABLE

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   if (record->event.pressed) {
// #ifdef OLED_ENABLE
//     set_keylog(keycode, record);
// #endif
//     // set_timelog();
//   }
//   return true;
// }
