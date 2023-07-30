#include<bits/stdc++.h>

using namespace std;

int calc_sum_to_n(int n){
    int sum=0;
    while(n>0){
        sum+=n;
        n--;
    }
    return sum;
}

int main(){
    int n=10;
    int sum=calc_sum_to_n(n);
    cout<<sum<<endl;

    return 0;
}