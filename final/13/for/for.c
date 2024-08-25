#include <stdio.h>
struct student
{
int id;
char name[20];
double score;
};
int main(int argc, char *argv[]){
	FILE *fp;
	struct student record;
	fp = fopen(argv[1],"r");
	while(fscanf(fp,"%d %s %lf",&record.id,record.name,&record.score)==3){
		printf("%d %s %lf\n",record.id,record.name,record.score);
}
fclose(fp);;
return 0;
}

