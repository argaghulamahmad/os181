#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#define FILE "file.txt"

void main(void) {
int fd1, fd2;
fd1 = open (FILE, O_RDWR | O_CREAT | O_TRUNC, 0644);
fd2 = dup(fd1);
write (fd1, "012345\n", 5);
write (fd2, "abcdef\n", 5);
close(fd1);
close(fd2);
}
