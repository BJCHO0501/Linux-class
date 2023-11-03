#include <unistd.h>
#include <stdio.h>

int main() {
	execlp("ls", "ls", "-l", "apple/", (char*)0);
	printf("dasfasdfasfasfd\n");
}
