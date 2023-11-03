#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <math.h>

int main(int argc, char *argv[]) {
	pid_t pid;

	int x = (int)argv[1], y = (int)argv[2];

	pid = fork();

	if (pid > 0) {
		printf("%d", pow(x, y));
	}
	else if (pid == 0) {
		int total = 0;
		for (int i = x; i <= y; i++) {
			total += i;
		}
		printf("%d\n", total);
	}
}
	
