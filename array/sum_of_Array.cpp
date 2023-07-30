#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int sum = INT16_MAX || INT16_MIN;

for(int i=1;i<n;i++){
  sum = sum + num[i];
}
return sum;
}


int main(){

int size ;
cin>>size;

int num[50];
for(int i=0; i<size; i++){
    cin>>num[i];
}
 cout<<"Max value is "<<getMin(num,size)<<endl;



}