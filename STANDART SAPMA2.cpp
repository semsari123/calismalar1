

#include <cstdlib>
#include <iostream>
#include <math.h>//matematik iþlemleri için gerekli kütüphanemiz
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    
	int SIZE=0;	
	float a[SIZE];
	int i=0;
	float toplam=0;
	float ortalamafarki=0;
	float karetoplami=0;
	float sayi;
	cout<<"Arrayin boyutunu giriniz:";
	
	cin>>SIZE;
	cout<<"\n\n\n";
	
	for (i=0;i<SIZE;i++){
	
	cin>>sayi;
	a[i]=sayi;
	
	
	}
	for (i=0;i<SIZE;i++){
	cout<<i+1<<". deger: "<<a[i];
	cout<<endl;

	}
		for (i=0;i<SIZE;i++){
	toplam+=a[i];
	

	}
	cout<<"toplam"<<toplam;
	cout<<endl;
	cout<<endl;
	float ortalama=(float)toplam/SIZE;
	
	cout<<"ortalama"<<ortalama<<endl;
	
	for (i=0;i<SIZE;i++){

	
	karetoplami+=pow((a[i]-ortalama),2);
	cout<<"kare toplami"<<karetoplami<<endl;

}

float bolum=karetoplami/(SIZE-1);
float karekok=sqrt(bolum);
cout<<"standart sapma="<<karekok;
	

	return 0;
}
