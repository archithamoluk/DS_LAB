#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int value;
struct node *top;
void push(int);
void pop();
void display();
void main ()
{
    int choice =0;
    while(choice != 4)
    {
        printf("\n1.Insert\n2.Delete \n3.Display\n");
        printf("\nEnter choice\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            default:
            printf("Invalid..");
        }
        }
        }
void push(int value)
          {
              struct node*newNode;
              newNode=malloc(sizeof(struct node));

              printf("Enter the value");
              scanf("%d",&value);
              newNode->data=value;
              if(top=NULL)
              {
                  newNode->next=NULL;
                  top=newNode;
              }
              else
              {
                  newNode->next=top;
                  top=newNode;

              }

          }
void pop()
         {
             if(top==NULL)
                printf("stack is empty");
             else
             {
                struct node *temp;
                temp=top;
                top=temp->next;
                free(temp);
            }
         }
void display()
{
    if (top==NULL)
    {

        printf("STACK EMPTY");
    }
    else
        {
        struct node *temp;
        temp=top;
        while(temp->next !=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->next;
        }
        printf("%d-->",temp->data);
    }
}

