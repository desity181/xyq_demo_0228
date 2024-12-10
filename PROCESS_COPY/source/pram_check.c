#include <process_copy.h>

int pram_check(char*filename,int argc,int pronum){
	if(argc < 3){
		printf("PROCESS_COPY ERROR:参数数量错误...\n");
		exit(0);
	}
	if((access(filename,F_OK))==-1){
		printf("PROCESS_COPY ERROR:源文件不存在...\n");
		exit(0);
	}
	if(pronum < 5 || pronum>100){
		printf("PROCESS_COPY ERROR:进程数量错误，范围应是(5,100)...\n");
		exit(0);
	}
	return 0;
}
