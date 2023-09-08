#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **args) {
	int fdin, result;
	size_t neard;
	char buf[1024];

	fdin = open(args[1], O_RDWR);
	while((neard = read(fdin, buf, 1024)) > 0) {
		for (int i = 0; i < neard; i++) {
			if((buf[i] >= 'a' && buf[i] <= 'z')) {
				buf[i] -= 32;
			}
		}
		lseek(fdin, (off_t) - neard, SEEK_CUR);
		if (write(fdin, buf, neard) < neard) {
			close(fdin);
		}
	}
	close(fdin);
}

