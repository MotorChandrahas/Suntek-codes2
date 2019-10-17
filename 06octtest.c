/*finding a unique character*/
#include<stdio.h>
#include<string.h>
#include<limits.h>
#define noofchars 256
int uni(char* str)
{
    int i,res;
    int arr[noofchars];
    for(i=0;i<noofchars;i++)
        arr[i]=-1;
        for(i=0;str[i];i++)
        {

            if(arr[str[i]]==-1)
                arr[str[i]]=i;
            else
                arr[str[i]]=-2;
            }
            res=INT_MAX;
            for(i=0;i<noofchars;i++)
                if(arr[i]>=0)
                res= minimum(res,arr[i]);
            return res;


}
int minimum(int res,int n)
{
    if(res<n)
        return res;
    else
        return n;
}


int main()
{
char str[100];
int index;9
scanf("%[^\n]%*c",str);
index=uni(str);

if (index==INT_MAX)
        printf("No Unique Character");
else
    printf("%c",str[index]);
return 0;
}
