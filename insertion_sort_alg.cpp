#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
int i,j,temp;
for(i=0;i<n;i++){
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp){
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
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
insertion_sort(a,n);
cout<<"Sorted array is";
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}