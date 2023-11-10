#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

int flag = 1;

void handler(int a) {
	printf("[pr] kill\n");
}

int main() {
	pid_t pid;
	static struct sigaction act;

	if((pid = fork()) > 0) {
		printf("[parent] do!\n");
		act.sa_handler = handler;
		sigfillset(&(act.sa_mask));
		sigaction(SIGINT, &act, NULL);
		pause();
	} else if (pid == 0) {
		sleep(1);
		kill(getppid(), 9);
		printf("[child] kill\n");

	}
	else 
		printf("fork faild");
}


