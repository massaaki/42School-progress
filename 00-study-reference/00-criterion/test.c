#include <criterion/criterion.h>
#include <criterion/new/memory.h>
#include <criterion/new/assert.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void setup(void)
{
	puts("Runs before the test");
}

void teardown(void)
{
	puts("Runs after the test");
}

Test(someTestNameHere, test, .init = setup, .fini = teardown)
{
	printf("Testing hello world\n");
	cr_expect(strlen("test") == 4, "Expected \"test\" to have length 4.");
}

Test(other_test_here, test)
{
	printf("Some tests\n");
	char *str;
	str = malloc(5 * sizeof(char));
	strcpy(str, "hello");
	cr_expect(strcmp(str, "hello") == 0, "Expected str is hello.");
}