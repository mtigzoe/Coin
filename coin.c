#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//main function 
int main(void) {
    //variables 
    int repeat = 1;
    int heads = 0;
    int tails = 0;
    int flip = 0;
    int guess = 0;
    //The formula 
    srand(time(NULL));
    
    //Ask the user to flip a coin. 
    printf("Would you like to flip a coin?\n");
    
    //If the user enters 1 for yes, 
    //he or she can flip it again.
    while(repeat == 1){
        
        flip = rand() % 2;
        //Enter 0 for head or 1 for tail
        //see if correctly guess for head or tail. 
        printf("Enter for 0 = head, 1 = tail\n");
        scanf("%d", &guess);
        
        if(flip == guess){
            printf("Great! I got it!\n");
            if (guess == 1) {
                tails++;
            } else {
                heads++;
            }
        }
        else{
            printf("No, that's not the correct guess.\n");
            if (guess == 1) {
                tails++;
            } else {
                heads++;
            }
        }

        printf("Would you like to play again?\n 1 for yes, 0 for no\n");
        scanf("%i", &repeat);
    }
    //When the user enters 0 for no, 
    //the result will tell how many
    //tails or heads he or she get. 
    printf("tails = %d\n", tails);
    printf("heads = %d\n", heads); 
    
    
return 0;
}

