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

int main(){
    point ob1(1.1,2.2);
    point ob2(13.12,11.56);
    point ob3;
    cout<<"First point: ";
    ob1.print();
    cout<<"Second point: ";
    ob2.print();
    cout<<"Third point: ";
    ob3.print();
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