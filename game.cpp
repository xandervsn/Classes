#include <iostream>
#include "Game.h"
using namespace std;

void Game::setRating(int ratingOut){
  rating = ratingOut;
  return;
}
void Game::print(){
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Critic Rating: " << rating << endl << endl;
  return;
}
