#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h> 
struct node { int data; struct node *next; }; 
struct node *start = NULL; 
struct node *create(struct node *); 
struct node *display(struct node *); 
struct node *insertbeg(struct node *); 
struct node *insertend(struct node *); 
struct node *insertbefore(struct node *);
struct node *insertafter(struct node *);
struct node *deletebeg(struct node *); 
struct node *deleteend(struct node *); 
struct node *deletenode(struct node *); 
struct node *deleteafter(struct node *);

void main() 
{ 
int option,sel; 
a:
printf("****MAIN_MENU****\n");
printf("1.Ins at beg\n");
printf("2.Ins at end\n");
printf("3.Ins after node\n");
printf("4.Ins before node\n");
printf("5.Del at beg\n");
printf("6.Del at end\n");
printf("7.Del after node\n");
printf("8.Del at node\n");
printf("9.Create\n");
printf("10.Display\n");
printf("Enter ur choice:\n");
scanf("%d",&option);
switch(option)
{
	case 1:start=insertbeg(start); break;
	case 2:start=insertend(start); break;
	case 3:start=insertafter(start); break;
	case 4:start=insertbefore(start); break;
	case 5:start=deletebeg(start); break;
	case 6:start=deleteend(start); break;
    case 7:start=deleteafter(start); break;
    case 8:start=deletenode(start); break;
    case 9:start=create(start); break;
    case 10:start=display(start); break;
    default: printf("Invalid Input"); break;
}
printf("Enter 1 to con.. or 2 to exit.");
scanf("%d",&sel);
if(sel==1)
 goto a;
else
 printf("Thank You.");
}
struct node *create(struct node *start)
{
	int val;
	x:printf("Enter value(-1 to terminate):");
	scanf("%d",&val);
	while(val!=-1)
	{
	struct node *nn,*ptr;
	nn=(struct node *)malloc(sizeof(struct node));
	nn->data=val;
	if(start==NULL)
	{ 
	nn->next=NULL;
	start=nn;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		   ptr=ptr->next;
		ptr->next=nn;
		nn->next=NULL;
	}
		goto x;
	}

    return start;
}
struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL){
	printf("%d",ptr->data);
	ptr=ptr->next;}
	return start;
}

struct node *insertbeg(struct node *start) 
{ 
struct node *new_node; 
int num; 
printf("\n Enter the data : "); 
scanf("%d", &num); 
new_node = (struct node *)malloc(sizeof(struct node)); 
new_node -> data = num; 
new_node -> next = start; 
start = new_node; 
return start; 
} 

struct node *insertend(struct node *start) 
{ 
struct node *ptr, *new_node; 
int num; 
printf("\n Enter the data : "); 
scanf("%d", &num); 
new_node = (struct node *)malloc(sizeof(struct node)); 
new_node->data=num; 
new_node->next=NULL; 
ptr=start;
while(ptr->next!= NULL) 
ptr=ptr->next; 
ptr->next=new_node; 
return start; 
} 
struct node *insertbefore(struct node *start) 
{ 
struct node *new_node, *ptr, *preptr; 
int num, val; 
printf("\n Enter the data : "); 
scanf("%d", &num); 
printf("\n Enter the value before which the data has to be inserted : "); 
scanf("%d", &val); 
new_node = (struct node *)malloc(sizeof(struct node)); 
new_node->data = num; 
ptr=start; 
while(ptr->data!= val) 
{
preptr=ptr;  
ptr=ptr -> next; 
} 
preptr->next=new_node; 
new_node->next=ptr; 
return start; 
} 
struct node *insertafter(struct node *start) 
{ 
struct node *new_node, *ptr, *preptr; 
int num, val; 
printf("\n Enter the data :"); 
scanf("%d", &num); 
printf("\n Enter the value after which the data has to be inserted :"); 
scanf("d", &val); 
new_node=(struct node *)malloc(sizeof(struct node)); 
new_node->data=num; 
ptr=start; 
preptr=ptr; 
while(preptr->data != val) 
{  
preptr = ptr;  
ptr = ptr -> next; 
} 
preptr -> next=new_node; 
new_node -> next = ptr; 
return start; 
} 
struct node *deletebeg(struct node *start) 
{ 
struct node *ptr; 
ptr = start; 
start = start -> next; 
free(ptr); 
return start; 
} 
struct node *deleteend(struct node *start) 
{ 
struct node *ptr, *preptr; 
ptr = start; 
while(ptr -> next != NULL) 
{  
preptr = ptr;  
ptr = ptr -> next; 
} 
preptr -> next = NULL; 
free(ptr); 
return start; 
} 
struct node *deletenode(struct node *start) 
{ 
struct node *ptr, *preptr; 
int val; 
printf("\n Enter the value of the node which has to be deleted : "); 
scanf("%d", &val); 
ptr = start; 
if(ptr -> data == val) 
{  
start = deletebeg(start);  
return start; 
} 
else 
{
 while(ptr -> data != val)  
 {   
 preptr = ptr;   
 ptr = ptr -> next;  
 }  
 preptr -> next = ptr -> next;  
 free(ptr);  
 return start; 
 } 
 } 
 struct node *deleteafter(struct node *start) 
 { 
 struct node *ptr, *preptr; 
 int val; 
 printf("\n Enter the value after which the node has to deleted : "); 
 scanf("%d", &val); 
 ptr = start; 
 preptr = ptr; 
 while(preptr -> data != val) 
 {  
 preptr = ptr;  
 ptr = ptr -> next; 
 } 
 preptr -> next=ptr -> next; 
 free(ptr); 
 return start; 
 }
