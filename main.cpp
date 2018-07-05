#include <iostream>
#include <sys/stat.h>
#include <stdio.h>

using namespace std;

const string FILE_NAME = "kill.me";
bool exists(string name);

int main(void) {
  
  cout<<"          __"<<endl;
  cout<<"     w  c(..)o   ("<<endl;
  cout<<"      \\__(-)    __)"<<endl;
  cout<<"          /\\   ("<<endl;
  cout<<"         /(_)___)"<<endl;
  cout<<"         w /|"<<endl;
  cout<<"          | \\"<<endl;
  cout<<"         m  m"<<endl;
  cout<<""<<endl;
  cout<<" Welcome!"<<endl;
  cout<<" Take a look at this"<<endl;
  cout<<" dancing monkey!"<<endl;
  cout<<""<<endl;

  bool run = true;
  while(run) {
    if(exists(FILE_NAME)) {
      if(remove(FILE_NAME.c_str()) == 0) {
        run = false;
      }
    }
  }
  
  return 0;
}

bool exists(string name) {
  struct stat buffer;
  return (stat (name.c_str(), &buffer) == 0);
}