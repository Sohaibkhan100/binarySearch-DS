#include<iostream>
using namespace std;

 int main(){
    int size =10;
    int  arr[size] = { 2, 3, 4, 10, 20,33,55,62,70,81};
    int start=0;
    int end = size-1;
    int mid =0;
    int element;
    cout<<"enter the element you want to search = ";
    cin>>element;
    for (int i = 0; i < size; i++){
        int mid=((start+end)/2);
        if (element>arr[mid])
        {
            start=mid+1;
        }
        else if (element<arr[mid])
        {
            end=mid-1;
        }
        else if (element==arr[mid])
        {
            cout<<"found at position"<<" "<<(i+1);
            break;
        } else{
            cout<<"not found";
        }
       
        
      

    }
    
    







 }