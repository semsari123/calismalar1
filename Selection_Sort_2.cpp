#include <iostream>

using namespace std;

void printArray(int arr[],int size);
int findMinIndex(int a[],int size,int start);

int main()
{
  
    int SIZE=10;
    int array[SIZE]={8,9,15,3,1,8,12,7,2,7};
   
   
    cout<<"Sirasiz array =>"<<endl;
    printArray(array,SIZE);
    cout<<"\n\n";
   
   // {1,9,15,3,8,8,12,7,2,7};
   
   for (int i = 0; i < SIZE; i++) {
          int mIndex=findMinIndex(array,SIZE,i);
          int tmp=array[mIndex];
          array[mIndex]=array[i];
          array[i]=tmp;
   }
   
    cout<<"Sirali array =>"<<endl;
    printArray(array,SIZE);
    cout<<"\n\n";
   
    
    return 0;
}


void printArray(int arr[],int size){
    
    for (int i = 0; i < size; i++) {
        cout << i+1<<". deger= "<<arr[i]<<"\n";
    }
    
}





// {1,9,15,3,8,8,12,7,2,7};
//minimum=1

int findMinIndex(int sayiListesi[],int size,int startIndex){
    
 int minimum=sayiListesi[startIndex];
 int minIndex=startIndex;
 
 for (int i = startIndex+1; i < size; i++) {
        if(minimum > sayiListesi[i]){
             minimum=sayiListesi[i];
             minIndex=i;
        }
           
 }
 
 return minIndex;
}
