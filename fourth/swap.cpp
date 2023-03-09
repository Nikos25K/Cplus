#include<iostream>
using namespace std;
class point{
    public:
        point();
        point(double new_x,double new_y);
        void set_x(double new_x);
        void set_y(double new_y);
        double get_x() const;
        double get_y() const;
        void print();
    private:
        double x;
        double y;
};

void swap(int &x,int &y){
int temp;
temp=x;
x=y;
y=temp;
}

void swap(double &x,double &y){
double temp;
temp=x;
x=y;
y=temp;
}

void swap(point &x,point &y){
point temp;
temp=x;
x=y;
y=temp;
}

int main(){
    point a(1.1,3.4);
    point b(23.53,12.13);
    swap(a,b);
    a.print();
    b.print();
    return 0;
}

point::point(){
    x=0.0;
    y=0.0;
}

point::point(double new_x,double new_y){
    x=new_x;
    y=new_y;
}

void point::set_x(double new_x){
    x=new_x;
}

void point::set_y(double new_y){
    y=new_y;
}

 double point::get_x() const{
    return x;
 }

 double point::get_y() const{
    return y;
 }

 void point::print(){
    cout<<"("<<x<<","<<y<<")"<<endl;
 }