#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
	if (access(argv[1], F_OK) == -1) {
		printf("응 없어~\n");
		exit(1);
	}
	printf("응 있어\n");
}
