#include <cs50.h>
#include <stdio.h>

// less comfortable

int main(void) 
{
    int n;
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }
       for (int k = n - 2 ; k < i + n; k++) {
            printf("#");
        }
       printf("\n"); 
    }
}

