#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void Enqueue(int x)
{
if ((rear+1)%N==front)
{
  printf("overflow\n");  
}
else if (rear==-1&&front==-1)
{
    rear=front=0;
     queue[rear]=x;
}
else
{
    rear=(rear+1)%N;
     queue[rear]=x;
}
}
void Dequeue(){
   if (front==-1&&rear==-1)
    {
        printf("underflow");
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
       // printf("%d",queue[front]);
        front=(front+1)%N;
    }
}
void peek()
{
    if (front==-1&&rear==-1)
    {
        printf("empty");
    }
    else
    {
        printf("%d",queue[front]);
    } 
}
void Display()
{
    int i=front;
    if (front==-1&&rear==-1)
    {
        printf("empty");
    }
    else
    {
        while (i!=rear)
        {
            printf("%d\n", queue[i]);  
            i=(i+1)%N;
        }
    }
}
int main()
{
Enqueue(4);
Enqueue(5);
Enqueue(6);
Enqueue(7);
Enqueue(7);
Enqueue(7);
 Display();
printf("\n");
 Dequeue();
 Dequeue();
 Display();
printf("\n");
 peek();
 return 0;
}