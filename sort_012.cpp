#include <iostream>
#include<vector>
using namespace std;

void sort_012(vector<int> n){
    int flag0=0,flag1=0,flag2=0;
    for(int i=0;i<n.size();i++){
        if(n[i]==0) flag0++;
        else if(n[i]==1) flag1++;
        else flag2++;
        
        if(flag1+flag2+flag0==n.size()){
            for(int i=0;i<flag0;i++){
            n[i]=0;
            cout<<n[i];
            }
            
            for(int i=flag0;i<flag0+flag1;i++){
                n[i]=1;
                cout<<n[i];
            }
            
            for(int i=flag0+flag1;i<flag0+flag1+flag2;i++){
                n[i]=2;
                cout<<n[i];
            }
        }
    }
}

int main(){
    vector<int> n={0,1,2,1,1,2,0};

    sort_012(n);

return 0;
}