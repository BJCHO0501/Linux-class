#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
	pid_t pid;
	int n;
	scanf("%d", &n);

	pid = fork();
	int result = 1;

	if (pid > 0) {
		for (int j = 2; j <= n; j++) {
			result += j;
		}
	} else if (pid == 0) {
		for (int j = 2; j <= n; j++) {
			result *= j;
		}
	} else {
		printf("fork error\n");
	}

	printf("%d\n", result);
}


