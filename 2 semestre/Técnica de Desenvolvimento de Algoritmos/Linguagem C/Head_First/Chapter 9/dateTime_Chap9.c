#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* now()//This function returns a string containing the date and time
{
	time_t t;
	time (&t);
	return asctime(localtime (&t));
}

/* Master Control Program utility. Records guard patrol check-ins. */
int main()
{
	char comment[80];
	char cmd[120];

	fgets(comment,80,stdin);
	sprintf(cmd, "echo '%s %s' >> reports.log", comment, now());
	system(cmd);
	return 0;
}

/*
* Execute like this: "./dateTime It's a test" 
*/