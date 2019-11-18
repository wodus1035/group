/* pipedemo2.c	* Demonstrates how pipe is duplicated in fork()
 *		* Parent continues to write and read pipe,
 *		  but child also writes to the pipe
 */

#include <stdio.h>
#include <unistd.h>		
#include <string.h>
#include <stdlib.h>

#define CHILD_MESS	"I want a cooke\n"
#define PAR_MESS	"tesing..\n"
#define oops(m, x)	{ perror(m); exit(x); }

main()
{
    int pipefd[2];
	int	len;			/* for write	*/
	char	buf[BUFSIZ];		/* for read	*/
	int	read_len;
	    
    //todo
}

