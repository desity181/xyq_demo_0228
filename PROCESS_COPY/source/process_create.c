#include <process_copy.h>

int process_create(char * srcfile,char* destfile,int pronum,int blocksize){
	pid_t pid;
	int i=0;
	for(i;i<pronum;i++){
		pid = fork();
		if(pid == 0)
			break;
	}
	if(pid>0){
		process_wait();
	}else if(pid == 0){
		int pos = 0;
		pos = i * blocksize;
		char arr_blocksize[255];
		char arr_pos[255];
		sprintf(arr_blocksize,"%d",blocksize);
		sprintf(arr_pos,"%d",pos);
		execl("/home/colin/demo4_xyq_mmap/PROCESS_COPY/mod/copy","copy",srcfile,destfile,arr_blocksize,arr_pos,NULL);
	}else if(pid == -1){
		perror("FORK CALL FAILED");
		exit(-1);
	}
	return 0;
}
