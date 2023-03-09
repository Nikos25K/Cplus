#include<iostream>
using namespace std;
class arr{
    public:
        arr(int n_size);
        ~arr();
        void set_i(int i,int num);
        int get_i(int i);
        void print();
    private:
        int *p;
        int size;
};

int main(){
    int s=10;       //size of array
    arr arr1(s);
    for(int i=0;i<s;i++)
        arr1.set_i(i,i*i);
    arr1.print();    
    return 0;
}
arr::arr(int n_size){
    size=n_size;
    p=new int[size];
    if(!p)
        cout<<"Could not allocate memory"<<endl;
    
}
arr::~arr(){
    delete[]p;
}
void arr::set_i(int i,int num){
    if(i>=0 && i<size)
        p[i]=num;
    else
        cout<<"Error out of bounds"<<endl;    
}
int arr::get_i(int i){
    if(i>=0 && i<size)
        return p[i];
     else
        cout<<"Error out of bounds"<<endl;
    return -1;            
}
void arr::print(){
    for(int i=0;i<size;i++)
        cout<<p[i]<<endl;
}