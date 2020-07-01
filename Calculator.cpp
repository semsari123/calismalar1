/******************************************************************************

Online C++ Compiler.
Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


class Calculator{

private:
int deger1;
int deger2;
string toplamaisareti;
string cikarmaisareti;
string carpmaisareti;
string bolmeisareti;

public:
//Getter and Setters

int getDeger1(){
return deger1;
}

void setDeger1(int _deger1){
cout<<"Ilk deger= ";
cin>>_deger1;
cout<<endl;
this->deger1=_deger1;
}

int getDeger2(){
return deger2;
}

void setDeger2(int _deger2){
cout<<"Ikinci deger= ";
cin>>_deger2;
cout<<endl;
this->deger2=_deger2;
}
void getToplamaisareti(){
    string toplamaisareti;
}
void setToplamaisareti(string _toplamaisareti){
    cin>>_toplamaisareti;
    this->toplamaisareti=_toplamaisareti;
}
void getCikarmaisareti(){
    string cikarmaisareti;
}
void setCikarmaisareti(string _cikarmaisareti){
    cin>>_cikarmaisareti;
    this->cikarmaisareti=_cikarmaisareti;
}

void getCarpmaisareti(){
    string carpmaisareti;
}
void setCarpmaisareti(string _carpmaisareti){
    cin>>_carpmaisareti;
    this->carpmaisareti=_carpmaisareti;
}
void getBolmeisareti(){
    string bolmeisareti;
}
void setBolmeisareti(string _bolmeisareti){
    cin>>_bolmeisareti;
    this->bolmeisareti=_bolmeisareti;
}
//Operations
int topla(){
return deger1+deger2;
}

int cikar(){
return deger1-deger2;
}

int carp(){
return deger1*deger2;
}

int bol(){
if(deger2 !=0)
return deger1/deger2;
else
return 0;
}


};


int main()
{
    int _deger1,_deger2;
    string toplama,cikarma,carpma,bolme;
    int choice;
    Calculator calculator;

    cout<<"Dipnot: Toplama için + , Cikarma için - , Carpma icin * , Bolme icin / isaretlerini kullanınız"<<endl;
    do
    {   
        
        std::cout<<"0.Toplama"<<"  "<<"1.Cikarma"<<"  "<<"2.Carpma"<<"  "<<"3.Bolme"<<"  "<<"4.Cikis"<<endl;
        
        std::cin>>choice;
        switch(choice)
        {
            case 0:
                {
                calculator.setDeger1(_deger1);
                calculator.setToplamaisareti(toplama);
                calculator.setDeger2(_deger2);
                calculator.getDeger1();
                calculator.getDeger2();
                int toplam=calculator.topla();
                std::cout <<"Sonuc="<< toplam << std::endl<< std::endl;
                break;
                return toplam;
                }
                
            case 1:
               { 
                calculator.setDeger1(_deger1);
                calculator.setCikarmaisareti(cikarma);
                calculator.setDeger2(_deger2);
                calculator.getDeger1();
                calculator.getDeger2();
                int cikar=calculator.cikar();
                std::cout <<"Sonuc="<< cikar << std::endl<< std::endl;
                break;
                return cikar;
               }
                
            case 2:
            
                {
                calculator.setDeger1(_deger1);
                calculator.setCarpmaisareti(carpma);
                calculator.setDeger2(_deger2);
                calculator.getDeger1();
                calculator.getDeger2();
                int carpim=calculator.carp();
                std::cout <<"Sonuc="<< carpim << std::endl<< std::endl;
                break;
                return carpim;
                }
            case 3:
                {
                calculator.setDeger1(_deger1);
                calculator.setBolmeisareti(bolme);
                calculator.setDeger2(_deger2);
                calculator.getDeger1();
                calculator.getDeger2();
                int bolum=calculator.bol();
                std::cout <<"Sonuc="<< bolum << std::endl<< std::endl;
                break;
                return bolum;
                }
            case 4:
                cout<<"Cikis yapiliyor..";
        }
    }
    while(choice!=4);
return 0;
}
