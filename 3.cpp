#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num;

    cin>>num;

    int count=0;
    
    num=int(log10(num)+1);

    if(num%2==0){
        count++;
    }

    cout<<count;

return 0;
}