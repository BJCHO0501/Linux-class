#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	int filedes;
	char pathName[] = "temp.text";
	
	if ((filedes = open(pathName, O_CREAT|O_RDWR, 0664)) == -1) {
		printf("file open error\n");
		exit(1);
	}
}
