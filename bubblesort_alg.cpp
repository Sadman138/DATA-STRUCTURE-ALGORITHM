#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
int i,j,temp;
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){   
if(a[j]>a[j+1]){    
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
int main(){
int i,n;
cout<<"Enter the size of the array";
cin>>n;
int a[n];
cout<<"Enter the elemts of array";
for(i=0;i<n;i++){
cin>>a[i];
}
bubble_sort(a,n);
cout<<"Sorted array is";
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}