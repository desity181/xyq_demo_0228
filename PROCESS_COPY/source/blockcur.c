#include <process_copy.h>

int blockcur(char*filename,int pronum){
	int fd;
	int file_size;
	if((fd = open(filename,O_RDONLY))==-1){
		perror("OPEN CALL FAILED");
		exit(-1);
	}
	if((file_size = lseek(fd,0,SEEK_END))==-1){
		perror("LSEEK CALL FAILED");
		exit(-1);
	}
	close(fd);
	if(file_size % pronum == 0)
		return file_size / pronum;
	else
		return file_size / pronum + 1 ;

}
