#include<stdio.h>
#include<conio.h>
void main()
{
char s[20]="123abc";
int i,sum=0,j,number,k=0,count=0;
//printf("Enter the string\n");
//gets(s);
printf("the entered string is %s \n",s);
        for(i=0;s[i]!='\0';)
        {
            if(s[i]>47 && s[i]<58)
                {
                    count++;
                    j=i+1;
                    while (s[j]>47 && s[j]<58 &&s[j]!='\0')
                        {
                        j++;
                        }
                          if (j!=i+1)
                            {
                              number=0;
                                for(k=i;k<j;k++)
                                    {
                                    number=number*10+s[k]-48;
                                    }
                            }
                            else
                            number = s[i]-48;
                                sum=sum+number;
                                i=j;
                }
                else
                    i++;


        }
    printf("the sum of numbers in string is %d\n",sum);
}
