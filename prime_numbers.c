#include <stdio.h>

int is_prime(int num)
{
	
    for (int i = 2; i < num; i++)
    {
        if ( num % i == 0)
        {
            return (0);
        }
    }
    return (1);

}

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
