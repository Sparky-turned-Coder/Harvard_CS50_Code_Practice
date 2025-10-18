#include <stdio.h>
#include <cs50.h>
#include <string.h>

long card_number(void);

int main(void)
{

    long card = card_number();
    char digits_str[16];

    printf("This is a proper card number length. You entered: %li\n", card);
    scanf("%s", digits_str);

    long length = strlen(digits_str);

    printf("The number of digits entered was: %ld\n", length);

    // Things to keep in mind:
    //     - American Express (AMEX) - all AMEX cards start with a 34 or 37.  Uses '15 digit' numbers.
    //     - MasterCard - mastercard numbers start with 51, 52, 53, 54, or 55. Uses '16 digit' numbers.
    //     - Visa  - all visa cards start with a 4. Uses 13- and 16-digit numbers.

    //     - digits in any credit card number can be between 0 and 9. Not just binary.

    // TODO
    //     - Prompt for input
    //     - Calculate checksum
    //     - Check for card length and starting digits.
}

long card_number(void)
{
    long n;
    do
    {
        n = get_long("Enter your credit card number: ");
    } while (n < 1000000000000 || n > 9999999999999999);
    return n;
}

// Using Luhn's Algorithm

// - Single out every other digit, starting with the second-to-last digit:

// (4)0(0)3(6)0(0)0(0)0(0)0(0)0(1)4

// - Multiply each digit in paranthesis by 2:

// 1*2  0*2  0*2  0*2  0*2  6*2  0*2  4*2

// That gives us:

// 2  0  0  0  0  12  0  8

// - Now let's 'add' those product's digits(not the products themselves) together: (add single digits. example: a 2-digit number such as 13 would be 1 + 3. Add both digits.)

// 2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 =  13

// - Add that sum(13) to the sum of the digits that 'weren't' multiplied by 2 (starting from the end):

// 13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20

// Yup, the last digit in that sum (20) is a 0, so this card is legit!