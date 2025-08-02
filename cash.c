#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int x = get_int("Change owed: \n");
    while(x<0){
        x = get_int("Change owed: \n");
    }
    int coins = 0;
    while (x > 24)
    {
        coins++;
        x -= 25;
    }
    while (x > 9)
    {
        coins++;
        x -= 10;
    }
    while (x > 4)
    {
        coins++;
        x -= 5;
    }
    coins += x;
    printf("%i\n\n", coins);
}
