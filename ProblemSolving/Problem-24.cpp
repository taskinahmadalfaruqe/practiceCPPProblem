#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) result.push_back(arr1[i++]);
    while (j < arr2.size()) result.push_back(arr2[j++]);

    return result;
}

int main() {
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

    cout << "Merged Sorted Array: ";
    for (int num : mergedArray) {
        cout << num << " ";
    }

    return 0;
}
