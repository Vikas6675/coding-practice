#include<iostream>
using namespace std;

int Search (int arr[], int n,int key){

for(int i=0;i<n;i++){
    if(arr[i]==key){
        return 1;
    }
}
return 0;
}

int main(){

int arr[10] ={5,7,9,-5,6,1,-2,13,4,11};

cout<<"Enter the element to search "<<endl;
int key ;
cin>>key;

bool found = Search(arr,10,key);

 if(found){
    cout<<"key is found"<<endl;
 }
 else{
    cout<<"Key is not present";
 }

}