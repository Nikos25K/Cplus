#include<iostream>
#include<cstring>
using namespace std;
class wizard{
    public:
        wizard(int new_age,char * new_beard,int new_mana);
        void fireball();
        void lightning();
        void wait();
    private:
        int age;
        char beard[20];
        int mana;
};

int main(){
    char str[20]="Grey";
    wizard Gandalf(2019,str,100);
    Gandalf.fireball();
    Gandalf.wait();
    Gandalf.lightning();
    Gandalf.wait();
    Gandalf.wait();
    Gandalf.fireball();
    return 0;
}

wizard::wizard(int new_age, char * new_beard,int new_mana){
    age=new_age;
    strcpy(beard,new_beard);
    mana=new_mana;
}

void wizard::fireball(){
    if(mana>=30){
        mana-=30;
        cout<<endl<<"Fireball "<<"mana:"<<mana;
    }
    else
        cout<<endl<<"Fireball effort (not enough mana)";
   
}

void wizard::lightning(){
    if(mana>=90){
        mana-=90;
        cout<<endl<<"Lightning "<<"mana:"<<mana;
    }
    else
        cout<<endl<<"Lightning effort (not enough mana)";
   
}

void wizard::wait(){
    if(mana<=90)
        mana+=10;
    cout<<endl<<"Wait "<<"mana:"<<mana;
}