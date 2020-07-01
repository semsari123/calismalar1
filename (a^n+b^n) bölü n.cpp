// (a^n+b^n)/n while döngüsüyle yap
//a ile b yi n i de sen gir 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fonksiyon_ustalma(int taban, int ust);

int main(){
	int a,b,n;
	printf ("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("n=");
	scanf("%d",&n);
	printf("%d",fonksiyon_ustalma(a,n)/n+fonksiyon_ustalma(b,n)/n);
	return 0;
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
