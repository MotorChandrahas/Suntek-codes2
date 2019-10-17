/*find number of words in a sentence*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0, i,flag= 1;
    scanf("%[^\n]*c",s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
        {
            if (flag==0)
            {
                count++;
                flag = 1;
            }
        }
        else
                flag= 0;
    }
    if (flag==0) ++count;
printf("%d", count);
return(0);
}
