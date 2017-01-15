#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void) 
{
    float change;
    do {
        printf("O hai! How much change is owed?\n");
        change = get_float(); 
    } while (change < 0);
    
    int amount = round(change * 100);
    int quarters = amount / 25;
    int dimes = (amount - quarters * 25) / 10;
    int nickels = (amount - (quarters * 25 + dimes * 10)) / 5;
    int pennies = (amount- (quarters * 25 + dimes * 10 + nickels * 5)) / 1;
    printf("%d\n", quarters + dimes + nickels + pennies);
}