#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    long long number;
    do {
        printf("Number: ");
        number = get_long_long();
    } while (number <= 0);
    int num = 0;
    int numx2 = 0;
    int sum = 0;
    for (long long x = 10; x < number; x *= 100) {
        numx2 = (number/x) % 10 * 2;
        if (numx2 < 10) {
            sum += numx2;
        } else {
            sum += (numx2 % 10) + (numx2/10 % 10);
        }
    }
    for (long long x = 1; x < number; x *= 100) {
        num = (number/x) % 10;
        sum += num;
    }
    if (sum % 10 != 0) {
        printf("INVALID\n");
    } else {
        if ((number > 340000000000000 && number < 350000000000000) || (number > 370000000000000 && number < 380000000000000)) {
            printf("AMEX\n");
        } else if (number > 5100000000000000 && number < 5600000000000000) {
            printf("MASTERCARD\n");
        } else if ((number > 4000000000000 && number < 5000000000000) || (number > 4000000000000000 && number < 5000000000000000)) {
            printf("VISA\n");
        }
    }
    
}  