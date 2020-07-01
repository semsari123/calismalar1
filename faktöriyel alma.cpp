#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a=1;
	int i;
	int carpim=1;
	printf("i=");
	scanf("%d",&i);
	
	while (a<i){
		a++;
		carpim*=a;
		
		printf("carpim = %d\n",carpim);	
	}
	
	return 0;
}
