#include <iostream>
using namespace std;

int mini(int a[]){
    int min=a[0];
    for(int i=1;i<6;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main(){
    int a[6]={1,5,3,6,4,2};
    int n=6;
    int i;

    for(i=0;i<n;i++){
        if(a[i]==3){
            cout<<"found at loc: "<<i;
            break;
        }
    }

    cout<<"\nminimum element: "<<mini(a);

    int b[3][4]={{1,21,3},{4,5,62},{76,1,83,96}};
    int m=3;
    int j;

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(b[i][j]==1){
                cout<<"\nfound at loc: "<<i+1<<","<<j+1;
                break;
            }
        }
    }

return 0;
}