#include<stdio.h>
#include<conio.h>
int GetValue(int* num)
{
    int temp=*num,b=0,j=0,a[100],i,k=0,number=0;
    //printf("\n%d\n",temp);
    while(temp>0)
    {
    b=b*10+temp%10;
    a[k]=temp%10;
    //printf("%5d",a[k]);
    k++;
    temp/=10;
    }
   // printf("\n reverse number is  %d and the number of digits are %3d\n",b,k);
    i=0;
    number=a[i];
    i++;
    //printf("before %4d",number);
    while(i<k)
        {
            //printf("\n i =%d,j=%d",i,j);
            for(j=0;j<i;j++)
            {
                if (*(a+i)==*(a+j) )
                {
                    break;
                }
            }
            if(i==j)
            {
                //printf("\n i and j are equal\n");
                number=number*10+a[i];
                //printf("%d",number);
            }
            i++;
        }
printf("\n%d",number);
}
void main()
{
    int i=0,n=1223321;
    i=GetValue(&n);
    //printf("\nhaii");
    getch();
}
