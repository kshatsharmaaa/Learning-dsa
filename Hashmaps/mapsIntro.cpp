#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    //creation
    unordered_map<string, int> m;

    //insertion 

    //1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);
    
    //3
    pair<string, int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen
    m["mera"] = 2;  //updation will happpen

    //search

    //1
    cout<< m["mera"] << endl;

    //2
    cout << m.at("babbar") << endl;

    //unknown key
    //cout << m.at("unknown") << endl; //this will abort the code
    cout<< m["unknown"] << endl; // this will give  0
    cout << m.at("unknown") << endl; // ab ye bhi 0 dega

    //size
    cout << "Size of map is :" << m.size() << endl;

    //to check presence
    if (m.count("babbar")){
        cout << "Present \n";
    } else {
        cout << "Not present\n";
    }

    //erase
    m.erase("mera");
    cout << "Size of map is :" << m.size() << endl;

    //to access full map

    //1
    // for(auto i:m) {
    //     cout << i.first << " " << i.second << endl;
    // }

    //2 using iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }// unordered map me ky hota h jis order me value dali hoti h usme ni ata h lekin map(ordered_map) me esa hota h


    return 0;
}