#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


int main()
{
    printf("Welcome to the FizzBuzz game! The rules are blah-blah-blah... \n");
    printf("Until which number are we playing?");
    printf("\n");

    int end;
    scanf("%d", &end);
    printf("\n");

    int counter = 1;
    char input[] = {0};
    int intInput;
    while(counter < end + 1){
        if(counter % 3 == 0){
            printf("FIZZ");
        }
        else if(counter % 5 == 0){
            printf("BUZZ");
        }
        else printf("%d", counter);

        printf("\n Your turn: \n");

        scanf("%s", input);
        //printf("%s", input);
        //printf("%d", );
        //intInput = atoi(input);

        if(strcmp(input, "FIZZ") == 0 && (counter + 1) % 3 == 0){
            counter = counter + 2;
            printf("FIZZ!\n");
        }
        else if(strcmp(input, "BUZZ") == 0 && (counter + 1) % 5 == 0){
            counter = counter + 2;
            printf("BUZZ!\n");
        }
        else if(counter + 1 == atoi(input)){
            counter = counter + 2;
            //printf("Yes, intInput!\n");
        }
        else{
            printf("Counter now is: ");
            printf("%d", counter);
            printf(" GAME OVER, LOSER!\n");
            counter = end + 1;
        }
    }

    return 0;
}
