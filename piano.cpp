#include <iostream>
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[])
{
  cout << "Welcome to the lit jam emulator" << endl;
  ifstream fin("song.txt"); //This will open song.txt
  if(!fin){
    cerr << "You dun fucked up";
    return -1;
  }

  char note;
  int length;
  while(fin >> note  >> length){ //Reads through sheet music to take in a note and length
      playNote(note,length); //This function plays the note
  }
}