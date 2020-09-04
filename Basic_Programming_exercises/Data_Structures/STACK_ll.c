#include <stdio.h> 
#include <stdlib.h>
#include <malloc.h> 
struct stack { int data; struct stack *next; }; 
struct stack *top = NULL; 
struct stack *push(struct stack *); 
struct stack *display(struct stack *); 
struct stack *pop(struct stack *); 
int peek(struct stack *);
int main() 
{ int val, option;
do 
{  
printf("\n *****MAIN MENU*****");  
printf("\n 1. PUSH");  
printf("\n 2. POP");  
printf("\n 3. PEEK");  
printf("\n 4. DISPLAY");    
printf("\n Enter your option: ");  
scanf("%d", &option);  
switch(option)  
{  
case 1:   top = push(top);   break;  
case 2:   top = pop(top);   break;  
case 3:   val = peek(top);   
          if (val != -1)   printf("\n The value at the top of stack is: %d", val);   
		  else   printf("\n STACK IS EMPTY");   break; 
case 4:   top = display(top);   break;  } 
}while(option < 5); return 0; } 
struct stack *push(struct stack *top) 
{ struct stack *nn; int val;
label: printf("\n Enter the number to be pushed on stack(-1 to Terminate):");   
scanf("%d", &val);
while(val!=-1) {
nn = (struct stack*)malloc(sizeof(struct stack)); 
nn -> data = val; 
if(top == NULL) 
{  nn -> next = NULL;  top = nn; } 
else 
{  nn -> next = top;  top = nn; } 
goto label;}
return top; } 
struct stack *display(struct stack *top) 
{ struct stack *ptr; 
  ptr = top; 
if(top == NULL) 
 printf("\n STACK IS EMPTY"); 
else {
while(ptr != NULL)  
{   
printf("\n %d", ptr -> data);   
 ptr = ptr -> next;  } } 
return top; } 
struct stack *pop(struct stack *top) 
{ struct stack *ptr; ptr = top; 
if(top == NULL) printf("\n STACK UNDERFLOW"); 
else 
{  top = top -> next;  
printf("\n The value being deleted is: %d", ptr -> data);  
free(ptr); 
} 
return top; } 
int peek(struct stack *top) 
{ 
if(top==NULL) return -1; 
else 
return top ->data; } 	
	
	
	
	
	
	
