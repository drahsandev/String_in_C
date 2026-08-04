#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; i!='\0';i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    printf("%d ", str[0]);
    for(int i=0; i!='\0';i++)
    {
        printf("%d ", str[i]);
    }
    int n=10;
    printf("%c", n);
    return 0;
}