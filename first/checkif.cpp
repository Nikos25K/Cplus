#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,6,4,9};
    cout<<"Give number to search: ";
    int num,i;
    cin>>num;
    for(i=0;i<5;i++){
        if(arr[i]==num){
            cout<<"Found number in array";
            return 0;
        }
    }
    cout<<"Number not found";
    return 0;
}