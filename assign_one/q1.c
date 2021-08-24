#include <stdio.h>
int main()
{
    int in1, in2, in3;
    int large;
    printf(" Enter the number1 = ");
    scanf("%d", &in1);
    printf("\n Enter the number2 = ");
    scanf("%d", &in2);
    printf("\n Enter the number3 = ");
    scanf("%d", &in3);
    if (in1 > in2)
    {
        if (in1 > in3)
        {
            large=in1;
        }
        else
        {
            large=in3;
        }
    }
    else if (in2 > in3)
    {
        large=in2;
    }
    else
    {
        large=in3;
    }
    printf("\n Largest number = %d \n",large);
    return 0;
}
