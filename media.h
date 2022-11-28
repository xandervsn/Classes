#include <iostream>
#ifndef ADD_H
#define ADD_H

using namespace std;

class Media{
 public:
  void setTitle(char* titleOut);
  void setYear(int year);
  void setPublisher(char* publisherOut);
  int getYear();
  void getTitle(char* strOut);
  char title[80];
  char publisher[80];
  int year;
  virtual void print();//keep as virt; children print diff
};

#endif
