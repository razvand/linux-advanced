#include <syslog.h>

/* From: http://0pointer.de/blog/projects/journal-submit.html */

int main(int argc, char *argv[])
{
	syslog(LOG_NOTICE, "Hello World");
	return 0;
}
