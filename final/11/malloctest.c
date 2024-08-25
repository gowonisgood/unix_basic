#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int n,i;

	scanf("%d",&n);
	if(n<0){
		printf("wrong number");
		return -1;
	}

	p =(int*)malloc(sizeof(int)*n);
	if(p==NULL){
		printf("wrong allocate");
		return -1;
	}

	printf("reverse input\n");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}

	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	return 0;
}
	
