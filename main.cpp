/* Xander Siruno-Nebel
   C++/Data Structs, Galbraith
   Nov 30, 2022
   Classes, a program that allows you to create a database of digital media
 */

#include <iostream>
#include "Game.h"
#include "Music.h"
#include "Movie.h"
#include <vector>
#include <cstring>
using namespace std;

int main(){
  bool quit = false;
  vector<Media*> mediaDigi;
  char input[7];
  char command[3];
  char charInput[80];
  char charCommand[80];
  char checkArray[80];
  int  intInput;
  cout << "Note: Errors may occur from incorrectly formatted inputs" << endl;
  while(!quit){
    cout << "Input a valid command (ADD, SEARCH, DELETE, QUIT)" << endl;
    cin >> input;
    if(strcmp(input,"ADD") == 0){//ADD ==========================================
      cout << "Input the desired media (G, Mo, Mu)" << endl;
      cin >> command;
      if(strcmp(command, "G") == 0){//GAME ++++++++++++++++++++++++++++++++
	Game* media = new Game();
	cout << "Separate Words with Dashes (e.g. God-Of-War)" << endl;
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);//sets game title
	cout << "Set Year" << endl;
	cin >> intInput;
	media-> setYear(intInput);//sets game year
	cout<< "Set Publisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);//sets game publisher
	cout << "Set Critic Rating" << endl;
	cin >> intInput;
	media->setRating(intInput);//sets game rating
	mediaDigi.push_back(media);//pushes game into vector
      }
      if(strcmp(command, "Mu") == 0){//MUSIC ++++++++++++++++++++++++++++++++
	Music* media = new Music();
	cout << "Separate Words with Dashes (e.g. Kendrick-Lamar)" << endl;
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);//sets song title
	cout << "Set Year" << endl;
	cin >> intInput;
	media-> setYear(intInput);//sets song year
	cout<< "Set Publisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);//sets song publisher
	cout<< "Set Artist" << endl;
	cin >> charInput;
	media->setArtist(charInput);//sets song artist
	cout << "Set Duration" << endl;
	cin >> intInput;
	media->setDuration(intInput);//sets song duration
	mediaDigi.push_back(media);//pushes song into vector
      }
      if(strcmp(command, "Mo") == 0){//MOVIE ++++++++++++++++++++++++++++++++
	Movie* media = new Movie();
	cout << "Separate Words with Dashes (e.g. Shrek-2)" << endl;
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);//set movie title
	cout << "Set Year" << endl;
	cin >> intInput;
	media-> setYear(intInput);//set movie year
	cout<< "Set Publisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);//set movie publisher
	cout<< "Set Director" << endl;
	cin >> charInput;
	media->setDirector(charInput);//set movie director
	cout << "Set Duration" << endl;
	cin >> intInput;
	media->setDuration(intInput);//set movie duration
	mediaDigi.push_back(media);//pushes movie into vector
      }
    }
    else if(strcmp(input,"SEARCH") == 0){//SEARCH ==========================================
      cout << "Do you want to search by title or year? (T ot Y)" << endl;
      cin >> command;
      if(strcmp(command, "T") == 0){//TITLE ++++++++++++++++++++++++++++++++
	cout << "Input Title" << endl;
	cin >> charInput;
	for(int i = 0; i < mediaDigi.size(); i++){
	  mediaDigi[i]->getTitle(checkArray);
	  if(strcmp(checkArray, charInput) == 0){
	    mediaDigi[i]->print();
	  }
	}
      }
      else if(strcmp(command, "Y") == 0){//YEAR ++++++++++++++++++++++++++++++++
	cout << "Input Year" << endl;
	cin >> intInput;
	for(int i = 0; i < mediaDigi.size(); i++){
	  if(mediaDigi[i]->getYear() == intInput){
	    mediaDigi[i]->print();
	  }
	}
      }else{
        cout << "Invalid Input" << endl;
      }
    }
    else if(strcmp(input,"DELETE") == 0){//DELETE ==========================================
      cout << "Search by title (T) or year (Y)" << endl;
      cin >> command;
      if(strcmp(command, "T") == 0){//TITLE ++++++++++++++++++++++++++++++++
	cout << "Input title" << endl;
	cin >> charInput;
	for(int i = 0; i < mediaDigi.size(); i++){
	  mediaDigi[i]->getTitle(checkArray);
	  if(strcmp(checkArray, charInput) == 0){
	    mediaDigi[i]->print();
	    cout << "You are about to delete. Confirm (Y/N)?" << endl;
	    cin >> charCommand;
	    if(strcmp(charCommand, "Y") == 0){
	      delete mediaDigi.at(i);//deletes media from heap
	      mediaDigi.erase(mediaDigi.begin() + i);//erases pointer
	    }
	  }
	}
      }
      else if(strcmp(command, "Y") == 0){//YEAR ++++++++++++++++++++++++++++++++
	cout << "Input Year" << endl;
	cin >> intInput;
	for(int i = 0; i < mediaDigi.size(); i++){
	  if(mediaDigi[i]->getYear() == intInput){
	    mediaDigi[i]->print();
	    cout << "You are about to delete. Confirm (Y/N)?" << endl;
	    cin >> charCommand;
	    if(strcmp(charCommand, "Y") == 0){
	      delete mediaDigi.at(i);//deletes media from heap
	      mediaDigi.erase(mediaDigi.begin() + i);//erases pointer
	    }
	  }
	}
      }else{
        cout << "Invalid input" << endl;
      }
    }
    else if(strcmp(input,"QUIT") == 0){//QUIT ==========================================
      quit = true;
    }
  }
  return 0;
}

