#include <stdio.h>
int line(char []);
int main()
{
    char para[1000];
    printf("Enter string: ");
    gets(para);
    int res=line(para);
    printf("The number of Consonents in this line is %d",res);
    return 0;
}
int line(char find[])
{
    int count=0;
    for(int i=0;find[i]!='\0';i++)
    {
         if(!(find[i]=='A'||find[i]=='a'||find[i]=='E'||find[i]=='e'||find[i]=='I'||find[i]=='i'||find[i]=='O'||find[i]=='o'||find[i]=='U'||find[i]=='u'))
        {
            count++;
        }
    }
    return count;
}