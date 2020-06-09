#include <unistd.h> 
int main()
{
	pid_t pid1,pid2,pid3;
	int i;
		printf("p\n");
	for (int i = 0; i < 1; i++)
	{
		pid1=fork();
			if (pid1==0)
			{
				printf("p %d\n",i+1 );

			if(i==1)
			{
				pid2=fork();
				if (pid2==0)
				{
					printf("p %d\n",i+1 );
					pid3=fork();
					if (pid3==0)
					{
						printf("p %d\n",i+1 );
					}
				}
			}
			break;
			} 
	}while(wait(0)>0);

return 0;
}
