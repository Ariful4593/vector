#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    v.assign(1, 50 );
    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }

    for(int i = 0; i != v.size(); i++){
        cout << v[i] << " ";
    }
}
