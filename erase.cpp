#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    vector <int> :: iterator i;

    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }

    i = v.begin();

    v.erase(i+3);
    for(i = v.begin(); i != v.end(); i++){
        cout << *i << " ";
    }
}
