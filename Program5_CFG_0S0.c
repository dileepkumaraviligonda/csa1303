#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int left = 0, right, len, valid = 1;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);
    right = len - 1;

    while (left < right && str[left] == '0' && str[right] == '0')
    {
        left++;
        right--;
    }

    while (left <= right)
    {
        if (str[left] != '1')
        {
            valid = 0;
            break;
        }
        left++;
    }

    if (valid)
        printf("String belongs to CFG\n");
    else
        printf("String does not belong to CFG\n");

    return 0;
}
