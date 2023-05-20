#include <stdio.h>

int main()
{
    char L;

    scanf("%c", &L);
    int value = L - 'A' + 1;
    printf("%d\n", value);

    return 0;
}
