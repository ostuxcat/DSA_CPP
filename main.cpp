#include <iostream>
using namespace std;
// BUBBLE SORT
// #include <iostream>
// #include <vector>
// #include "./BubbleSort.cpp"
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
// #include "./SelectionSort.cpp"
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
// // INSERTION SORT
// #include<vector>
// #include "./InsertionSort.cpp"
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
#include<vector>
#include "./DutchNationalFlagAlgorithm.cpp"
int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    DutchSort(arr);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
