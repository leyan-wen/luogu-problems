#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if(N<=100&&N>=90){
        cout<<"A";
    } 
    if(N<=89&&N>=80){
        cout<<"B";
    }
    if(N<=79&&N>=60){
        cout<<"C";
    }
    if(N<=59&&N>=0){
        cout<<"D";
    }
    return 0;
}