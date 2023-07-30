#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int n, int key){
    int start =0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid =(start+end)/2;
    }
    return -1;
}


int main(){
int arr[6]={2,4,6,14,25,64};

int key;
cin>>key;

int Index = BinarySearch(arr,6,key);

cout<<"element are present at index : "<<Index;

}
