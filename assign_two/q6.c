#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define MAX_SIZE 3

void add_to_queue(int i);
void remove_from_queue(void);
void disp(void);

int choice, i;
int *front, *rear,*g ,*h, arr_stack[MAX_SIZE];
int exit_p = 1;

int main() {

    int value;

    front = arr_stack-1; /* tos points to the top of stack */
    rear = arr_stack-1; /* initialize p1 */

    do {
        printf("\n1.Insert \t2.Delete \t3.Display \tOthers to exit \n Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter queue value: ");
                scanf("%d", &value);
                add_to_queue(value);
                break;
            case 2:
                remove_from_queue();
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

void add_to_queue(int i) {
    if ((front==arr_stack && rear==arr_stack+MAX_SIZE-1) || front== rear+1)
        printf("\nStatus : queue Overflow.\n");
        
    else {
        if(front==arr_stack-1)
        {
           front=arr_stack;
           rear=arr_stack;
        }
        else
        {
         if(rear==arr_stack+MAX_SIZE-1)
         rear=arr_stack;
         else
         rear=rear+1;
        }
        *rear = i;
        printf("\nQueue Value : %d ", *(rear));
    }
}

void remove_from_queue(void) {
    if (front==arr_stack-1) {
        printf("\nStatus : Stack Underflow.\n");
        //return 0;
    } else {
        printf("\nDeleted Value : %d ", *(front));
        if(front==rear)
        {
            front=arr_stack-1;
            rear=arr_stack-1;
        }
        else
        {
           if(front==arr_stack+MAX_SIZE-1)
            front=arr_stack;
           else
           front=front+1;
        }  
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
    if (front == arr_stack-1) {
        printf("\nStatus : Queue Empty.\n");
        //return 0;
    }
    else { 
        if(rear>=front)
        {
        for(h=front;h<=rear;h++)
          printf("%d ", *h);
        }
        else
        {
            for(h=front;h<=arr_stack+MAX_SIZE-1;h++)
              printf("%d ", *h);
              
            for(h=arr_stack;h<=rear;h++)
              printf("%d ", *h);
        }
    }
    }




