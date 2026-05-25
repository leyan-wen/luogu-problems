/*
3.1 编程题 1：奇偶相生

试题名称：奇偶相生

时间限制：1.0 s

内存限制：256 MB

题目描述
某种数列 a 定义如下：

a_1 = 1，a_2 = 1；

当 n \ge 3 时： 

若 n 为奇数，则 a_n = a_{n-1} + a_{n-2}；

若 n 为偶数，则 a_n = a_{n-1} - a_{n-2}。



请你给定 N，输出 a_N。
输入格式
一行，包含一个正整数 N（1 \le N \le 30）。
输出格式
一行，包含一个整数，表示 a_N。
样例
输入样例 1
1
输出样例 1
1
输入样例 2
5
输出样例 2
3
输入样例 3
10
输出样例 3
5
*/



#include <iostream>
using namespace std;
int main(){
    int N,a_n,a_n_1,a_n_2;
    cin>>N;
    a_n=1;
    a_n_1=1;
    a_n_2=1;
    for(int i=3;i<=N;i++){
        if(i%2==0){
            a_n=a_n_1-a_n_2;
        }else{
            a_n=a_n_1+a_n_2;
        }
        a_n_2=a_n_1;
        a_n_1=a_n;
    }
    cout<<a_n;
    return 0;
}