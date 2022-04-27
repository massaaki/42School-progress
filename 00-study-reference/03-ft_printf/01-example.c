/*
 * void va_start(va_list ap, last);
 * type va_arg(va_list ap, type);
 * void va_end(va_list ap);
 * void va_copy(va_list dest, va_list src);
 * library: <stdarg.h>
 *
 * The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first.
 * The va_arg() macro expands to an expression that has the type and value of the next argument in the call.
 * Each invocation of va_start() must be matched by a corresponding invocation of va_end()
 * The va_copy() macro copies the (previously initialized) variable argument list src to dest
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void list_args_int(int, ...);
void list_args_char(int, ...);
void list_args_str(int, ...);

int main(void)
{
	list_args_int(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	list_args_char(3, 'a', 'b', 'c');
	list_args_str(2, "hello", "world");

	return (0);
}

void list_args_int(int num_args, ...)
{
	va_list ap;
	int val;

	va_start(ap, num_args);
	printf("args: ");
	for (int i = 0; i < num_args; i++)
	{
		printf("'%i' ", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}

void list_args_char(int num_args, ...)
{
	va_list ap;

	va_start(ap, num_args);

	printf("args: ");
	for(int i = 0 ; i < num_args; i++)
	{
		printf("'%c' ", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}

void list_args_str(int num_args, ...)
{
	va_list ap;
	va_list aq;
	char *arg;

	va_start(ap, num_args);
	va_copy(aq, ap);

	printf("args(original): ");
	for (int i = 0; i < num_args; i++)
	{
		arg = va_arg(ap, char *);
		printf("%s\n", arg);
	}
	printf("\n");

	printf("args(copy): ");
	for (int i = 0; i < num_args; i++)
	{
		arg = (char*) va_arg(aq, char *);
		printf("%s\n", arg);
	}
	printf("\n");
	va_end(ap);
}
