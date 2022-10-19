#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Coin.h"
Coin InitCoin(int seed) {
  srand(seed);
  Coin coin;
  coin.heads = 0;
  coin.flips = 0;
  coin.isHeads = 1;
return coin;
}

Coin Flip(Coin coin) {
  coin.isHeads = rand() % 2;
  coin.flips++;
  if (coin.isHeads) {
    coin.heads++;
  }
return coin;
}

int NumFlips(Coin coin) {
  return coin.flips;
}
int NumHeads(Coin coin) {
  return coin.heads;
}
int NumTails(Coin coin) {
  return coin.flips - coin.heads;
}
bool IsHeads(Coin coin) {
  return coin.isHeads;
}
