#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{

    unordered_map<string, int> m;

    pair<string, int> p = make_pair("ajay", 1);
    m.insert(p);
    m["mera"] = 2;
    cout << m["mera"] << endl;
    cout << m.at("ajay") << endl;
    cout << m.size() << endl;
    cout << m.count("ajay") << endl;
    m.erase("ajay");
    cout << m.size() << endl;

    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }   
    return 0;
}