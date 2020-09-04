#include<stdio.h>
struct stu
{
    char name[10];
    char gender[10];
    int age;
    char add[10];
};
int main()
{
    struct stu my_stu = {"Ajay", "Male", 20, "Chennai"};
    struct stu *ptr_stu;
    ptr_stu = &my_stu;
    printf("Student's name: %s\n", ptr_stu->name);
    printf("Student's gender: %s\n", ptr_stu->gender);
    printf("Student's age: %d\n", ptr_stu->age);
    printf("Student's address': %s\n", ptr_stu->add);
    strcpy(ptr_stu->name, "Jack");
    ptr_stu->age++;
    printf("Another Student's name is: %s\n", ptr_stu->name);
    printf("Student's age is: %d\n", ptr_stu->age);
	printf("Student's gender: %s\n", ptr_stu->gender);
    printf("Student's address': %s\n", ptr_stu->add);
}
