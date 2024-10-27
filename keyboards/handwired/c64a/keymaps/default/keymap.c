/* Copyright 2024 Bartek Kryza <bkryza@gmail.com>
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


#include QMK_KEYBOARD_H

enum c64_layers {
  _ALL = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * LAYOUT:
 *
 *   ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬─────┐    ┌───────┐
 *   │<--│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ £ │ HOME  │ DEL │    | F1/F2 |
 *   ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┬─┴─────┤    ├───────┤
 *   │ CTRL│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ @ │ * │ ↑ |RESTORE│    | F3/F4 |
 * ┌─┴──┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┬─┘    ├───────┤
 * │RUN │S/L| A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ ; │ = | RETURN │      | F5/F6 |
 * ├────┼───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┬─┴─┬─┴───┼───┬────┤      ├───────┤
 * │ C= |SHIFT│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │SHIFT│ ↑ | ←  |      | F7/F8 |
 * └────┴─────┴─┬─┴───┴───┴───┴───┴───┴───┴───┴───┴─┬─┴─────┼───┴────┘      └───────┘
 *              │              SPACEBAR             │
 *              └───────────────────────────────────┘
 *
 * MATRIX:
 *                   rows
 *       0   1    2   3   4   5   6   7    8
 *      ┌───┬───┬───┬───┬───┬───┬───┬───┐
 *    A │ 1 │ ← │CTR|RUN│SPC│C64│ Q │ 2 │
 *      ├───┼───┼───┼───┼───┼───┼───┼───┤
 *    B │ 3 │ W │ A │LSH│ Z │ S │ E │ 4 │
 *      ├───┼───┼───┼───┼───┼───┼───┼───┤
 *    C │ 5 │ R │ D │ X │ C │ F │ T │ 6 │
 * c    ├───┼───┼───┼───┼───┼───┼───┼───┤
 * o  D │ 7 │ Y │ G │ V │ B │ H │ U │ 8 │
 * l    ├───┼───┼───┼───┼───┼───┼───┼───┤
 * u  E │ 9 │ I │ J │ N │ M │ K │ O │ 0 │
 * m    ├───┼───┼───┼───┼───┼───┼───┼───┤
 * n  F │ + │ P │ L │ , │ . │ : │ @ │ - │
 * s    ├───┼───┼───┼───┼───┼───┼───┼───┤
 *    G │ £ │ * │ ; │/  │RSH│ = │ ↑ │HOM|
 *      ├───┼───┼───┼───┼───┼───┼───┼───┤
 *    H │DEL│RET│ ← │ ↑ │F 1│F 3│F 5│F 7│
 *      └───┴───┴───┴───┴───┴───┴───┴───┼─────────┐
 *    I                                 │ RESTORE │
 *                                      └─────────┘
 */

    [_ALL] = LAYOUT(
        KC_1, KC_3, KC_5, KC_7, KC_9, KC_PLUS, KC_NO, KC_DEL,
        KC_ESC, KC_W, KC_R, KC_Y, KC_I, KC_P, KC_ASTERISK, KC_ENTER,
        KC_LEFT_CTRL, KC_A, KC_D, KC_G, KC_J, KC_L, KC_SEMICOLON, KC_RIGHT,
        KC_TAB, KC_LEFT_SHIFT, KC_X, KC_V, KC_N, KC_COMMA, KC_SLASH, KC_DOWN,
        KC_SPACE, KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_RIGHT_SHIFT, KC_F1,
        KC_LEFT_GUI, KC_S, KC_F, KC_H, KC_K, KC_COLON, KC_EQUAL, KC_F3,
        KC_Q, KC_E, KC_T, KC_U, KC_O, KC_AT, KC_UP, KC_F5,
        KC_2, KC_4, KC_6, KC_8, KC_0, KC_MINUS, KC_HOME, KC_F7,
        KC_BACKSLASH
    )
};
