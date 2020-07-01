#include<iostream>  
using namespace std;  
int main(){
 int n;
 int i;
 int j;
 int arr[n];
 int temp;
 int k;
 cout << "Kac sayi girilecek: ";  
 cin>>n;
 
 for(k=0;k<n;k++){
 	cout<<k+1<<".sayi=";
 	cin>>arr[k];
 }
 for(i=0;i<n;i++){
 	for(j=i+1;j<n;j++){
 		if(arr[j]<arr[i]){
			temp = arr[i];  
        	arr[i] = arr[j];  
        	arr[j] = temp; 
		  }
		 
 		
	 }
 	
 }
 for(i=0;i<n;i++){
 	cout<<arr[i];
 }
 
 
 
 
 
 
 return 0;
 }
