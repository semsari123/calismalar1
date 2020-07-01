#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a=0;
	int i;
	int toplam=0;
	double karekok;
	
	printf("i=");
	scanf("%d",&i);
	
	while (a<i){
		a++;
		toplam=toplam+a;
		
			
	}
	printf("%d\n",toplam);
	karekok=(double)sqrt(toplam);
	printf("ortalama = %f\n",karekok);
	return 0;
}
