#ifndef KEY_GROUPS_H
#define KEY_GROUPS_H

#define FIRST_ROW_SYSTEM 0 1 2 3 4 5 6 7 8 9 10 11

/* Home rows used by current HRM hold-trigger tuning (inner key excluded per side) */
#define LEFT_HOME_ROW 25 26 27 28
#define RIGHT_HOME_ROW 31 32 33 34

/* QWERTY area without home rows */
#define LEFT_QWERTY_NO_HOME 13 14 15 16 17 29 37 38 39 40 41
#define RIGHT_QWERTY_NO_HOME 18 19 20 21 22 30 42 43

/* Full QWERTY area including home rows */
#define LEFT_QWERTY 13 14 15 16 17 25 26 27 28 29 37 38 39 40 41
#define RIGHT_QWERTY 18 19 20 21 22 30 31 32 33 34 42 43

/* Thumb clusters */
#define LEFT_THUMB_CLUSTER 51 52 53
#define RIGHT_THUMB_CLUSTER 54 55 56
#define THUMB_CLUSTER 51 52 53 54 55 56

/* Mouse cluster */
#define LEFT_MOUSE_CLUSTER 48 49 50
#define RIGHT_MOUSE_CLUSTER 57 58 59
#define MOUSE_CLUSTER 48 49 50 57 58 59

#define LAST_ROW 48 49 50 51 52 53 54 55 56 57 58 59

/* Exact legacy HRM hold-trigger sets used in go60.keymap */
#define GO60_HRM_LEFT_OPPOSING_KEYS LAST_ROW RIGHT_QWERTY
#define GO60_HRM_RIGHT_OPPOSING_KEYS LAST_ROW LEFT_QWERTY

#endif /* KEY_GROUPS_H */
