#include <iostream>
using namespace std;

void findMaxMin(int arr[], int n, int &maxi, int &mini) {
    maxi = arr[0];
    mini = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        } else if (arr[i] < mini) {
            mini = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 77, 8, 90, 2, 1, -1, -13, -2, 34, 5, 67, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxi, mini;
    findMaxMin(arr, n, maxi, mini);
    cout << "Maximum number is :" << maxi << endl;
    cout << "Minimum number is :" << mini;
    return 0;
}