#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;

//dynamic array
int **a = new int*[n];

for(int i = 0; i < n; i++){
    a[i] = new int[n];
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
}

// row and column flags
bool row[n] = {0}, col[n] = {0};

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(a[i][j] == 0){
            row[i] = true;
            col[j] = true;
        }
    }
}

cout<<endl;

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(row[i] || col[j]){
            a[i][j] = 0;
        }
    }
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << a[i][j] << " ";
    }
    cout << endl;
}

//delete the dynamic array
for(int i = 0; i < n; i++){
    delete [] a[i];
}
return 0;
}