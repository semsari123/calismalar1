#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int n=5;
int i;
int j;
int k;
int bosluk;
for(i=0;i<n;i++){
	bosluk=n-(i+1);
	
	
	for(j=0;j<bosluk;j++){
		printf(" ");
	}
	
	
	for(k=0;k<i+1;k++){
	printf("*");
	}
	
	
	for(k=0;k<i;k++){
	printf("*");
	}
	
	printf("\n");

}



for(i=n-1;i>0;i--){
	bosluk=n-(i+1);
	
	
	for(j=0;j<bosluk+1;j++){
		printf(" ");
	}
	
	
	for(k=i;k>0;k--){
	printf("*");
	}
	
	
	for(k=i;k>1;k--){
	printf("*");
	}
	
	printf("\n");

}




return 0;
}
