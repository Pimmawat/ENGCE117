#include <stdio.h>

struct Profile
{	
    int age;
    int height;
    int weight;
};

int main()
{
    struct Profile body;
    body.age = 20;
    body.height = 171;
    body.weight = 60;
    printf("Phu age : %d Years Old\n", body.age);
    printf("Phu Height : %d Centimeter\n", body.height);
    printf("Phu Weight : %d Kilogram\n", body.weight);
    return 0;
}
