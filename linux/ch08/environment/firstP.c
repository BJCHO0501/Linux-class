#include <stdlib.h>
#include <unistd.h>

int main() {
	putenv("MYDATA=5");

	execl("secondP", "secondP", (char *)0);
}
