#include <process_copy.h>

int process_wait(void){
	pid_t wpid;
	int status;
	while((wpid = waitpid(-1,&status,WNOHANG))>0){
		if(WIFEXITED(status))
			printf("pid %d,Exitcode:%d\n",wpid , WEXITSTATUS(status));
		if(WIFSIGNALED(status))
			printf("pid %d,Signal:%d\n",wpid , WTERMSIG(status));
	}
}
