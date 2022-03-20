#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a-b==1 || a-b==-1 || a-b==9 || a-b==-9)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}