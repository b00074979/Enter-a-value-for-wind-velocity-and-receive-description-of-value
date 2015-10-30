/*LAB 2 Q1 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 26th September 2014

Purpose: To enter a value for wind velocity and then achieving a printed description of the value.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int velocity;
    velocity = rand()%100+1;
    printf("%d\n", velocity);


    if(velocity<1){
       printf("Calm\n");
    }


    if(velocity>=1 && velocity<=3){
        printf("Light air\n");
    }


    if(velocity>=4 && velocity<=27){
        printf("Breeze\n");
    }

    if(velocity>=28 && velocity<=47){
        printf("Gale\n");
    }

    if(velocity>=48 && velocity<=63){
        printf("Storm\n");
    }


    if(velocity>=63){
        printf("Hurricane\n");
    }

    return 0;
}
