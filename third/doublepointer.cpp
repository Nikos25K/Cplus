#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<"x: "<<x<<" Adress: "<<&x<<endl;
    int *p;
    p=&x;
    cout<<"p: "<<p<<" Adress: "<<&p<<endl;
    cout<<"x via p: "<<*p<<endl;
    int **pp;
    pp=&p;
    cout<<"pp: "<<pp<<" Adress: "<<&pp<<endl;
    cout<<"x via pp: "<<*(*pp)<<endl;
    cout<<"p via pp: "<<*pp<<endl;
    return 0;
}