#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int a=0;
	int i;
	int toplam=0;
	int ortalama;
	
	printf("i=");
	scanf("%d",&i);
	
	while (a<i){
		a++;
		toplam=toplam+a;
		
		ortalama=toplam/i;	
	}
	printf("%d\n",toplam);
	printf("ortalama = %d\n",ortalama);
	return 0;
}
