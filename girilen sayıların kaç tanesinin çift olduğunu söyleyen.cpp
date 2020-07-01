
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    printf("Programi sonlandirmak icin 0a basiniz.\n");
    int a;
    int i=0;
    while (true){
        
        printf("a=");
        scanf("%d",&a);

          if (a==0)
          break;
        
        if(a%2==0)
        i=i+1;
     
        
    }
    printf("cift sayilarin sayisi=%d\n",i);
    return 0;
}
