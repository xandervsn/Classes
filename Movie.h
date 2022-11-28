#include <iostream>
#include "Media.h"
using namespace std;

class Movie : public Media{//media child
 public:
  void setDuration(int durationOut);
  int duration;
  void setDirector(char* directorOut);
  char director[80];
  virtual void print();
};
