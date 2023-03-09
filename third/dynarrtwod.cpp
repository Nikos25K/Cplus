#include<iostream>
using namespace std;
class arr{
	public:
	arr(int n_size);
	~arr();	
	void set_i(int i,int j,int num);
	int get_i(int i,int j);
	void print();
	private:
	int **p;
	int size;	
};
int main(){
	arr array(10);
	int n=0;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
			array.set_i(i,j,n++);
	}
	array.print();
	return 0;
}
arr::arr(int n_size){
	size=n_size;
	p=new int*[size];
	for(int i=0;i<size;i++)
		p[i]=new int[size];
}
arr::~arr(){
	for(int i=0;i<size;i++)
		delete[]p[i];
	delete[]p;	
}
void arr::set_i(int i,int j,int num){
	if(i<0 ||i>size || j<0 || j>size)
		cout<<"Error out of bounds"<<endl;
	else
		p[i][j]=num;	
}
int arr::get_i(int i,int j){
	if(i<0 ||i>size || j<0 || j>size)
		cout<<"Error out of bounds"<<endl;
	else
		return p[i][j];
    return -1;    
}
void arr::print(){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++)
			cout<<p[i][j]<<' ';
		cout<<endl;	
	}
}