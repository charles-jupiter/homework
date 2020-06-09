include<stdio.h>
#include<unistd.h>

int main () {
  
int  i ; 
pid_t pid1,pid2; 

ppid = getppid(); 
printf("P1%d\n", ppid);

pid1=fork();
  if(pid1==0) {
   for (i=1 ; i=<2; i++){
      pid2=fork();
      pid = getpid(); 
    if (pid2==0){ 

        printf("P%d %d\n",i++, pid);

        break;
    }
        } while (wait(0)>0)); 
        {
          return 0;
        }

} break; 
}
