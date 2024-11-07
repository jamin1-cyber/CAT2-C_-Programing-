//a code to write structure of employees
#include <stdio.h>
#include<string.h>
struct employee{
    // declaring a variable
    char name[50];
    int id;
    char department[20];
    float salary;
    char email[50];
}employee1 ;
int main() {
    //declaring main character

    strcpy(employee1.name,"john doe");
    employee1.id = 12345;
    strcpy(employee1.department,"human resource");
    employee1.salary=55000.50;
    strcpy(employee1.email,"john.doe@cmpany.com");
    // display the variables on the screen
    printf("%s\n",employee1.name);
    printf("%d\n",employee1.id);
    printf("%s\n",employee1.department);
    return 0;
}