#include<stdio.h>
#include<stdlib.h>    // to genarate random number
#include<time.h>      //for time

int main()
{
    srand(time(NULL));      //seedig random number

    int number=rand() % 100 +1; // to get number beewtween 1 to 100
    printf("WELCOME\n");
    printf("YOU WILL GET 5 TRIES TO GUESS\n\n");

    int guess=0,count=0;
    do
    {
        printf("Enter a guess From 1 to 100:");
        scanf("%d",&guess);

    if (guess == number)
    {
         printf("You got it!\n");
         printf("The number is %d",number);
    }
    else if (guess < number) 
    {
          printf("Guess higher!\n");
    }
    else 
     {
            printf("Guess lower!\n");
    } 

     count++;
     if(count==5)
     {
        printf("Sorry You lose\nThe number was %d\n",number);
     }
    } while (count!=5);
    
    return 0;
}