#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len >= 2 && str[0] == '0' && str[len - 1] == '1')
        printf("String belongs to CFG\n");
    else
        printf("String does not belong to CFG\n");

    return 0;
}
