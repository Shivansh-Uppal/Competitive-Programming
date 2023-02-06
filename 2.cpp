#include <iostream>
#include <algorithm>
#include <vector>
#include<climits>
#include <cstdlib>
#include <ctime>

using namespace std;

int partition(vector<int> &arr, int l, int r) {
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}
int steps=0;
int quick_select(vector<int> &arr, int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int index = partition(arr, l, r);
        steps++;
        if (index - l == k - 1) {
            return arr[index];
        }
        if (index - l > k - 1) {
            return quick_select(arr, l, index - 1, k);
        }
        return quick_select(arr, index + 1, r, k - index + l - 1);
    }
    return INT_MAX;
}

int main() {
    //1000 random numbers
    std::vector<int> arr;
    int count = 1000;

    // seed the random number generator
    srand(time(nullptr));

    // generate random numbers and store them in the vector
    for (int i = 0; i < count; i++) {
        arr.push_back(rand());
    }

    int n = arr.size();
    int k = 10;
    for (int i = 0; i < k; i++) {
        cout << quick_select(arr, 0, n - 1, i + 1) << " "<<endl;
    }
    cout<<steps;
    return 0;
}