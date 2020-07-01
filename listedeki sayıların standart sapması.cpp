

#include <cstdlib>
#include <iostream>
#include <math.h>//matematik iþlemleri için gerekli kütüphanemiz

using namespace std;

int main(int argc, char *argv[])
{
    
	int SIZE=10;	
	int a[SIZE]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int toplam=0;
	float ortalamafarki;
	int karetoplami;
	
		
	
	
	for (i=0;i<10;i++){
	toplam+=a[i];

	}
	
	int ortalama= toplam/SIZE;
	
	for (i=0;i<10;i++){
	ortalamafarki=a[i]-ortalama;
	karetoplami+=pow(ortalamafarki,2);
	

}
float bolum=karetoplami/(SIZE-1);
float karekok=sqrt(bolum);
cout<<"standart sapma="<<karekok;
	return 0;
}
