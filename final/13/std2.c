#include <stdio.h>

int main(int argc,char *argv[]){
	FILE *fp;
	char c;
	
	fp = fopen(argv[1],"w");
	c = fgetc(stdin);
	while(c!=EOF){
		fputc(c,fp);
		c = fgetc(stdin);
	}
	fclose(fp);
}
	
