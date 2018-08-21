#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mt19937 g(random_device{}());

    shuffle(v.begin(), v.end(), g);

    for(int i=0;i<10;++i){
        cout<<v[i]<<endl;
    }
    cout << "\n";
}
