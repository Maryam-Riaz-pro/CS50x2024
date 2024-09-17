#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? "); // get user's name
    printf("hello, %s\n", name);                     // say hello
}