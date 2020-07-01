#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    
    int a;
    
    while (a%2==0){
        printf("a=");
        scanf("%d",&a);
		
        if (a%2==1)
        break;
		printf("cift sayi\n");
       
        
    }
   	printf("Sayi tek sayidir.Cikis yapiliyor.");
    return 0;
}
