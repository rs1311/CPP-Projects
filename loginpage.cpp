//the code does not seem to work. when i get time, i shall rebuild it

#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
#include <sys/time.h>
#include <thread>
using namespace std;
bool logging_in(){
  string u, p, user, pass, secresp, secgiven, newpass, newpass2;
  int k;
  cout<<"USERID : ";
  cin>>user;
  cout<<"PASS : ";
  cin>>pass;
  ifstream read ("data\\"+user+".txt");
  getline(read, u);
  getline(read, p);
  getline(read, secgiven);
  if (user==u){
    if(pass==p){
      return true;
    }
    else{
      cout<<"INCORRECT \nANSWER THIS SECURITY QUESTION : \n";
      cout<<"WHAT IS YOUR FIRST PET'S NAME? ";
      cin>>secresp;
      if(secresp==secgiven){
        cout<<"WOULD YOU LIKE TO RESET YOUR PASSWORD? ";
        cout<<endl<<"ENTER 1 TO RESET";
        cin>>k;
        if(k==1){
          cout<<"RESETTING SEQUENCE INITIATED";
          cout<<endl<<"NEW PASSWORD : ";
          cin>>newpass;
          cout<<"REPEAT PASSWORD : ";
          cin>>newpass2;
          if(newpass!=newpass2){ 
            cout<<"PASSWORDS DO NOT MATCH \n";
            logging_in();
          }
          else if(newpass==pass){
            cout<<"YOU CANNOT USE YOUR OLD PASSWORD\n";
            logging_in();
          }
          else{
            fstream file;
            file.open("data\\"+user+".txt");
            file<<user<<endl<<pass<<endl<<secgiven;
            file.close();
            cout<<"PASSWORD RESET SUCCESSFUL\n";
          }
        }
  
        return true;
      }
      return false;
    }
    return false;
  }
  return false;
}

int greet(){
  int choice;
  cout<<"ADMINISTRATION LOGIN\n"<<"TYPE 1 TO LOG IN"<<endl<<"TYPE 2 TO REGISTER"<<endl;
  cin>>choice;
  if (choice==1){
    bool status = logging_in();
    if(!status){
      cout<<" \033[2J\033[0;0H \n";
      cout<<"INVALID LOGIN\n"; 
      greet();
      return 0;
    }
    else{
      cout<<"LOGIN SUCCESSFUL\n";
      return 1;
    }
  }
  else if (choice==2){
  string pass;
  string user;
  string security;
  string incase;
  cout<<"ENTER A USERNAME : "; 
  cin>>user;
  cout<<"ENTER A PASSCODE : "; 
  cin>>pass;
  cout<<"WHAT IS THE NAME OF YOUR FIRST PET? "; 
  cin>>security;
  cout<<endl<<endl<<endl<<endl<<endl;
  ofstream file;
  ifstream read ("data\\"+user+".txt");
  getline(read, incase);
  if (incase==user){
    cout<<"CHOOSE ANOTHER NAME\n";
    greet();
  }
  else{
    file.open("data\\"+user+".txt");
    file<<user<<endl<<pass<<endl<<security;
    file.close();
    greet();
  }
  }
  else{
    cout<<" \033[2J\033[0;0H \n";
    cout<<"INVALID OPTION\n";
    
    greet();
  }
  return 0;
}

bool tasks(){
  bool tasks_completed;
  ofstream file;
  string storagename;
  string msg;
  cout<<"What is your folder name?"<<endl;
  cin>>storagename;
  cout<<"What is your message content?"<<endl;
  cin>>msg;
  cout<<endl<<"Message created"<<endl;
  if(storagename==" "){
    storagename="Untitled";
  }
  file.open("msgs\\"+storagename+".txt");
  file<<storagename<<endl<<msg<<endl;
  file.close();
  return 0; 
}

int main(){
  ofstream file;
  string user;
  string pass;
  string security;
  greet();
  tasks();
}
