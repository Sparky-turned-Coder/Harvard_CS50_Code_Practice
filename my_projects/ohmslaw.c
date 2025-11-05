#include <cs50.h>
#include <stdio.h>

int volts(void);
int ohms(void);
int amps(void);

int main(void)
{
    int voltage = volts();
    int resistance = ohms();
    int current = amps();

    printf("You entered: %iV\n", voltage);
    printf("You entered: %i Ohms\n", resistance);
    printf("You entered: %iA\n", current);
}

int volts(void)
{
    int n;
    do
    {
        n = get_int("Enter the numerical voltage you are working with, if unknown enter '0': ");
    } while (n < 0 || n > 480);
    return n;
}

int ohms(void)
{
    int n;
    do
    {
        n = get_int("Enter the numerical resistance of your circuit, if unknown enter '0': ");
    } while (n < 0 || n > 999);
    return n;
}

int amps(void)
{
    int n;
    do
    {
        n = get_int("Enter the numerical amperage you're working with, if unknown enter '0': ");
    } while (n < 0 || n > 999);
    return n;
}