#include "get_next_line_bonus.h"


#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define O_RDONLY 00
#define O_WRONLY 01
#define O_RDWR 02

void testBonus(void);

int main(void)
{

	testBonus();
	
	return (0);
}

void testBonus(void)
{
	int fd[4];


	char *current_line;

	fd[0] = open("./file-tests/41_with_nl", O_RDWR);
	fd[1] = open("./file-tests/42_with_nl", O_RDWR);
	fd[2] = open("./file-tests/43_with_nl", O_RDWR);
	fd[3] = open("./file-tests/nl", O_RDWR);

	current_line = get_next_line(1000);
	printf("[1] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[0]); // 0123456789012345678901234567890123456789\n
	printf("[2] current_line: %s\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1001);
	printf("[3] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[1]);
	printf("[4] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1002);
	printf("[5] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[2]);
	printf("[6] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1003);
	printf("[7] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[0]);
	printf("[8] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1004);
	printf("[9] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[1]);
	printf("[10] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1005);
	printf("[11] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[2]);
	printf("[12] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[0]);
	printf("[13] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[1]);
	printf("[14] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[2]);
	printf("[15] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1006);
	printf("[16] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[3]);
	printf("[17] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(1007);
	printf("[18] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	current_line = get_next_line(fd[3]);
	printf("[19] current_line: '%s'\n", current_line);
	free(current_line);
	printf("- - - - - - - - - \n");

	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	close(fd[3]);
}