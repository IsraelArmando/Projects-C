#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Hello world!\n");
    
    string yourName = get_string("what is your name buddy?\n");
    
    printf("Hello, %s\n", yourName);
}
