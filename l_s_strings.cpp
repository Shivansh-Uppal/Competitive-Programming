#include <iostream>
using namespace std;

int main() {
    string a="153642";
    char n='3';
    bool found = false;
    for(auto c:a) {
       if (c==n) {
           cout<<"found";
           found = true;
           break;
       }
    }
    
    if(!found) cout<<"not found";
    return 0;
}