#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    vector <int> :: iterator i;

    for(int i = 1; i <= 5; i++){
        v.push_back(i);
    }

    for(i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}
