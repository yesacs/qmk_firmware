// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RGB_MATRIX_LED_COUNT 54
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_ALPHAS_MODS
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define STARTUP_SONG SONG(ODE_TO_JOY)

// #define MASTER_LEFT
// #define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
// #define ANALOG_JOYSTICK_X_AXIS_PIN GP27

#define ANALOG_JOYSTICK_Y_AXIS_PIN GP27
#define ANALOG_JOYSTICK_X_AXIS_PIN GP26

#define POINTING_DEVICE_INVERT_Y
// #define POINTING_DEVICE_INVERT_X

// #define ANALOG_JOYSTICK_SPEED_REGULATOR 18
#define ANALOG_JOYSTICK_SPEED_MAX 3

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

// #define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL

// Neutralize left alt and left GUI (Default value)
// #define MODS_TO_NEUTRALIZE { MOD_BIT(KC_LEFT_ALT), MOD_BIT(KC_LEFT_GUI) }
// Neutralize left alt, left GUI, right GUI and left Control+Shift
// #define MODS_TO_NEUTRALIZE { MOD_BIT(KC_LEFT_ALT), MOD_BIT(KC_LEFT_GUI), MOD_BIT(KC_RIGHT_GUI), MOD_BIT(KC_LEFT_CTRL)|MOD_BIT(KC_LEFT_SHIFT) }

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 130

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define QUICK_TAP_TERM 0
#define RETRO_TAPPING
// #define RETRO_SHIFT 500
// #define PERMISSIVE_HOLD
// #define AUTO_SHIFT_REPEAT
//

#define COMBO_TERM 25        // how quickly all combo keys must be pressed in succession to trigger
#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
#define COMBO_HOLD_TERM 175  // how long at least one of the combo keys must be held to trigger
