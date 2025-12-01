#include <stdio.h>

void Reverse(char *str)
{
    int i = 0, j = 0;
    char temp;

    for(i = 0; str[i] != '\0'; i++);

    i--;    

    for(j = 0; j < i; j++, i--)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    printf("Reversed string is : %s\n", arr);

    return 0;
}