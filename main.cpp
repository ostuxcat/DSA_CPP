#include <iostream>
using namespace std;
// BUBBLE SORT
// #include <iostream>
// #include <vector>
// #include "./Modules/BubbleSort.cpp"
// using namespace std;
// int main(){
//     vector<int> arr = {4, 1, 5, 2, 3};
//     BubbleSort(arr);
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// SELECTION SORT
// #include<vector>
// #include "./Modules/SelectionSort.cpp"
// int main(){
//     vector<int> arr = {4, 1, 5, 2, 3};
//     SelectionSort(arr);
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// INSERTION SORT
// #include<vector>
// #include "./Modules/InsertionSort.cpp"
// int main(){
//     vector<int> arr = {4, 1, 5, 2, 3};
//     InsertionSort(arr);
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// DUTCH NATIONAL FLAG ALGORITHM
// #include<vector>
// #include "./Modules/DutchNationalFlagAlgorithm.cpp"
// int main(){
//     vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
//     DutchSort(arr);
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// MERGE 2 SORTED ARRAYS
// #include<vector>
// #include "./Modules/MergeSortedArray.cpp"
// int main(){
//     vector<int> arr1 = {1, 2, 3, 0, 0, 0};
//     vector<int> arr2 = {2, 5, 6};
//     int m=3, n=3;
//     MergeSortedArray(arr1, m, arr2, n);
//     for(int i=0;i<arr1.size();i++){
//         cout << arr1[i] << " ";
//     }
//     cout << endl;
//     for(int i=0;i<arr2.size();i++){
//         cout << arr2[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// NEXT PERMUTATION
#include<vector>
#include "./Modules/NextPermutation.cpp"
int main(){
    vector<int> arr = {1, 2, 3};
    NextPermutation(arr);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
