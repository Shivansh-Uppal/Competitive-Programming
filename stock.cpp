#include <iostream>
#include<math.h>
#include<vector>

using namespace std;

void max_profit(vector<int> n){
    int max=n[0],min=n[0],profit=0;

    for(int i=0;i<n.size();i++){
        if(n[i]<min){
            min=n[i];
            max=n[i];
        }
        if(n[i]>max){
            max=n[i];
        }
        if(max-min>profit){
            profit=max-min;
        }
    }
    cout<<profit;
    }

int main(){
    vector <int> n={2,4,1};

    max_profit(n);

return 0;
}