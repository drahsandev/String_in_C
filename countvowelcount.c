#include <stdio.h>
int vowelcount(char[]);
int main()
{
    char name[100];
    printf("Enter a string: ");
    gets(name);
    int count=vowelcount(name);
    printf("Number of vowels in the string is: %d",count);
    return 0;
}
int vowelcount(char find[])
{
    int vc=0;
    for(int i=0;find[i]!='\0';i++)
    {
        if(find[i]=='A'||find[i]=='a'||find[i]=='E'||find[i]=='e'||find[i]=='I'||find[i]=='i'||find[i]=='O'||find[i]=='o'||find[i]=='U'||find[i]=='u')
        {
            vc++;
        }
    }
    return vc;

}