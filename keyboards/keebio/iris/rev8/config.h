// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define AM_HYPR HYPR_T(KC_CAPS)
#define AM_LSFTA MT(MOD_LSFT,KC_A)
#define AM_LCTLS MT(MOD_LCTL,KC_S)
#define AM_LALTD MT(MOD_LALT,KC_D)
#define AM_LGUIF MT(MOD_LGUI,KC_F)
#define AM_RGUIJ MT(MOD_RGUI,KC_J)
#define AM_RALTK MT(MOD_RALT,KC_K)
#define AM_RCTLL MT(MOD_RCTL,KC_L)
#define AM_RSFTSCLN MT(MOD_RSFT,KC_SCLN)
#define AM_LCAGB MT(MOD_LCTL | MOD_LALT | MOD_LGUI,KC_B)
#define AM_RCAGN MT(MOD_RCTL | MOD_RALT | MOD_RGUI,KC_N)

#define USB_VBUS_PIN GP8

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP10
#define I2C1_SCL_PIN GP11
