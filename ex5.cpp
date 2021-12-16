#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main (){
    set <int> s;
    for (int i=0;i<100;i++){
        s.insert (100-i);
    }
    for (set<int> :: iterator it=s.begin();it!=s.end() ; it++){
        cout<< *it <<endl;
    }
    cout<< s.count(111) <<endl;
    
    return 0;
}
