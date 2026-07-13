#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    if (strstr(str, "101") != NULL)
        printf("String belongs to CFG\n");
    else
        printf("String does not belong to CFG\n");

    return 0;
}
