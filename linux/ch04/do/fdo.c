#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
	if (symlink(argv[1], argv[2]))
		printf("실패~\n");
}

