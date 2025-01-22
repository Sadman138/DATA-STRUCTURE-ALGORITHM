#include<iostream>
using namespace std;
int linearsearch (int a[],int n, int x){
for(int i=0;i<n;i++){
if(a[i]==x){
return i;
}
}
return -1;
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
int result=linearsearch(a,n,x);
if(result==-1){
cout<<"Element not found";
}
else{
cout<<x<<" found at index "<<result;
}
}