#include<iostream>
#include<stdlib.h>
#include<ctime>



// constant variables 
const char ROCK = 'r';
const char PAPER= 'p';
const char SCISSORS= 's';

using namespace std;

char ComputerOption()
{

	srand(time(NULL));

	//random number generation
	int num = rand()% 3 +1;
	if (num==1)
		return 'r';
	if (num==2)
		return 'p';
	if (num==3)
		return 's';



}

char UserOption()
{
	char c;
	cout<< "Welcome to ROCK , PAPER  and  SCISSORS game..!!!"<<endl;
	cout<<"choose one of the given following options"<<endl;
	cout<<"___________________________________________"<<endl;
	cout<<"(r) for rock"<<"(p) fo paper"<< "(s) for scissors"<<endl;
	cin>>c;

	while(c!='r'  && c!='p'  && c!='s')
	{
		cout<< "Please enter any one of the given following options only."<<endl;
		cout<<"(r) for rock"<<"(p) fo paper"<< "(s) for scissors"<<endl;
		cin>>c;
	} 
	return c;

}

void show_selected_option( char option)
{
	if(option=='r'){
		cout<<"ROCK"<<endl;
	}
	if(option=='p'){
		cout<<"PAPER"<<endl;
	}
	if(option=='s'){
		cout<<"SCISSORS"<<endl;
	}

}

   void winner(char user_choice , char com_choice)
   {

   	if(user_choice==ROCK && com_choice==SCISSORS){
   		cout<< " Hurray you won the game!! rock crushes scissors"<<endl;
   	}

   
   else if(user_choice==PAPER && com_choice==SCISSORS){
   		cout<< " You lose!! scissors cut paper"<<endl;
   }

   else if(user_choice==ROCK && com_choice==PAPER){
   		cout<< " You lose!! paper wraps rock"<<endl;
   }

   else if(user_choice==PAPER && com_choice==ROCK){
   		cout<< " Hurray you won the game!! paper wraps rock"<<endl;
   }

   else if(user_choice==SCISSORS && com_choice==PAPER){
   		cout<< " Hurray you won the game!! scissors cut paper"<<endl;
   }

   else if(user_choice==SCISSORS && com_choice==ROCK){
   		cout<< " You lose!! rock crushes scissors"<<endl;
   }
   else{
   	      cout<<"It's a tie . Play again to win the game."<<endl;

   }
}

  int main()
  {
  	 char user_choice;

  	 char com_choice;

  	 user_choice = UserOption();
  	 cout<< "Your choice is -> "<<endl;
  	 show_selected_option(user_choice);

      cout<<"Computer choice is -> "<<endl;
      com_choice = ComputerOption();
      show_selected_option(com_choice);

      winner(user_choice, com_choice);

       return 0;
  }


