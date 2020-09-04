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
struct node *insertnode(struct node *); 
struct node *deletebeg(struct node *); 
struct node *deleteend(struct node *); 
struct node *deletenode(struct node *); 
struct node *deleteafter(struct node *);
struct node *deletebefore(struct node *); 
void main() 
{ 
int option,sel; 
a:
printf("****MAIN_MENU****");
printf("1.Ins at beg");
printf("2.Ins at end");
printf("3.Ins after node");
printf("4.Ins before node");
printf("5.Ins at node");
printf("6.Del at beg");
printf("7.Del at end");
printf("8.Del after node");
printf("9.Del before node");
printf("10.Del at node");
printf("11.Create");
printf("12.Display");
printf("Enter ur choice:");
scanf("%d",&option);
switch(option)
{
	case 1:start=insertbeg(start); break;
	case 2:start=insertend(start); break;
	case 3:start=insertafter(start); break;
	case 4:start=insertbefore(start); break;
	case 5:start=insertnode(start); break;
	case 6:start=deletebeg(start); break;
	case 7:start=deleteend(start); break;
    case 8:start=deleteafter(start); break;
    case 9:start=deletebefore(start); break;
    case 10:start=deletenode(start); break;
    case 11:start=create(start); break;
    case 12:start=display(start); break;
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
}
