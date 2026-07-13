#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len % 2 != 0)
    {
        printf("String does not belong to CFG\n");
        return 0;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != '0' || str[len / 2 + i] != '1')
        {
            printf("String does not belong to CFG\n");
            return 0;
        }
    }

    printf("String belongs to CFG\n");

    return 0;
}
