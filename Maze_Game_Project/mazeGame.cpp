##include <iostream> 
#include <vector>
#include <string>
#include <stdlib.h> 
#include <ncurses.h>

using namespace std;

int main () {

string userName;
int startingNumber;
int secondNumber;
char WIDTH, HEIGHT;
unsigned char action;

unsigned char maze;
int posX = 1, posY = 1;

//declare functions
void print_maze();
void print_maze2();
void print_maze3();
void print_maze4();
// void playerAction();

cout << "Welcome! Please enter your name:";

getline(cin,userName); 

cout << endl;

cout << "Happy Halloween " << userName << "! You and your 4 friends decide to explore the mysterious haunted house in your neighborhood." << endl;

cout << endl << "Press 1 to enter the haunted mansion:" << endl; 

cin >> startingNumber;


if (startingNumber == 1) {
   cout << endl << "You and your friends have entered the haunted mansion. But the doors suddenly close! You must pass the mazes in every room to escape!" << endl << endl;   
   
}

else {
   cout << endl << "Game has ended." << endl;   
   return 0;
}

cout << "Press 1 to enter the first room." <<endl;

cin >> secondNumber;

if (secondNumber == 1) {
    cout << "This first room is 5 by 5 feet long, so the maze should be easy. You can start, but be careful. You never know what might be lurking in these haunted rooms..";  
    cout << endl;
}

else {
   cout << "Game will end.";
   return 0;
}


cout << endl << "Control your player using WASD" << endl << endl;

print_maze();

// gets output for maze movement
cout << "Please click W, A, S, or D now:" << endl;
cin  >> action;

int prevposX = posX;
int prevposY = posY;

cout << endl << endl;

print_maze2();

cout << endl << endl;

print_maze3();

cout << endl << endl;

print_maze4();

return 0;
}

// function to print 5 X 5 maze
void print_maze() {
int i, j;
unsigned char player = {1};
   char maze[5][5] = {

   {'#','#','#','#','#'}, //0
   {' ',' ','#',' ',' '}, //1
   {'#',' ',' ',' ','#'}, //2
   {'#','#','X',' ','#'}, //3
   {'#','#','#','#','#'}, //4

   };
   for (i = 0; i < 5; i++) {
      for (j = 0 ;j < 5; j++) {
         cout << maze[i][j]<<" ";
      }
   cout << endl;
   }
   cout << endl;
}

/* void playerAction() {
// function that controls player through maze
unsigned char action;

   int posX = 1, posY = 1;

   cout << "/nAction";
   cin  >> action;

   int prevposX = posX;
   int prevposY = posY;
   unsigned char space = {32};

   switch (action) {

      case 'a':
         
         if ( maze[posX][posY-1] != '#') {
            posY--;
            cout << posX << ',' << posY << endl;
            maze [prevposX] [prevposY] = space; 
         }
         system("cls");
         break;

      case 'd':

         if (maze [posX] [posY+1] != '#') {
            posY++;
            cout << posX << "," << posY << endl;
            maze [prevposX] [prevposY] = space; 
         }
         system("cls");
         break;

      case 's':

         if (maze [posX+1] [posY] != '#') {
            posX++;
            cout << posX << "," << posY << endl;
            maze [prevposX] [prevposY] = space; 
         }
         system("cls");
         break;
      
      case 'w':

         if (maze [posX-1] [posY] != '#') {
            posX--;
            cout << posX << "," << posY << endl;
            maze [prevposX] [prevposY] = space; 
         }
         system("cls");
         break;

      default:
      cout << "Incorrect action!" << endl;
      break;

   }
}

*/ 
//function to print 10 X 10 maze
void print_maze2() {
int i, j;
   char maze2[10][10] = {

      {'#','#','#','#','#','#','#','#','#','#'},        
      {' ',' ','#','X',' ',' ','#','#','#','#'},
      {'#',' ','#','#',' ','#','#',' ','#','#'},
      {'#',' ','#','#',' ',' ',' ',' ',' ','#'},
      {'#',' ',' ',' ',' ','#',' ','#',' ',' '},
      {'#',' ','#','#',' ','#',' ','#','#','#'},
      {'#',' ','#',' ',' ','#',' ',' ','#','#'},
      {'#',' ',' ',' ','#','#','#',' ','X','#'},
      {'#','#','#',' ',' ',' ',' ',' ','#','#'},
      {'#','#','#','#','#','#','#','#','#','#'},

   };
   for (i = 0; i < 10; i++) {
      for (j = 0; j < 10; j++) {
         cout << maze2[i][j]<<" ";
      }
   cout << endl;
   }
}

