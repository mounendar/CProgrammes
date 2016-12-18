#include<stdio.h>
#include<conio.h>
#include <math.h>
#include <string.h>
int GetValue(char* input,char* out)
{
    long long decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
      '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    //char hexadecimal[30];
    int i, j, power=0, digit;
   // hexadecimal=input;
    for(i=strlen(input)-1; i >= 2; i--)
        {
            for(j=0; j<16; j++)
            {
            if(*(input+i) == hexDigits[j])
            {
                decimalNumber += j*pow(16, power);
            }
            }
        power++;
        }

    printf("Decimal Number : %ld", decimalNumber);
    sprintf(out, "%s",decimalNumber);

    return 0;
}
void main()
{
    int i=0;
    char c[100]="0XAB2";
    char a[30]="2748";
    i=GetValue(c,a);
    printf("\nhaii");

    getch();

}
