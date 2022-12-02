#include<stdio.h>
#include<stdlib.h>    // to genarate random number
#include<time.h>      //for time
#include<windows.h>
#include <conio.h>

int number_guess_game_score;
void number_guess_game();

void discount();
int main()
{
    while(1)
    {
        printf("\n\n\t\t\t\t\tPlay At Least 5 times To Get Discount\n\n");
        printf("\n\n");
        printf("\t\t                        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $    Select any of them -          $\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $    1.  PLAY GAME                 $\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $    2.  EXIT                      $\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $                                  $\n");
        printf("\t\t                        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        int a;
        scanf("%d",&a);
        system("cls");

        if(a==1)
        {
            number_guess_game();
        }
        else if(a==2)
        {
            return 0;

        }
        else
        {
        printf("\n -----------------------You Entered Wrong Number------------------------\n  ------------------------Enter Correct Number------------------------\n");
        }
    }
    return 0;
}
void number_guess_game()
{
    number_guess_game_score=0;
    srand(time(NULL));      //seedig random number

    int number=rand() % 100 +1; // to get number beewtween 1 to 100

    printf("YOU WILL GET 5 TRIES TO GUESS\n\n");

    int guess=0,count=0;
    do
    {
        printf("Enter a guess From 1 to 100:");
        scanf("%d",&guess);

        if (guess == number)
        {    system("cls");
            printf("You got it!\n");
            printf("The number is %d\n",number);
            number_guess_game_score++;
            printf("Your score is :%d\n",number_guess_game_score);
            Sleep(1500);
            getch();
            main();
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
            system("cls");
            printf("Sorry You lose\nThe number was %d\n",number);
            printf("Your Score is :%d",number_guess_game_score);
            Sleep(1500);
            getch();
        }
    } while (count!=5);
    system("cls");
}
