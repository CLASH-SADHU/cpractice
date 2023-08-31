#include <stdio.h>

int ft_strlen(char *str) {

    int size;

    size = 0;

    while (*(str + size) != 0)
    {
        size++;
    }
    return (size);
}

int main(void) {
    char    *str;

    str = "hello World finland";
    printf("the length of the string is %d", ft_strlen(str));
}