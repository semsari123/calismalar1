// (a^n+b^n)/n while döngüsüyle yap
//a ile b yi n i de sen gir 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fonksiyon_ustalma(int taban, int ust);
void toplama(int a, int b,int n);
int main(){
	int a,b,n;
	printf ("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("n=");
	scanf("%d",&n);
	printf("%d",toplama(a,b,n)/n);
	return 0;
}
void toplama(int a, int b,int n){
	int toplama;
	toplama=fonksiyon_ustalma(a,n)+fonksiyon_ustalma(b,n);
	return toplama;
}

int fonksiyon_ustalma(int taban, int ust){
	int carpim=1;
	int k=1;
	int kosul=ust+k;
	while(k<kosul){
	carpim=carpim*taban;
	k=k+1;
}
return carpim;
}
