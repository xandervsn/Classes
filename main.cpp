#include <iostream>
#include "Game.h"
#include <vector>
#include <cstring>
using namespace std;

int main(){
  bool quit = false;
  vector<Media*> mediaDigi;
  char input[7];
  char command[3];
  char charInput[80];
  char charInput2[80];
  char checkArray[80];
  int  intInput;
  while(!quit){
    cout << "Input a valid command (ADD, SEARCH, DELETE, QUIT)" << endl;
    cin >> input;
    if(strcmp(input,"ADD") == 0){
      cout << "Input the desired media (G, Mo, Mu)" << endl;
      cin >> command;
      if(strcmp(input2, "VG") == 0){
	Game* media = new Game();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);
	cout<< "Set Publisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);
	cout << "Set Rating" << endl;
	cin >> intInput;
	media->setRating(intInput);
	mediaDigi.push_back(media);
      }
    }
  }
  return 0;
}
