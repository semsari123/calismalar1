#include <cstdlib>
#include <iostream>
#include <math.h>//matematik iþlemleri için gerekli kütüphanemiz
#include <cmath>
using namespace std;  
  
int main() {  
  
    cout << "Kaç sayý girilecek: ";  
  
    int n;  
  
    cin >> n;  
  
    cout << "Sayýlarý Giriniz: " << endl;  
  
    int arr[n];  
  
    for(int k = 0; k < n; k++){  
  
        cout << k+1 << ". ";  
        cin >> arr[k];  
  
    }  
  
    for(int i = 0; i < n; i++){  
  
        for(int j = i+1; j < n; j++){  
  
            if(arr[i] > arr[j]){  
  
                int tmp;  
  
                tmp = arr[j];  
                arr[j] = arr[i];  
                arr[i] = tmp;  
  
  
            }  
        }  
    }  
    for(int k = 0; k < n; k++){  
  
        cout << arr[k];  
  
    }  
    cout<<endl;
    
    int array[n];
    
  for(int i=0;i<n;i++){
  	
  	array[i]=arr[n-i-1];
  		
		  }	
  	
  	
  
  
  
  
    for(int k = 0; k < n; k++){  
  
        cout << array[k];  
  
    }  
  
  
    return 0;  
}  
