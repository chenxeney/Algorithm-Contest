#include<bits/stdc++.h>
using namespace std;
int main(void){
    random_device rd;
    mt19937 g(rd());
    for(int i=0;i<10;++i){
        cout<<g()<<endl;
    }
    cout << "\n";
    return 0;
}
