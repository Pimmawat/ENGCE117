#include <stdio.h>

struct Personal
{
    int age;
    int height;
    int weight;
};

void set(struct Personal *state); // Prototype

int main()
{
    struct Personal d;
    set(&d);
    printf("Phu Age : %d Years Old\n", d.age);
    printf("Phu Height : %d Centimeter\n", d.height);
    printf("Phu Weight : %d Kilogram\n", d.weight);
    return 0;
}

void set(struct Personal *state)
{
    (*state).age = 20;
    (*state).height = 171;
    (*state).weight = 60;
}
