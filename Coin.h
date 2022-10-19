#ifndef COIN_H_
#define COIN_H_

#include <stdio.h>
#include <stdbool.h>

typedef struct Coin_struct {
  bool isHeads;
  int flips;
  int heads;
} Coin;

Coin InitCoin(int seed);
Coin Flip(Coin coin);
int NumFlips(Coin coin);
int NumHeads(Coin coin);
int NumTails(Coin coin);
bool IsHeads(Coin coin);

#endif
