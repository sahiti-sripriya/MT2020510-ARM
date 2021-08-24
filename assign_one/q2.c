#include <stdio.h>
int main()
{
    int inp_array[15];
    int i;
    int large;
    printf(" Enter the 15 input numbers: ");
    for(i=0;i<=14;i++)
      scanf("%d", &inp_array[i]);
    large=inp_array[0];
    for(i=1;i<=14;i++)
    {
        if(inp_array[i]>large)
          large=inp_array[i];
        else
          large=large;
    }
    printf(" Largest of 15 numbers: %d ",large);
    return 0;
}