#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int toplama=0;
    int a;
    printf("Toplama islemini durdurmak için 0a basiniz\n");
    while (true){
        
        if(a==0)
        break;
        printf("a=");
        scanf("%d",&a);
        toplama+=a;
        printf("Toplama =%d\n",toplama);
    }
    printf("program sonlanmistir.");
    return toplama;
}
