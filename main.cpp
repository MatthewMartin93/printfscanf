#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    printf("What is your name?");
    char name[100];
    scanf("%s", name);
    printf("How old are you?");
    int age;
    scanf("%d", &age);
    printf("What the initial of your last name?");
    char initial;
    scanf("%s", &initial);
    printf("What is your grade average?");
    float avg;
    scanf("%f", &avg);
    printf("%s\n%d\n%s\n%.2f", name, age, initial, avg);


}
