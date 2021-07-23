#include <stdio.h>
#include <stdlib.h>

int max = 4;
int front = -1;
int rear = -1;
int queue[5];

void enqueue();
void dequeue();
void disp();

int main()
{
    int flag = 0;
    int n;

    while (flag != 1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            disp();
            break;

        case 4:
            flag = 1;
            exit(0);
            break;

        default:
            printf("Enter Valid Option\n");
            break;
        }
    }

    return 0;
}

void enqueue()
{
    if ((rear == max && front == 0) || rear == front - 1)
    {
        printf("Overflow\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else if( rear == max && front!= 0){
        rear = 0;
    }
    else
    {
        rear += 1;
    }
    int s;
    printf("Enter the element\n");
    scanf("%d", &s);
    queue[rear] = s;
    printf("Item Enqueued\n");
}

void dequeue()
{
    if (front == -1)
    {
        printf("Underflow\n");
        return;
    }
    else
    {
        if (front == rear)
        {
            printf("%d removed\n", queue[front]);
            queue[front] = 0;
            front = -1;
            rear = -1;
        }

        else if (front == max)
        {
            printf("%d removed\n", queue[front]);
            queue[front] = 0;
            front = 0;
        }

        else
        {
            printf("%d removed\n", queue[front]);
            queue[front] = 0;
            front += 1;
        }
    }
    printf("\n");
}

void disp()
{
    int flag = front;
    printf("Items\n");
    while (flag != rear + 1)
    {
        printf("%d ", queue[flag]);
        if (flag == max)
        {
            flag = 0;
        }
        else
        {
            flag++;
        }
    }
    printf("\n");
}