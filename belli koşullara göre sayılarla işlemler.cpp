#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float add (int  , int );

int cikarma (int , int );
int mode(int deger, int mod);
void toplam_yazdir (int,int);
void cikar_yazdir (int,int);
int main(){
 int a,b,sonuc ;
 printf("eger a>b ise toplama,a=b ise anin 3e gore modu,diger turlu a-b islemi yapar\n");
 printf("a=");
 scanf("%d",&a);
 printf("b=");
 scanf("%d",&b);
 if(a>b){
 toplam_yazdir(a,b);
 }
 else if(a==b){
 	printf("\nmode= %d",mode(a,3));
 }
 else{
 	cikar_yazdir(a,b);
 	
 }
 

	return 0;
} 
void toplam_yazdir(int a,int b){
printf("toplam= %d",add(a,b));
}
float add(int a , int b){
	int toplam;
	toplam=a+b;
	return toplam;
}
void cikar_yazdir(int a, int b){
	printf("cikarma=%d",cikarma(a,b));
}
int cikarma(int a, int b){
	int cikarma1;
	cikarma1 = a-b;
	return cikarma1;
}
int mode(int deger, int mod){
	
	
	return deger%mod;
}

