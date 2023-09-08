#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
	int file1;
	file1 = creat("temp0.txt", 0644);

	close(file1);
}
