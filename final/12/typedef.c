#include <stdio.h>

typedef struct {
	int x,y;
}Point;

int main(){
	Point p1 = {1,1};
	printf("%d %d\n",p1.x,p1.y);
	return 0;
}
