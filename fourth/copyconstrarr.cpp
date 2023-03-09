#include<iostream>
using namespace std;
class arr{
    public:
        arr(int n_size);
        ~arr();
        arr(const arr&ob);
        void set_i(int i,int num);
        int get_i(int i);
        int get_size() const;
        void print();
    private:
        int *p;
        int size;
};

int main(){
    int s=10;       //size of array
    arr arr1(s);
    arr arr2=arr1;
    cout<<"Second"<<endl;
    for(int i=0;i<s;i++)
        arr2.set_i(i,2*i);
    arr2.print();
    cout<<endl<<"First"<<endl;
    for(int i=0;i<s;i++)
        arr1.set_i(i,i*i);
    arr1.print();
    return 0;
}

arr::arr(const arr&ob){
    size=ob.get_size();
    p=new int[size];
    if(!p)
        cout<<"Could not allocate memory"<<endl;
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
int arr::get_size() const{
    return size;
}
void arr::print(){
    for(int i=0;i<size;i++)
        cout<<p[i]<<' ';
}