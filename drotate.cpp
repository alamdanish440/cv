#include<iostream>
using namespace std;
void drotate(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int leftrotate(int arr[],int n, int d){
    for(int j=0;j<d; j++)
    drotate;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5,d=2;
    leftrotate(arr,n,d);
    for(int i=0;i<d;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
