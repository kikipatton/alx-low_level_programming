#include "main.h"
/**
 * main - main code here
 * return: 0 (success)
 */
/**
 * function declaration
 */
void print_alphabet(void);

int main(void)
{
	/*function returning lowercase alphabet*/
	char print_alphabet(char){
        char result;
        char c = 'a';
        while (c <= 'z')
        {
                _putchar(c);
                c++;
        }
        return result;
}
}
