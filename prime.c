#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n=5,count=0;
    for(j=600;j<=700;j++)
    {
        n=j;
    for(i=2;i*i<=n;i++)

    {

        if(n%i==0)
            break;
    }
    if(i*i>n)
    {
        count++;
        printf("%5d",n);
    }
}
printf("\n%d",count);
}
