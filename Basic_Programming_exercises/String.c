#include<stdio.h>
#include<string.h>
void stcpy(char *str1, char *str2);
void stcpy(char *str1, char *str2)
{
int i, len = 0;
while(*(str1+len)!='\0')
len++;
for(i=0;i<len;i++)
*(str2+i) = *(str1+i);
*(str2+i) ='\0';
}
int main()
{
int ch,i,j,flag=0;
char str1[100],str2[100],str3[200],*ptr1,*ptr2;
while(1)
{
printf("Enter your choice\n");
printf("1.Compare two strings\n");
printf("2.Copy a string\n");
printf("3.Find length of a given string\n");
printf("4.Concatenate two strings\n");
scanf("%d",&ch);
 
switch(ch)
{
case 1:
{
puts("Enter first string\n");
scanf("%s",str1);
printf("Enter second string\n");
scanf("%s",str2);
ptr1=str1;
ptr2=str2;
if(strlen(str1)!=strlen(str2))
printf("Strings are different\n");
else
{
for(;*ptr1!='\0';ptr1++)
{
if(*ptr1!=*ptr2)
{
flag=1;
break;
}
*ptr2++;
}
if(flag==0)
printf("Strings are same\n");
else
printf("Strings are different\n");
}
break;
}
case 2:
{
puts("ENTER A STRING\n");
scanf("%s",str1);
stcpy(str1,str2);
printf("THE COPIED STRING IS\n");
printf("%s",str2);
break;
}
case 3:
{
printf("Enter any string\n");
scanf("%s",str1);
j=0;
ptr1=str1;
for(;*ptr1!='\0';ptr1++)
{
j++;
}
printf("Length of string is %d\n",j);
break;
}
case 4:
{
printf("Enter two strings\n");
scanf("%s",str1);
scanf("%s",str2);
ptr1=str1;
ptr2=str2;
j=0;
for(;*ptr1!='\0';ptr1++)
{
str3[j]=*ptr1;
j++;
}
for(;*ptr2;ptr2++)
{
str3[j]=*ptr2;
j++;
}
printf("Concatenated string is\n");
printf("%s",str3);
break;
}
default:
printf("Wrong choice");
}
}
return 0;
}
