#include<iostream>  
using namespace std;  
int main(){
 cout << "Kac sayi girilecek: ";  
   	int n;
	int arr[n]; 
  	int i;
  	int j;
  	int k;
  	int q;
    cin >> n;  
  
    cout << "Sayıları Giriniz: " << endl;  
    for(int k = 0; k < n; k++){  
  
        cout << k+1 << ". ";  
        cin >> arr[k];  
}
    
    
	int min=arr[i];
	int max=arr[i];
	
		
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				min=arr[j];
			}		
			if(arr[j]>arr[i]){
				max=arr[j];
			}
		}
		
		
		
	
		
		
	cout<<"Arrayin minimum degeri:"<<min<<endl;
	cout<<"Arrayin maksimum degeri:"<<max<<endl;
	




return 0;
}
