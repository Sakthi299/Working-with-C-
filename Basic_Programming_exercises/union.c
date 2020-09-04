#include<stdio.h>
#include<string.h>
void main()
{
	union stud
    {
	   int i;
	   float f;
	   char s[20];
	};
	union stud p;
	printf("-----Student Data-----");
	p.i=6103;
	printf("\nRoll.No:%d\n",p.i);
	strcpy(p.s,"Sakthi");
	printf("Name:%s\n",p.s);
	p.f=495.5;
	printf("Marks:%f\n",p.f);
}
