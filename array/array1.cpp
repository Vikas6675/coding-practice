#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int number[5]={1,2,3,4,5};
cout<<"value of index 4 :"<<number[4]<<endl;

int third[15]={2,7};
//int n=15;
printArray(third, 15);
int thirdSize =sizeof(third)/sizeof(int);
cout<<"size of third is :"<<thirdSize;



}