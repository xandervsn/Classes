#include <iostream>
#include "Media.h"
using namespace std;

void Media::setTitle(char* titleOut){
  for(int i = 0; i < 80; i++){
    title[i] = titleOut[i];
  }
  return;
}

void Media::setYear(int yearOut){
  year = yearOut;
}

void Media::getTitle(char* strOut){
  for(int i = 0; i <sizeof(title); i++){
    strOut[i] = title[i];
  }
}

int Media::getYear(){
  return year;
}

void Media::print(){
}


void Media::setPublisher(char* publisherOut){
  for(int i = 0; i < 80; i++){
    publisher[i] = publisherOut[i];
  }
  return;
}
