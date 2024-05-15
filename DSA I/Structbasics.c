#include<stdio.h>
#include<string.h>

//user defined data type struct. typedef keyword is used to give a nickname to the original var name.
struct student
{
    int roll;
    int marks;
    char name[100];
} ;


int main()
{
    struct student var = {29,69,"soubhagya"};
    printf("%d\n%d\n%s", var.roll,var.marks, var.name); 
}