#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 3

void push(int i);
void pop(void);
void disp(void);

int choice, i;
int *top, *sp,*g ,*h, arr_stack[MAX_SIZE];
int exit_p = 1;

int main() {

    int value;

    top = arr_stack; /* tos points to the top of stack */
    sp = arr_stack+MAX_SIZE-1; /* initialize p1 */
    g = arr_stack+MAX_SIZE-1; /* initialize p1 */

    do {
        printf("\nStack Pointer : Main Menu");

        printf("\n1.Push \t2.Pop \t3.Display \tOthers to exit \n Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter stack value: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                disp();
                break;
            default:
                exit_p = 0;
                break;
        }
    } while (exit_p);

    return 0;
}

void push(int i) {
    if (sp == (top-1)) {
        printf("\nStatus : Stack Overflow.\n");
    } else {
        *sp = i;
        printf("\nPush Value : %d ", *(sp));
        sp--;
    }
}

void pop(void) {
    if (sp == top+MAX_SIZE-1) {
        printf("\nStatus : Stack Underflow.\n");
        //return 0;
    } else {
        sp=sp+1;
        printf("\nPop Value : %d ", *(sp));
    }
}

/*void disp(void) {
   if (p1 == arr_stack) {
        printf("\nStatus : Stack Underflow.\n");
        //return 0;
    }
   else { printf("\n Stack values ");
        while ( g!= p1) {
            printf("%d ", *(g));
            g++;
   }
   }
}*/

void disp(void) {
    if (sp == arr_stack+MAX_SIZE-1) {
        printf("\nStatus : Stack Underflow.\n");
        //return 0;
    }
    else { 
        for(h=g;h>sp;h--)
        {
          printf("%p  ", h);
          printf("%d\n ", *h);
        }
        
    }
    }

