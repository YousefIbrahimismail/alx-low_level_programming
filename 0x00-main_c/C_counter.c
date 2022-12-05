/*
 * Program to calculate the number of cards in the shoe.
 * This code is released under the Vegas Public License.
 * (c)2014, The College Blackjack Team.
 */
#include <stdio.h>
int main ()
{
    int decks;
    puts("Enter a number of decks");
    scanf("%i",&decks);
    if (decks < 1){
        puts("That is not a valid number of decks");
        return 1;
    }
            printf("There are %1 cards\n", (decks * 52));
        return 0;
}
