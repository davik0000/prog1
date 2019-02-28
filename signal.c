#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void jelkezelo(int param)
{
	printf("Ctrl megnyomva\n");

}

int main()
{

	for(;;)
		{
		if (signal(SIGINT, jelkezelo) == SIG_IGN)
		signal(SIGINT, SIG_IGN);	
		}

}
