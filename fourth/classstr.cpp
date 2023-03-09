#include<iostream>
#include<cstring>
using namespace std;
class str{
    public:
        str();
        str(char *in_str);
        str(const str&ob);
        ~str();
        char *get_s() const;
        int get_l() const;
        void set_s(char *st);
        void print();
    private:
        char *s;
        int size;
};

int main(){
    char string[20]="Hello";
    str st1(string);
    str st2=st1;
    st1.print();
    cout<<endl;
    st2.print();
    cout<<endl;
    strcpy(string,"A new string");
    st2.set_s(string);
    st2.print();
    return 0;
}

str::str(){
    s=NULL;
    size=0;
}
str::str(char *in_str){
    int len=strlen(in_str);
    s= new char[len];
    if(!s)
        cout<<"Could not allocate memory"<<endl;
    strcpy(s,in_str);
}
str::str(const str&ob){
    size=ob.get_l();
    s= new char[size];
    if(!s)
        cout<<"Could not allocate memory"<<endl;
    strcpy(s,ob.get_s());
}
str::~str(){
    delete s;
}
char *str::get_s() const{
    return s;
}
int str::get_l() const{
    return size;
}
void str::set_s(char *st){
    if(s!= NULL){
        delete s;
    size=strlen(st);    
    s= new char[size];
    if(!s)
        cout<<"Could not allocate memory"<<endl;
    strcpy(s,st);    
    }
}
void str::print(){
    cout<<s<<endl;
}