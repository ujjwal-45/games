#include<stdio.h>

int main()
{
    
    int secretNumber = 37;
    int guess;
    int guesscount = 0;
    int guessLimit = 3;
    int OutOfGuess = 0;
    


     while ((guess != secretNumber) && ( OutOfGuess==0))
     {
         if( guesscount <  guessLimit){
             
            printf("Enter a number: ");
            scanf("%d", &guess);
            guesscount++;
         
         
     }
     else
     {
         OutOfGuess=1;
     }
     }
     if(OutOfGuess == 1)
     {
         printf(" *****out of guessses**** ");
         
     }
     else{
         printf(" -----******You Win!******-----");
     }
     
}