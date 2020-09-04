#include <stdio.h>  
#include <malloc.h> 
struct node { int data; struct node *next; }*front=NULL,*rear=NULL,*tmp; 
void insert(); 
void deleteele(); 
void display(); 
int peek();
int main() 
{ int val,option;
//create_queue(q); 
do 
{  
printf("\n *****MAIN MENU*****");  
printf("\n 1. INSERT");  
printf("\n 2. DELETE");
printf("\n 3. PEEK");  
printf("\n 4. DISPLAY"); 
printf("\n Enter your option : ");  scanf("%d", &option);  
switch(option)  
{   
case 1:insert();break;   
case 2:deleteele();    break;   
case 3:val=peek(); 
       if (val!=-1)
       {printf("Element 1st:%d",val);} break;   
case 4:display();    break;  
} 
}while(option < 5); 
return 0; 
}
void insert()
{
struct node *ptr;
int val;printf("\n Enter the number to insert in the queue:");    scanf("%d", &val); 
if(rear==NULL)	
{
	rear=(struct node*)malloc(sizeof(struct node));
	rear->next=NULL;
	rear->data=val;
	front=rear;
}
else
{
	ptr=(struct node*)malloc(sizeof(struct node));
	rear->next=ptr;
	ptr->data=val;
	ptr->next=NULL;
	rear=ptr;
}
}
void display()
{
	tmp=front;
	if((tmp==NULL)&&(rear==NULL))
	   {
	   	printf("Queue is Empty");
	   	return;
	   }
	while(tmp!=rear)
	{
		printf("%d",tmp->data);
		tmp=tmp->next;
	}
	if(tmp==rear)
	  printf("%d",tmp->data);
 } 
 void deleteele()
 {
	tmp=front;
	if(tmp==NULL)
	 {
	 	printf("Underflow");
		 }	
	else
	{
	if(tmp->next!=NULL)
	  {
	  	tmp=tmp->next;
	  	printf("Deleted value:%d",front->data);
	  	free(front);
	  	front=tmp;
	  }
	else
	  {
	  	printf("Deleted value:%d",front->data);
	  	free(front);
	  	front=rear=NULL;
	  }	
	}
 }
 int peek()
 {
 	if((front==NULL)&&(rear==NULL))
       return -1;
	else
	   return front->data; 
 }
