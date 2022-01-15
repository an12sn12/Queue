#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node*next; 
};
struct Node*front=0;
struct Node*rear=0;
void Enqueue(int x)
{
struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
if (front==0&&rear==0)
{
    newnode->data=x;
    rear=front=newnode;
    newnode->next=0;
}
else
{
    newnode->data=x;
    newnode->next=0;
    rear->next=newnode;
    rear=newnode;
}
}
void Dequeue()
{
    if (front==0&&rear==0)
    {
        printf("empty");
    }
    else
    {
        struct Node*temp=front;
        front=front->next;
        free(temp);
    }
}
void peek()
{
     if (front==0&&rear==0)
    {
        printf("empty");
    }
    else
    {
        printf("%d",front->data);
    }
}
void Display()
{
    struct Node*temp=front;
    while (temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
 Enqueue(4);
  Enqueue(3);
   Enqueue(7);
    Enqueue(4);
     Enqueue(5);
      Display();
      printf("\n");
     Dequeue();
     Dequeue();
     Dequeue();
 Display();
   printf("\n");
 peek();
 return 0;
}