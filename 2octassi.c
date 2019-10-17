/*find a character which is repeated most in a string*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char s[100],str[100],count;
    int i,len,max,len1,j,k,a[20];
    scanf("%[^\n]*c",str);
    len=strlen(str);
    len1=strlen(s);
    for(i=0;i<len1;i++)
    {
        if(str[i]==' ')
        {
           for(k = i; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
        }
    }
    strcpy(s,str);
   for(i = 0; i <= strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}j--;
            }
        }
	}
	 for(i=0;i<strlen(str);i++)
     {count=0;
         for(j=0;j<strlen(s);j++)
         {
             if(str[i]==s[j])
                count++;
             else continue;
         }
         a[i]=count;
     }
     max=a[0];
     for(i=0;i<strlen(str);i++)
     {
         if(a[i]>max)
            max=i;
     }
     printf("\n%c",str[max]);
}
