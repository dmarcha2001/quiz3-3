#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int max_number = 10;
int main(){

    int user_input;
    srand(time(0));
    printf("welcome to the guessing game\n");
    printf("Press 1 to start game\nPress 2 to change Max Number\nPress 3 to quit game\n");
    printf("max number is %d\n", max_number);
    scanf("%d",&user_input);
    // check user input for option selected from main menu
    // option 1 play game
    if (user_input == 1)
    {
        int random_number;
        char user_guess[]="";
        int game_status = 1;
        //must generate a random number from 1- max number
        random_number = (rand() % max_number) +1;
        // ask user to guess number
        // if correct end game and tell user they guessed number
        // if not, tell them to guess again
        // if user enter q go back to main menu
        printf("lets start the game\n");
        printf("In this game you must guess a number from 1-10\n");
        printf("enter you first guess\n");
        //must delete this print function, because this is only for testing purpose only
        printf("%d\n",random_number);
        while (game_status == 1)
        {
            scanf("%s",&user_guess);
            if (strcmp(user_guess,"q")==0)
            {
                main();
                
            }
            else {
                int num = atoi(user_guess);
                if (num == random_number)
                    {
                    printf("you guessed correct\n");
                    game_status = 0;
                    main();
                    }
                else{
                    printf ("you guessed incorrectly, try again\n");
                    if (num < random_number )
                    {
                        printf("the random number is higher than your last guess\n");
                    }
                    else if (num > random_number){
                        printf("the random number is lower than your last guess\n");
                    }
                }
            }
        }
        
        
    }
    
    // option 2 change max number
    // this will change a global variable known as max number, it will be set as 10 by default, and program must be able to save user input for the max number
    else if (user_input == 2){
        printf("what would you like the max number to be: \n");
        scanf("%d",&max_number);
        main();
    }

    // option 3 quits the game
    // will thank the user for playing and end program
    else if (user_input = 3)
    {
        printf("thanks for playing the game, come again!");
    }
    


    return 0;
}