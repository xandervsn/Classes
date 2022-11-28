#include <iostream>
#include "Music.h"
using namespace std;

void Music::setDuration(int durationOut){
  duration = durationOut;
  return;
}

void Music::setArtist(char* artistOut){
  for(int i = 0; i < 80; i++){
    artist[i] = artistOut[i];
  }
  return;
}

void Music::print(){
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Arist: " << artist << endl << "Duration: " << duration << endl << endl;;
  return;
}
