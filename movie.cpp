#include <iostream>
#include "Movie.h"
using namespace std;

void Movie::setDuration(int durationOut){
  duration = durationOut;
  return;
}

void Movie::setDirector(char* directorOut){
  for(int i = 0; i < 80; i++){
    director[i] = directorOut[i];
  }
  return;
}

void Movie::print(){
  cout << "Title: " << title << endl << "Year: " << year << endl << "publisher: " << publisher << endl << "director: " << director << endl << "Duration: " << duration << endl << endl;
  return;
}
