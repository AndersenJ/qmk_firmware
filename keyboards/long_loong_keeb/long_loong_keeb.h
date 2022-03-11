// Copyright 2022 Johnathan Andersen (@AndersenJ)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
                 kPrtSc, kEsc, kTab,  kq, kw, ke, kr, kt, ky, ku, ki, ko, kp, klsb, krsb, kbSlash, kHome, kEnd, k7, k8, k9, kPlus, \
      kf1, kf2,  kf3   , kf4,  kBackspace,ka,ks,kd,kf, kg, kh, kj, kk, kl, kcln,    kapo, kEnter , kDel, kPgUp, k4, k5, k6, kMinus,\
      kf5, kf6,  kf7,    kf8,  kLShift, kz, kx, kc, kv, kb, kn, km, kCom,kPer,  kfSlash,  krShift, kUp , kPgDn, k1, k2, k3, knEnter, \
      kf9, kf10, kf11,   kf12, kLCtrl,kLWin,kLAlt,kLFn,     kSpace,           kRWin, kRCtrl, kLeft, kDown,kRight,k0, knPer \
) { \
    { kf1, kPrtSc, kTab, kw, kr, ky, ki, kp, krsb, kHome, k7, k9}, \
    { kf5, kf3, kBackspace, ks, kf,kh, kk, kcln, kEnter, kDel, k4, k6},  \
    { kf9, kf7,  kLShift, kx, kv, kn, kCom, kfSlash, kLeft, kUp, k1, k3},  \
    { kf10, kf11, kLCtrl, kLAlt, kSpace, km, kPer, kRWin, kbSlash, kDown, k0, knPer},  \
    { kf6, kf12, kLWin, kLFn, kb, kj, kl, kRCtrl, KC_NO, kRight, k2, kPlus},  \
    { kf2, kf8, kz, kc, kg, ku, ko, krShift, KC_NO, kPgDn, k5, kMinus},  \
    { KC_NO,  kf4, ka, kd,    kt, KC_NO, KC_NO, kapo, KC_NO, kPgUp,    k8, knEnter},  \
    { KC_NO, kEsc, kq, ke, KC_NO, KC_NO, KC_NO, klsb, KC_NO,  kEnd, KC_NO, KC_NO} \
}
