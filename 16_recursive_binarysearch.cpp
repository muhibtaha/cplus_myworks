#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int left, int right, int target) {
    if (left > right)
        return -1;  // Bulunamadı

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;  // Bulundu

    else if (arr[mid] < target)
        return recursiveBinarySearch(arr, mid + 1, right, target);  // Sağ yarıda ara

    else
        return recursiveBinarySearch(arr, left, mid - 1, target);  // Sol yarıda ara
}


int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = recursiveBinarySearch(arr, 0, size - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}

