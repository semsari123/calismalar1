#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int carpim(int , int );

int kare1(int a);


int sonuc(int a, int b);


void toplamsonuc(int a , int b);



int main(){
	//a^2+2ab+b^2 her iþlem için fonksiyon kullan sonucu fonksiyonla ekrana yazdýr.

int a,b;

printf("a degerini giriniz:\na=");

scanf("%d",&a);


printf("b degerini giriniz:\b=");

scanf("%d",&b);

toplamsonuc(a,b);
return 0;
}

int carpim(int a, int b){
	
	return a*b;
}


int kare1(int deger){


	return pow(deger,2);//pow kare küp vs alma fonksiyonu
}

int kok(int deger){
	
	return sqrt(deger);//karekök alma fonksiyonu
}


void toplamsonuc(int a , int b){
	printf ("Toplam sonuc =%d",kare1(a)+kare1(b)+2*carpim(a,b));
}

