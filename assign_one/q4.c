#include <stdio.h>
int main()
{
    int inp_array[20];
    int i,j;
    int temp;
    printf(" Enter the 20 input numbers: ");
    for(i=0;i<=19;i++)
      scanf("%d", &inp_array[i]);
    for(i=0;i<=19;i++)
    {
        for(j=i;j<=19;j++)
        {
            if(inp_array[j]<inp_array[i])
            {
                temp=inp_array[i];
                inp_array[i]=inp_array[j];
                inp_array[j]=temp;
            }
        }
    }
    printf("array in Ascending order\n");
    for(i=0;i<=19;i++)
      printf("%d  ", inp_array[i]);
    return 0;
}