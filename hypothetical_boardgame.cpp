//Declarations
#include <iostream>
#include <random>
#include <string>
#include <unistd.h>
#include <sys/time.h>
#include <thread>
using namespace std;

//Variables
int menuchoice;
int playerspace;
int playerroll;
int winstatp;
int com1roll;
int com2roll;
int area;
string playerid;
int com1space;
int com2space;


int main() {
  string board [40] [2];
  board [0][1] = "Go";
  board [1][1] = "Mediterranean Avenue";
  board [2][1] = "Community Chest";
  board [3][1]= "Baltic Avenue";
  board [4][1]= "Income Tax";
  board [5][1]= "Reading Railroad";
  board [6][1]= "Oriental Avenue";
  board [7][1]= "Chance";
  board [8][1]= "Vermont Avenue";
  board [9][1]= "Connecticut Avenue";
  board [10][1]= "Jail";
  board [11][1]= "St.Charles Place";
  board [12][1]= "Electric Company";
  board [13][1]= "States Avenue";
  board [14][1]= "Virginia Avenue";
  board [15][1]= "Pennsylvania Railroad";
  board [16][1]= "St. James Road";
  board [17][1] = "Community Chest";
  board [18][1] = "Tennessee Avenue";
  board [19][1]= "";
  board [20][1]= "Med ave";
  board [21][1]= "Med ave";
  board [22][1]= "Med ave";
  board [23][1]= "Med ave";
  board [24][1]= "Med ave";
  board [25][1]= "Med ave";
  board [26][1]= "Med ave";
  board [27][1]= "Med ave";
  board [28][1]= "Med ave";
  board [29][1]= "Med ave";
  board [30][1]= "Med ave";
  board [31][1]= "Med ave";
  board [32][1]= "Med ave";
  board [33][1]= "Med ave";
  board [34][1]= "Med ave";
  board [35][1]= "Med ave";
  board [36][1]= "Med ave";
  board [37][1]= "Med ave";
  board [38][1]= "Med ave";
  board [39][1]= "Med ave";


  cout<<"Hello there!\n";
  cout<<"Welcome to the Hypothetical Generic Board Game!\n";
  cout<<"This game was authored by @RR2000\n";
  cout<<"If you would like to play the game, input 1.\n";
  cout<<"If you would like to read the game's instructions, input 2.\n";
  cin>> menuchoice;

  if (menuchoice == 1){
    //play the game
    cout<<"What is the contender's name?\n";
    cin>>playerid;
    cout<<"Good luck!\n";
    sleep (3);
  
  //TAKE THE FIRST LINE OUT!!!!!^^^
  playerspace=0;
  com1space=0;
  com2space=0;
  winstatp=0;;

  while(winstatp != 1){

    if (playerspace >= 100){
    winstatp ++ ;
    cout<<"You win!";
  }
  else if (com1space >= 100){
    winstatp ++ ;
    cout<<"Com1 wins!";
  }
  else if (com2space >= 100){
    winstatp ++ ;
    cout<<"Com2 wins!";
  }
  
    cout<<"It is now " << playerid <<"\'s turn.\n\a";
    sleep (1);
    cout<<"Rolling...\n";
    srand((unsigned)time(0)); 
    playerroll = (rand()%6)+1;
    sleep (2);
    cout<<playerid << " rolled " << playerroll << endl;
    sleep (2);
    playerspace = playerspace + playerroll;



    cout<< playerid << " is now at " << playerspace << endl;
    cout<< "Com1" << " is now at " << com1space << endl;
    cout<< "Com2" << " is now at " << com2space << endl;
    sleep (3);
    cout<<" \033[2J\033[0;0H \n";










    cout<<"It is now " << "Com1" <<"\'s turn.\n\a";
    sleep (1);
    cout<<"Rolling...\n";
    srand((unsigned)time(0)); 
    com1roll = (rand()%6)+1;
    sleep (2);
    cout<<"Com1" << " rolled " << com1roll << endl <<endl;
    sleep (2);
    com1space = com1space + com1roll;
    cout<< playerid << " is now at " << playerspace << endl;
    cout<< "Com1" << " is now at " << com1space << endl;
    cout<< "Com2" << " is now at " << com2space << endl <<endl;
    sleep (3);
    cout<<" \033[2J\033[0;0H \n";

    cout<<"It is now " << "Com2" <<"\'s turn.\n\a";
    sleep (1);
    cout<<"Rolling...\n";
    srand((unsigned)time(0)); 
    com2roll = (rand()%6)+1;
    sleep (2);
    cout<<"Com2" << " rolled " << com2roll << endl;
    sleep (2);
    com2space = com2space + com2roll;
    cout<< playerid << " is now at " << playerspace << endl;
    cout<< "Com1" << " is now at " << com1space << endl;
    cout<< "Com2" << " is now at " << com2space << endl;
    sleep (3);
    cout<<" \033[2J\033[0;0H \n";
    }



    


  }

  else if (menuchoice==2){
    //instructions
    cout<<"When it is your turn, a hypothetical Dice will be rolled. The dice will then reveal the number of steps that you would have to take. So each spot on the map can either be a Free Space, a Jump-Pad, or a Hole. A free space is vacant, while the other two can affect your movement. The Jump-Pad can send you forward, and the hole can send you backward. The map for all the players are different, so if Player 1 gets a Jump-Pad on space 31, Player 2 could have a Jump-Pad, Hole, or Free Space. There are 250 spaces, and whoever reaches the end first wins.\n";
  }

  else if (menuchoice==1311){
    //DEV MODE
    cout<<"DEV MODE";
    playerspace=0;
    com1space=0;
    com2space=0;
    winstatp=0;
    playerid="Developer";

  while(winstatp != 1){

    if (playerspace >= 100){
    winstatp ++ ;
    cout<<"You win!";
  }
  else if (com1space >= 100){
    winstatp ++ ;
    cout<<"Com1 wins!";
  }
  else if (com2space >= 100){
    winstatp ++ ;
    cout<<"Com2 wins!";
  }
  
    cout<<"It is now " << playerid <<"\'s turn.\n\a";
    cout<<"Rolling...\n";
    srand((unsigned)time(0)); 
    playerroll = (rand()%6)+1;
    sleep (1);
    cout<<playerid << " rolled " << playerroll << endl;
    playerspace = playerspace + playerroll;
    cout<< playerid << " is now at " << playerspace << endl;
    cout<< "Com1" << " is now at " << com1space << endl;
    cout<< "Com2" << " is now at " << com2space << endl;
    sleep (1);


    cout<<"It is now " << "Com1" <<"\'s turn.\n\a";
    cout<<"Rolling...\n";
    srand((unsigned)time(0)); 
    com1roll = (rand()%6)+1;
    sleep (1);
    cout<<"Com1" << " rolled " << com1roll << endl <<endl;
    com1space = com1space + com1roll;
    cout<< playerid << " is now at " << playerspace << endl;
    cout<< "Com1" << " is now at " << com1space << endl;
    cout<< "Com2" << " is now at " << com2space << endl <<endl;
    sleep (1);

    cout<<"It is now " << "Com2" <<"\'s turn.\n\a";
    cout<<"Rolling...\n";
    srand((unsigned)time(0)); 
    com2roll = (rand()%6)+1;
    sleep (1);
    cout<<"Com2" << " rolled " << com2roll << endl;
    com2space = com2space + com2roll;
    cout<< playerid << " is now at " << playerspace << endl;
    cout<< "Com1" << " is now at " << com1space << endl;
    cout<< "Com2" << " is now at " << com2space << endl;
    sleep (1);
    }
  }

  else {
    cout<<"Sorry, please input according to the instructions given.";
  }
}
