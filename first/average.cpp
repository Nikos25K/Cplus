#include<iostream>
using namespace std;
float average(int a,int b){
    return (a+b)/2.0;
}
float average(float a,float b){
    return (a+b)/2;
}
int main(){
    cout<<"Give 1 if float or 2 if int numbers";
    int flag;
    cin>>flag;
    double apot;
    if(flag==1){
        int a,b;
        cout<<"Give first number";
        cin>>a;
        cout<<"Give second number";
        cin>>b;
        apot=average(a,b);
    }
    else if(flag==2){
        float a,b;
        cout<<"Give first number";
        cin>>a;
        cout<<"Give second number";
        cin>>b;
        apot=average(a,b);
    }
    else{
        cout<<"You tried";
        return -1;
    }
    cout<<"Average: "<<apot;
    return 0;
}