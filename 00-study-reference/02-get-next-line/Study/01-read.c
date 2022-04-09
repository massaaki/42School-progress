/**
 * Sintax:
 * ssize_t read(int fd, void *buf, size_t count);
 *
 * Description:
 * - attempts to read up to COUNT bytes from File Descriptor FD into de buffer starting at BUF
 *
 * gcc  -D BUFFER_SIZE=42  01-read.c
 * Tests:
 * gcc  -D BUFFER_SIZE=12  01-read.c :pick only fist paragraph
 * 
 **/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
  int fd;
  char buf[BUFFER_SIZE]; //BUFFER_SIZE is sent in gcc command
  const int READ_ONLY = 0;

  // ptr start to the begining
  fd = open("01-test-file.txt", READ_ONLY);
  if (fd == -1)
  {
    printf("Failed to open and read the file \n");
    return 1;
  }
  read(fd, buf, BUFFER_SIZE - 1);
  buf[BUFFER_SIZE-1] = '\0';


  printf("buf: \"%s\"\n", buf);
  return (0);
}