#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2;
    int b=5;
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=(i*i*i);

    }
    cout<<"Cube of range a to b is:"<<sum;
    return 0;
}
