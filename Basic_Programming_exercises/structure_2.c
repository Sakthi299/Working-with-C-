#include<stdio.h>
void main()
{
	struct student
	{
		int reg_no;
		char name[20];
		char dob[15];
		char gender[10];
	};
	int i=0;
	struct student s[3];
	for(i=0;i<3;i++)
	 {
	 	printf("Enter reg.no:");
	 	scanf("%d",&s[i].reg_no);
	 	printf("Enter name:");
	 	scanf("%s",s[i].name);
	 	printf("Enter date of birth:");
	 	scanf("%s",s[i].dob);
	 	printf("Enter gender:");
	 	scanf("%s",s[i].gender);
	 }
	printf("\n******STUDENT DETAILS******");
	for(i=0;i<3;i++)
	{
		printf("\nStudent %d:",i+1);
		printf("\nRoll.No:%d",s[i].reg_no);
		printf("\nName:%s",s[i].name);
		printf("\nD.O.B:%s",s[i].dob);
		printf("\nGender:%s",s[i].gender);
		printf("\n--------------------");
	}
}
