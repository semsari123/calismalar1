#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int fonksiyon_ustalma(int taban, int ust);
int main(){
int taban_,us_;
printf("tabani gir:");
scanf("%d",&taban_);
printf("ussu gir:");
scanf("%d",&us_);
printf("%d",fonksiyon_ustalma(taban_,us_));
return 0;
}

int fonksiyon_ustalma(int taban, int ust){
	int carpim=1;
	int n=5;
	int kosul=ust+n;
	while(n<kosul){
	carpim=carpim*taban;
	n=n+1;
}
return carpim;
}
	