// function to print 15 X 15 maze
void print_maze3(){
int i, j;

   char maze3[16][16] = {
      {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
      {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
      {'#',' ','#','#','#',' ','#','#','#','#','#','#',' ','#',' ','#'},
      {'#',' ','#',' ',' ',' ',' ',' ','#','X',' ',' ',' ','#',' ','#'},
      {'#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#',' ','#'},
      {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#'},
      {' ',' ','#',' ','#',' ','#','#','#',' ','#','#','#','#',' ','#'},
      {'#',' ','#',' ',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ','#'},
      {'#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#','#','#'},
      {'#',' ','#',' ','#',' ','#',' ',' ',' ','#','#',' ','#',' ','#'},
      {'#',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#',' ','#',' ','#'},
      {'#',' ','#',' ','#',' ','#',' ','#','#',' ','#','#','#',' ',' '},
      {'#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#'},
      {'#',' ','#',' ','#','#','#','#','#','#','#',' ','#','#',' ','#'},
      {'#',' ',' ',' ',' ',' ',' ','X',' ','#',' ',' ',' ',' ',' ','#'},
      {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
   };

   for (i = 0; i < 16; i++) {
      for ( j = 0; j < 16; j++) {
         cout << maze3[i][j]<<" ";
      }
   cout << endl;
   }
}

// function to print 20 X 20 maze
void print_maze4() {
int i, j;
   char maze4[20][20] = {
      {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
      {'#',' ',' ','X','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#'},
      {'#',' ','#','#','#',' ','#','#','#','#','#','#',' ','#',' ','#','#','#','#','#'},
      {'#',' ','#',' ',' ',' ',' ',' ','#','X',' ',' ',' ','#',' ',' ',' ',' ','#','#'},
      {'#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#',' ','#','#',' ','#','#'},
      {'#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',' ',' ','#','#'},
      {' ',' ','#',' ','#',' ','#','#','#',' ','#','#','#','#',' ','#','#','#','#','#'},
      {'#',' ','#',' ',' ',' ',' ','#','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#'},
      {'#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#','#','#','#','#','#','#'},
      {'#',' ','#',' ','#',' ','#',' ',' ',' ','#','#',' ','#',' ',' ','#','#','#','#'},
      {'#',' ','#',' ',' ',' ','#',' ','#',' ',' ','#',' ','#',' ','#','#',' ','#','#'},
      {'#',' ','#',' ','#',' ','#',' ','#','#',' ','#','#','#',' ',' ',' ',' ','#','#'},
      {'#',' ','#',' ','#',' ',' ',' ','#',' ',' ',' ',' ','#',' ','#','#','#',' ',' '},
      {'#',' ','#',' ','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#',' ','#'},
      {'#',' ',' ',' ',' ',' ',' ',' ',' ','#','X',' ',' ',' ',' ','#',' ',' ',' ','#'},
      {'#','#','#',' ','#',' ','#','#','#','#','#','#','#','#',' ','#',' ','#','#','#'},
      {'#',' ',' ',' ','#',' ','#',' ','#','#',' ','#','#','#',' ',' ',' ','#','#','#'},
      {'#',' ','#',' ','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#','#','#','#','#'},
      {'#','X','#','X','#','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#'},
      {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
   };
for (i = 0; i < 20; i++) {
      for (j = 0; j < 20; j++) {
         cout << maze4[i][j]<<" ";
      }
   cout << endl;
   }
}
