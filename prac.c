#include <cs50.h>
#include <stdio.h>

long card_number(void);

int main(void)
{

    // The code below between lines 12 and 59 works. It peels off the rightmost digit from the number and performs the math. Ultimately, zeroing out.
    // Now we need to implement this into more effective code. A loop.
    // Key uses of the modulo operator:
    //     - number % 10: This gives you the last (rightmost) digit of 'number'.
    //     - sum % 10 = 0: This checks if the final 'sum' is a multiple of 10.

    // long cc_num = card_number();

    do
    {
        long cc_num = card_number();
        int digit = cc_num % 10;
        printf("modulo: %i\n", digit);
        long cc_num = cc_num / 10;
        printf("new number: %li\n", cc_num);
    } while (cc_num > 0);
    return (cc_num);
    // int total_sum = sum + sum;

    // Get user input and assign it to a variable
    // long cardNum = card_number();
    // int n = 1;
    // // Divide cardNum by 10 for product without remainder number (cardnum#). Calculate modulo for cardNum# by 10 to get the remainder(last number of cardNum#)
    // while (n > 0)
    //     (n--);
    // {
    //     long mod = cardNum % 10;
    //     long cardNum2 = cardNum / 10;

    //     long mod2 = cardNum2 % 10; // mod2 gives us the 2nd digit from the end, and so on all the way down
    //     long cardNum3 = cardNum2 / 10;

    //     long mod3 = cardNum3 % 10;
    //     long cardNum4 = cardNum3 / 10;

    //     long mod4 = cardNum4 % 10;
    //     long cardNum5 = cardNum4 / 10;

    //     long mod5 = cardNum5 % 10;
    //     long cardNum6 = cardNum5 / 10;

    //     long mod6 = cardNum6 % 10;
    //     long cardNum7 = cardNum6 / 10;

    //     long mod7 = cardNum7 % 10;
    //     long cardNum8 = cardNum7 / 10;

    //     long mod8 = cardNum8 % 10;
    //     long cardNum9 = cardNum8 / 10;

    //     long mod9 = cardNum9 % 10;
    //     long cardNum10 = cardNum9 / 10;

    //     long mod10 = cardNum10 % 10;
    //     long cardNum11 = cardNum10 / 10;

    //     long mod11 = cardNum11 % 10;
    //     long cardNum12 = cardNum11 / 10;

    //     long mod12 = cardNum12 % 10;
    //     long cardNum13 = cardNum12 / 10;

    //     long mod13 = cardNum13 % 10;
    //     long cardNum14 = cardNum13 / 10;

    //     long mod14 = cardNum14 % 10;
    //     long cardNum15 = cardNum14 / 10;

    //     long mod15 = cardNum15 % 10;
    //     long cardNum16 = cardNum15 / 10;

    //     int mod16 = cardNum16 / 10;

    //     long n1 = mod2 * 2;
    //     long n2 = mod4 * 2;
    //     long n3 = mod6 * 2;
    //     long n4 = mod8 * 2;
    //     long n5 = mod10 * 2;
    //     long n6 = mod12 * 2;
    //     long n7 = mod14 * 2;
    //     int n8 = mod16 * 2;
    //     {

    //         if (n1 || n2 || n3 || n4 || n5 || n6 || n7 || n8 > 9)
    //         {
    //             n1 = n1 - 9;
    //             n2 = n2 - 9;
    //             n3 = n3 - 9;
    //             n4 = n4 - 9;
    //             n5 = n5 - 9;
    //             n6 = n6 - 9;
    //             n7 = n7 - 9;
    //             n8 = n8 - 9;
    //         }
    //         else
    //         {
    //             int total_sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + mod + mod3 + mod5 + mod7 + mod9 + mod11 + mod13 + mod15;

    //             if (total_sum % 10 == 0)
    //             {
    //                 printf("This card is valid.");
    //             }
    //         }
    //     }
    // }

    // printf("You entered: %li\n", cardNum);
    // printf("mod:   %li\n", mod);
    // printf("mod2:  %li\n", mod2);
    // printf("mod3:  %li\n", mod3);
    // printf("mod4:  %li\n", mod4);
    // printf("mod5:  %li\n", mod5);
    // printf("mod6:  %li\n", mod6);
    // printf("mod7:  %li\n", mod7);
    // printf("mod8:  %li\n", mod8);
    // printf("mod9:  %li\n", mod9);
    // printf("mod10: %li\n", mod10);
    // printf("mod11: %li\n", mod11);
    // printf("mod12: %li\n", mod12);
    // printf("mod13: %li\n", mod13);
    // printf("mod14: %li\n", mod14);
    // printf("mod15: %li\n", mod15);
    // printf("mod16: %li.\n", mod16);
    // printf("Modulo of card number you entered was: %li\n", mod);
    // printf("With the last digit removed, cardNum2 is: %li\n", cardNum2);
}

long card_number(void)
{
    long n;
    do
    {
        n = get_long("Enter the number on the back of your card: ");
    } while (n < 1000000000000 || n > 5599999999999999);
    return n;
}