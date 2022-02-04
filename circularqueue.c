    #include<stdio.h>
    #include<stdlib.h>
    struct node
    {
    	int data;
    	struct node *next;
    };
    struct node *front = NULL;
    struct node *rear = NULL;
    void enqueue(int d)
    {
    	struct node* n;
    	n = (struct node*)malloc(sizeof(struct node));
    	n->data = d;
    	n->next = NULL;
    	if((rear==NULL)&&(front==NULL))
    	{
    		front = rear = n;
    		rear->next = front;
    	}
    	else
    	{
    		rear->next = n;
    		rear = n;
    		n->next = front;
    	}
    }
    void dequeue()
    {
    	struct node* t;
    	t = front;
    	if((front==NULL)&&(rear==NULL))
    		printf("\nQueue is Empty");
    	else if(front == rear)
        {
    		front = rear = NULL;
    		free(t);
    	}
    	else
    	{
    		front = front->next;
    		rear->next = front;
    		free(t);
    	}


    }
    void display()
    {
    	struct node* t;
    	t = front;
    	if((front==NULL)&&(rear==NULL))
    		printf("\nQueue is Empty");
    	else
    	{
    		do
    		{
    			printf("\n%d",t->data);
    			t = t->next;
    		}while(t != front);
    	}
    }
    int main()
    {
    	int opt,n,i,data;

    	do
            {
    		printf("\n 1. INSERTION \n 2. DISPLAY \n 3. DELETION \n 4. EXIT \n ENTER YOUR CHOICE:");
    		scanf("%d",&opt);
    		switch(opt)
    		{
    			case 1:
    				printf("\nEnter the limit:");
    				scanf("%d",&n);
    				printf("\nEnter the elements:\n");
    				i=0;
    				while(i<n)
                    {
    					scanf("%d",&data);
    					enqueue(data);
    					i++;
    				}
    				break;
    			case 2:
    			    printf("elements are:");
    				display();
    				break;
    			case 3:
    			    printf("Deleted successfully.....press 2 to display elements!!!!!");
    				 dequeue();
    				break;
    			case 4:
    				break;
    			default:
    				printf("\nIncorrect Choice");

    		}
    	}while(opt!=4);
    return 0;
    }


