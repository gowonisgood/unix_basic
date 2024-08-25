#include <stdio.h>

int main(){
	int c;
	c = fgetc(stdin);
	while(c!=EOF){
		fputc(c,stdout);
		c = fgetc(stdin);
	}
	return 0;
}

