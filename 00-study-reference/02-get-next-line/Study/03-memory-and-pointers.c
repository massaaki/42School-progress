/**
 * Study of pointers and Strings 
 **/

#include <stdio.h>
#include <stdlib.h>

void example_using_int(void);
void example_using_int2(void);
void example_using_str(void);
void example_malloc(void);

int main(void)
{
	// example_using_int();
	// example_using_int2();
	// example_using_str();
	example_malloc();
	return (0);
}

void example_malloc(void)
{

}

void example_using_int(void)
{
	int n = 50;
	int *p = &n;

	printf("pointer: %p\n", p);
	printf("content of pointer: %i\n", *p);
	return;
}

void example_using_str(void)
{
	char *str = "Hi!";
	char *p = &str[0];
	printf("%s\n", str);
	printf("%p\n", p);
	printf("%p\n", str);
	printf("********\n");
	printf("%p: %c\n", &str[0], str[0]);
	printf("%p: %c\n", &str[1], str[1]);
	printf("%p: %c\n", &str[2], str[2]);
	printf("%p: %c\n", &str[3], str[3]);
	return;
}

void example_using_int2(void)
{
	int numbers[] = {4, 5, 8, 2, 7, 5, 0};

	printf("%i\n", *numbers);
	printf("%i\n", *(numbers+1));
	printf("%i\n", *(numbers+2));
	printf("%i\n", *(numbers+3));
	printf("%i\n", *(numbers+4));
	printf("%i\n", *(numbers+5));
	printf("%i\n", *(numbers+6));

	return;
}