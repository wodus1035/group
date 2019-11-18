/* pipe.c
 *	* Demonstrates how to create a pipeline from one process to another
 *	* Takes two args, each a command, and connects
 *	  av[1]'s output to input of av[2]
 *	* usae: pipe command1 command2
 *	  effect: command1 | command2
 *	* Limitations: commands do not take arguments
 *	* uses execlp() since known number of args
 *	* Note: exchange child and parent and watch fun
 */

#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

#define 	oops(m,x)	{ perror(m); exit(x); }

main(int ac, char **av)
{
	int	thepipe[2],		/* two file descriptors */
		newfd,			/* useful for pipes	*/
		pid;			/* and the pid		*/

	if ( ac !=3 ) {
		fprintf( stderr, "usage : pipe cmd1 cmd2\n" );
		exit(1);
	}
    //todo

}
