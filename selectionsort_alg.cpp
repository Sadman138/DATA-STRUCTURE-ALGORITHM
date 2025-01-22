#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
int i,j,index_min,temp;

for(i=0;i<n-1;i++){
index_min=i;
for(j=i+1;j<n;j++){
if(a[j]<a[index_min]){
index_min=j;
}
}
if(index_min!=i){
temp=a[i];
a[i]=a[index_min];
a[index_min]=temp;
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
selection_sort(a,n);
cout<<"Sorted array is";
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}















