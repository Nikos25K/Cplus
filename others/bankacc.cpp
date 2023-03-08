#include<iostream>
using namespace std;
class acc{
    public:
        acc(int n_sum);
        void deposit(int n_sum);
        int withdrawal(int n_sum);
        void show();
    private:
        int sum;
};

int main(){
    acc account(200);
    int num;
    account.show();
    cout<<endl<<"Give 1 for deposit or 2 for withdrawal"<<endl;
    cin>>num;
    if(num!=1 && num!=2){
        cout<<endl<<"Wrong Input";
        return -1;
    }
    else if(num==1){
        int sum;
        cout<<endl<<"Give sum to deposit"<<endl;
        cin>>sum;
        if(sum<0){
            cout<<endl<<"Wrong Input";
            return -1;
        }
        else
            account.deposit(sum);
            account.show();

    }
    else{
        int sum;
        cout<<endl<<"Give sum to withdraw"<<endl;
        cin>>sum;
        if(sum<0){
            cout<<endl<<"Wrong Input";
            return -1;
        }
        else
            account.withdrawal(sum);
            account.show();
    }
    return 0;
}
acc::acc(int n_sum){
    sum=n_sum;
}
void acc::deposit(int n_sum){
    sum+=n_sum;
}
int acc::withdrawal(int n_sum){
    if(sum>=n_sum){
        sum-=n_sum;
        cout<<endl<<"Withdrew: "<<n_sum;
        return 0;
    }
    else{
        cout<<endl<<"Could not withdraw";
        return -1;
    }
}
void acc::show(){
    cout<<endl<<"Remaining: "<<sum;
}