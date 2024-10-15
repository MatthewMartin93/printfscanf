// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
    scanf("%c", & initial);
    printf("What is your grade average?");
    float avg;
    scanf("%f", &avg);
    printf("%s", name, "\n%d", age, "\n%c", initial, "\n%2f", avg);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
