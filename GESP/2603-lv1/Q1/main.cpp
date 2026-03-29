#include <iostream>
using namespace std;
int main(){
    int H1,H2,H3,H4;
    cin>>H1>>H2>>H3>>H4;
    int d1,d2,d3,ds,hs;
    d1=H2-H1;
    d2=H3-H1;
    d3=H4-H1;
    if(d1<0){
        d1=d1*(-1);
    }
    if(d2<0){
        d2=d2*(-1);
    }
    if(d3<0){
        d3=d3*(-1);
    }
    if(d1!=d2&&d2!=d3){
        if(d1<d2){
            ds=H1;
        }else{
            ds=H2;
        }
        if(ds<d3){
            ds=ds;
        }else{
            ds=H3;
        }
        cout<<ds;
    }else{
        if(H1<H2){
            hs=H1;
        }else{
            hs=H2;
        }
        if(hs<d3){
            hs=ds;
        }else{
            hs=H3;
        }
        cout<<hs;
    }
}