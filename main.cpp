// BUBBLE SORT
#include <iostream>
#include <vector>
#include "./BubbleSort.cpp"
using namespace std;
int main(){
    vector<int> arr = {4, 1, 5, 2, 3};
    BubbleSort(arr);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << endl;
    }
    return 0;
}
