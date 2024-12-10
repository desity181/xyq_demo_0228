#include "process_copy.h"

int main(int argc,char**argv){
	int pronum;
	int blocksize;
	pronum = atoi(argv[3]);
	pram_check(argv[1],argc,pronum);
	blocksize = blockcur(argv[1],pronum);
	process_create(argv[1],argv[2],pronum,blocksize);
	return 0;
}
