#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float dollar;      //declaration of input
    do
    {
        dollar = get_float("please enter your change:");    // input is a float
    }
    while (dollar <= 0);             //if input is less than 1 repeat line 11

    int cents = round(dollar * 100);   //convert input to cents
    int coin = 0;                       //make counter the coin

    while (cents >= 25)        //similar to modulus 25
    {
        cents -= 25;            // if line 18 is true minus 25
        coin++;                 // repeat again till boolean is false
    }

    while (cents >= 10)
    {
        cents -= 10;
        coin++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coin++;
    }

    while (cents >= 1)
    {
        cents -= 1;
        coin++;
    }

    printf("you need %i\n", coin);
}

