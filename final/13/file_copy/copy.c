#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	char c;
	FILE *fp1,*fp2;
	fp1 = fopen(argv[1],"r");

	if(fp1==NULL){
		printf("wrong");
		return -1;
	}

	fp2 = fopen(argv[2],"w");	
	while((c=fgetc(fp1))!=EOF){
		fputc(c,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	}
