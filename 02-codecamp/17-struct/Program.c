#include <stdio.h>
#include <stdlib.h>



struct Student{

    char name[50];
    int age;
    double gpa;

};

int main(){


    struct Student student1;
    student1.age=22;
    student1.gpa = 3.2;
    strcpy(student1.name,"guna");


    struct Student student2;
    student2.age=66;
    student2.gpa=5.5;
    strcpy(student2.name,"Joker");

    printf("The name of the student 1 is %s \n",student1.name);
    printf("The age of the student 1 is %d\n",student1.age);
    printf("The GPA of the student 1 is %f \n",student1.gpa);

    printf("---------------------------------------------------\n");

    printf("The name of the student 2 is %s\n",student2.name);
    printf("The age of the student 2 is %d\n",student2.age);
    printf("The GPA of the student 2 is %f\n",student2.gpa);


    return 0;
}
