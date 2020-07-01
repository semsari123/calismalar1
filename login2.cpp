#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int id;
int sifre;
int girilen_id;
int girilen_sifre;

id=123456;
sifre=7890;

while(true){

	printf("kullanici adi=");
	scanf("%d",&girilen_id);

	if(girilen_id != id){
		printf("Kullanici adini yanlis girdiniz.\n");
		continue;
	}
	while(true){
	
	printf("Sifre=");
	scanf("%d",&girilen_sifre);

	if(girilen_sifre!=sifre){
	
		printf("Sifreyi yanlis girdiniz.\n");
		continue;
	}

	
	
}
	
	
	




}
printf("sisteme giris yapiliyor.");
return 0;
}
