#include <stdio.h>
#include <string.h>

struct Human
{
    char name[20];
    int age;
    int weight;
};

int main()
{
    struct Human *a;
    struct Human b;

    strcpy(b.name , "Phu");

    b.age = 20;
    b.weight = 60;
    a = &b;

    printf("%s\n",(*a).name);
    printf("%d Years Old\n",(*a).age);
    printf("%d Kilograms\n",(*a).weight);

    a -> age = 50;
    printf("%d Years Old\n",(*a).age);
    printf("%d Years Old\n",b.age);

    return 0;
}
