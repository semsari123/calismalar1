#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int n=10;
int i=0;
int j;
int k;
int s;
	for(i=1;i<n;i++){
		
		
		for(j=0;j<i;j++){
			printf("*");
			}
			
			
			int bosluk=((n-i)*2)-2;
			
			
		for(k=0;k<bosluk;k++){
			printf(" ");
		}
		
		
		
		for(s=0;s<i;s++){
			printf("*");
		}
		printf("\n");

			
			
			
			
			
	}
	
	for(i=n-2;i>0;i--){
		
		
		for(j=0;j<i;j++){
			printf("*");
			}
			
			
			int bosluk=((n-i)*2)-2;
			
			
		for(k=0;k<bosluk;k++){
			printf(" ");
		}
		
		
		
		for(s=0;s<i;s++){
			printf("*");
		}
		printf("\n");

			
			
			
			
			
	}
	
	
	
	
}












