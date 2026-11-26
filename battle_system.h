#ifndef BATTLE_SYSTEM_H
#define BATTLE_SYSTEM_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants Configuration
#define NAME_SIZE 50
#define TYPE_EFFECT_COUNT 19
#define POKEMON_TYPE_COUNT 2
#define MOVE_COUNT 4
#define TEAM_SIZE 6
#define ROUND_SUMMARY_SIZE 200

typedef enum {
PHYSICAL,
SPECIAL
}MoveCategory;

typedef struct {
char atkName[NAME_SIZE];
char defName[NAME_SIZE];
double multiplier;
}TypeEffect;

typedef struct {
char name[NAME_SIZE];
TypeEffect effects[TYPE_EFFECT_COUNT];
}Type;

typedef struct {
char name[NAME_SIZE];
Type type;
MoveCategory category;
int power;
int range;
}Move;

typedef struct {
int x;
int y;
}Position;

typedef struct{
char name[NAME_SIZE];
Type types[POKEMON_TYPE_COUNT];
int maxHP;
int currentHP;
int attack;
int defense;
int spAtk;
int spDef;
int speed;
Move moves[MOVE_COUNT];
}Pokemon;

typedef struct{
char name[NAME_SIZE];
Pokemon Pokemons[TEAM_SIZE];
int currentIndex;
Position position;    
}Player;

typedef struct{
int roundNumber;
char summary[ROUND_SUMMARY_SIZE];
}RoundLog;

#endif