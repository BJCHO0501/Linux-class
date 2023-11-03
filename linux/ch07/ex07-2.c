#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t pid;
	printf("Hello!\n");

	pid = fork();

	if (pid > 0) {
		printf("parent\n");
		sleep(1);
	}
	else if (pid == 0) {
		printf("child\n");
		execl("bin/ls", "ls", "-l", (char*)0);
		printf("fail to exe\n");
	}
	else {
		printf("fail fork\n");
	}
	printf("by\n");
}
