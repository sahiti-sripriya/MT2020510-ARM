#include <stdio.h>
int main()
{
    int inp_array[20];
    int i;
    int even=0;
    printf(" Enter the 20 input numbers: ");
    for(i=0;i<=19;i++)
      scanf("%d", &inp_array[i]);
    for(i=0;i<=19;i++)
    {
        if(inp_array[i]%2==0)
          even=even+1;
        //else if(inp_array[i]==0)
          //even=even+1;
        else
          even=even;
    }
    printf(" No of evens of 20 numbers: %d ",even);
    return 0;
}