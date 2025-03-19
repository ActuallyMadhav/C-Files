#include <stdio.h>
#include <string.h>

typedef struct{
    char name[12];
    float gpa;
}Student;

int main(){

    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 2.5};
    Student student3 = {"Sandy", 4.0};
    Student student4 = {"Squidward", 2.0};

    Student students[] = {student1, student2, student3, student4};
    int lenArray = sizeof(students)/ sizeof(students[0]);

    for(int i = 0; i < lenArray; i++){
        printf("%-12s:\t %.2f\n", students[i].name, students[i].gpa);
    }
    
    return 0;
}