//
//  game.h
//  hw8(me)
//
//  Created by Stella Zhu on 4/2/20.
//  Copyright © 2020 Stella Zhu. All rights reserved.
//

#ifndef GAME_H
#define GAME_H

#include "gba/gba.h"

                    /* TODO: */

            // Create any necessary structs //


/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
*
*
*
* Example of a struct to hold state machine data:
*
* typedef struct state {
*   int currentState;
*   int nextState;
* } State;
*
*/

int buttondown[NBUTTONS] = {0};
int button[NBUTTONS] = {0};

typedef enum GBAState {
  START,
  PLAY,
  WIN,
  LOSE
} GBAState;

typedef enum ghostType {
    BLUEGHOST,
    REDGHOST,
    ORANGEGHOST,
    PINKGHOST
} GhostType;

typedef struct player {
    int row;
    int col;
    int width;
    int height;
    int speed;
    int health;
    int damage;
    int gold;
    int evolved;
    int happiness;
    int attackCounter;
    u16 *image;
} Player;
// WeakPlayer, PowerPlayer

typedef struct ghost {
    int row;
    int col;
    int width;
    int height;
    int rd;
    int cd;
    int health;
    int damage;
    int realmRadius;
    int dead;
    int erased;
    GhostType ghostType;
} Ghost;

typedef struct ham {
    int row;
    int col;
    int height;
    int width;
    int eaten;
    int erased;
} Ham;
// PoorHealth, FullHealth, Hamburger, Gold, Explosion

struct playerState {
    Player stella;
}csP, psP;

struct ghostState {
    Ghost ghostList[4];
}csG, psG;

#endif
