#include<stdio.h>
#include<conio.h>
int GetValue(char* proj)
{
    printf("Calling funcion\n");
    int i=0,j=0,count=0;
    while(*(proj+i)!='\0')
    {
        printf(" %c",*(proj+i));
        i++;
    }
    i=0;
    if(*(proj+i)=='\0')
    {
        count=0;
    }
    else
    {
        if(*(proj+i)>=0 && *(proj+i)<=127)
        {
            count++;
            //printf("first count %d",count);
            i++;
        }
    }

    while(*(proj+i)!='\0')
    {
        for(j=0;j<i;j++)
        {
            //printf("\n %d %3d",i,j);
            if (*(proj+i)==*(proj+j) && *(proj+i)>=0 && *(proj+i)<=127)
            {
                //printf("\n i= %5d j = %12d",*(proj+i),*(proj+j));
                //printf("\ncount value in equal is %d",count);
                break;
            }
        }
        if(i==j && *(proj+i)>=0 && *(proj+i)<=127)
        {
            count++;
           // printf("\ncount value not equal is %d",count);
        }

    i++;
    }
    printf("\nnew count is  %d ",count);

}
void main()
{
    int i=0;
    char c[100]="abc1234567890defghijklmnopqrstuvwxyz";
    i=GetValue(c);
    printf("\nhaii");

    getch();
}
