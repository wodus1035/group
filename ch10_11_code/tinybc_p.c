#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<fcntl.h>
#include <sys/wait.h>
#define oops(m,x)	{ perror(m); exit(x); }

void be_dc(int in[2], int out[2]);
void be_bc(int todc[2], int fromdc[2]);
void fatal(char mess[]);

int main()
{
	int	pid, todc[2], fromdc[2];	/*equipment	*/

    //todo

	// test
	printf("todc[0]  : %d, todc[1]  : %d \n", todc[0], todc[1]);
	printf("fromdc[0]: %d, fromdc[1]: %d\n", fromdc[0], fromdc[1]);

	/* get a process for user interface */
    //todo
}

void be_dc(int in[2], int out[2])
{
    //todo
}


void be_bc( int todc[2], int fromdc[2])
{
	int	num1, num2;
	char	operation[BUFSIZ], message[BUFSIZ], *fgets();
	FILE	*fpout, *fpin, *fdopen();

	/* setup */
    //todo
    
	if( fpout == NULL || fpin == NULL )
		fatal("Error converting pipes to streams");


	/* main loop */
    //todo
}

void fatal( char mess[] )
{
	fprintf(stderr, "Error: %s\n", mess);
	exit(1);
}


