#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int i;
int a;
int b;
int j;

	
for(j=0;j<3;j++){
	for(i=1;i<5;i++){
	for(a=0;a<i;a++){
		printf("*");
	}
	printf("\n");
	
}
for(b=5;b>0;b--){
	for(a=0;a<b;a++){
		printf("*");
	}
	printf("\n");	
	}
}
return 0;
}


