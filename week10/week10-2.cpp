#include<iostream>
using namespace std;
class  Mouse{
    public:
        void print(){
            cout<<"I am a mouse, 吱吱"<<endl;
        }
};
class  Cat{
    public:
        void print(){
            cout<<"I am a Cat, meow meow"<<endl;
        }
};
int main(){
Mouse mouse1,mouse2;
Cat cat1,cat2;
mouse1.print();
mouse2.print();
cat1.print();
cat2.print();

}