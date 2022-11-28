#include <iostream>
#include "Media.h"
using namespace std;

class Music : public Media{//media child
 public:
  void setDuration(int durationOut);
  int duration;
  void setArtist(char* artistOut);
  char artist[80];
  virtual void print();
};
