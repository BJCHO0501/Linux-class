#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
	pid_t pid;
	for (int i = 1; i < argc; i++) {
		char* arg[] = {"wc", argv[i], (char*)0};
	
		pid = fork();

		if (pid == 0) {
			execv("/usr/bin/wc", arg);
			exit(1);
		}
	}
}

	
