#include<iostream>  
using namespace std;  
int minimumu_bulma(int  , int[]);
int main(){
 int min;
 int n;
 int i;
 int j;
 int arr[n];
 int temp;
 int k;
 int temp_2;
 cout << "Kac sayi girilecek: ";  
 cin>>n;
 
 for(k=0;k<n;k++){
 	cout<<k+1<<".sayi=";
 	cin>>arr[k];
	 }
	 for(i=0;i<n;i++){
	 	temp=minimumu_bulma(min,arr);
	 	temp_2=arr[i];
		if(arr[i]<temp){
	 	temp=temp_2;
	 	arr[i]=arr[temp];
	 	
	 }
	 }
	 for(int i=0;i<10;i++)  
    {  
        cout<<arr[i];  
    } 
	 
	 
	 
	 
	 return 0;
	 }
minimumu_bulma(int min,int arr[]){
	int j;
	int i;
	int n;
	min=arr[i];
	for(j=0;j<n;j++){
		if(arr[j]<arr[i]){
			min=arr[j];
		}
	}
	return j;
}
	 
