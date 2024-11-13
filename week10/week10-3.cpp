#include<iostream>
#include<string>
using namespace std;
class  Cat{
    public:
    string name;
        void print(){
            cout<<"I am a Cat, My name is"<<name<<endl;
        }
};
int main(){
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
Cat cat1,cat2;
cat1.name="87";
cat1.print();
cat2.name="987";
cat2.print();

}