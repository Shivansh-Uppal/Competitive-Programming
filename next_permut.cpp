#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> next_permut(vector<int> n){
    int i = n.size()-2;
        while(i>=0 && n[i+1]<=n[i]) i--;
        if(i>=0){
            int j = n.size()-1;
            while(j>=0 && n[j]<=n[i]) j--;
            swap(n[i],n[j]);
        }
        reverse(n.begin()+i+1,n.end());
    return n;
}

int main(){

    int range;

    cin>>range;

    vector<int> n(range);

    for(int i=0;i<range;i++){
        cin>>n[i];
    }

    n=next_permut(n);

    for(int i=0;i<range;i++){
        cout<<n[i];
    }

return 0;
}

//132-> 213 231 312 321

// 121 -> 211

// 3124 -> 3214 3241 3412 3421 4123 4132 4213 4231 4312 4321

//3104-> 3140 3401 3410 4013 4031 4103 4130 4301 4310

// 4874 -> 7448 7484 7844 8447 8474 8744