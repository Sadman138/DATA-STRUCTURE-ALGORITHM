#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int x){

int left=0,right=n-1,mid;
mid=(left+right)/2;
while(left<=right){
if(a[mid]==x){
return mid;
}
else if(a[mid]<x){      
left=mid+1;
}
else{
right=mid-1;
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
int x;
cout<<"Enter the element to be searched";   
cin>>x;
int result=binarysearch(a,n,x);
if(result==-1){
cout<<"Element not found";
}
else{
cout<<x<<" found at index "<<result;
}
}