#include <iostream>
#include "Media.h"
using namespace std;

class Game : public Media{//media child
 public:
  void setRating(int rating);
  int rating;
  virtual void print();
};
