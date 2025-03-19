/* Copyright 2024 Juho T. (@Squalius-cephalus)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// defaults to MASTER_LEFT
// #define MASTER_LEFT
// #define MASTER_RIGHT

// EEPROM emulation config
// usable EEPROM size
#define WEAR_LEVELING_LOGICAL_SIZE 1024*16 // 16kb usable EEPROM
// backing size = multiple of logical size
#define WEAR_LEVELING_BACKING_SIZE 1024*1024 // 1mb backing flash size (out of 2mb available)

// default value for layer count = 4
#define DYNAMIC_KEYMAP_LAYER_COUNT 16
// default value for macro at 16kb = 16
#define DYNAMIC_KEYMAP_MACRO_COUNT 64
// default value for combos, tap dance, key overrides at 16kb = 32
#define VIAL_TAP_DANCE_ENTRIES 64
#define VIAL_COMBO_ENTRIES 64
#define VIAL_KEY_OVERRIDE_ENTRIES 64

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000
