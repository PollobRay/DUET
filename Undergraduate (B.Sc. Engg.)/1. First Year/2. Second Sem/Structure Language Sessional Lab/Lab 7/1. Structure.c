#include<stdio.h>

struct person
{
    char name[20];
    char gender;
    int age;
    char address[20];
};

int main()
{
    struct person p;
    printf("Enter name: ");
    fgets(p.name,19,stdin);
    printf("Enter gender (M/F):");
    scanf("%c",&p.gender);
    printf("Enter age: ");
    scanf("%d",&p.age);
    printf("Enter address: ");
    fgets(p.address,19,stdin);

    printf("\n\nPrinting structure data....\n");
    printf("Name: %s",p.name);
    printf("\nGender: %c",p.gender);
    printf("\nAge: %d",p.age);
    printf("\nAddress: %s",p.address);

    return 0;
}
