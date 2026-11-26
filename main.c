#include <stdio.h>
#include "battle_system.h"

int main(void) {
    TypeEffect eff = {"Fire", "Grass", 2.0};
    Type t = {0};
    Move m = {0};
    Position pos = {0, 4};
    Pokemon p = {0};
   Player pl = {.name = "Player1", .currentIndex = 1, .position = pos};
    RoundLog log = {1, "Start"};

    (void)eff;
    (void)t;        
    (void)m;
    (void)pl;
    (void)log;
    p.currentHP = p.maxHP;
    (void)p;
printf("Battle system initialized successfully.\n");
    return 0;
}