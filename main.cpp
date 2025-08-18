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
//     for(int val:arr){
//         cout << val << " ";
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
//     for(int val:arr){
//         cout << val << " ";
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
//     for(int val:arr){
//         cout << val << " ";
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
//     for(int val:arr){
//         cout << val << " ";
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
//     for(int val:arr1){
//         cout << val << " ";
//     }
//     cout << endl;
//     for(int val:arr2){
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }
//
// NEXT PERMUTATION
// #include<vector>
// #include "./Modules/NextPermutation.cpp"
// int main(){
//     vector<int> arr = {1, 2, 3};
//     NextPermutation(arr);
//     for(int val:arr){
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

// isPalindrome
// #include <string>
// #include "./Modules/PalindromeString.cpp"
// int main(){
//     string str = "racecar";
//     cout << isPalindrome(str) << endl;
//     return 0;
// }

// VALID PALINDROME
// #include<string>
// #include "./Modules/PalindromeString.cpp"
// int main(){
//     string str = "racecar";
//     cout<<ValidPalindrome(str)<<endl;
//     return 0;
// }
//
// REMOVE OCCURENCES FROM A STRING.
// #include<string>
// #include<iostream>
// #include "./Modules/RemoveOccurences.cpp"
// int main(){
//     string str = "daabcbaabcbc";
//     string part = "abc";
//     cout << removeOccurences(str, part) << endl;
//     return 0;
// }

// PERMUTATION IN STRING
// #include <string>
// #include<iostream>
// #include "./Modules/StringPermutation.cpp"
// int main(){
//     string str1 = "ab";
//     string str2 = "eidbaooo";
//     cout << stringPermutation(str1, str2) << endl;
//     return 0;
// }

// REVERSE WORDS IN STRING
// #include<string>
// #include<iostream>
// #include "./Modules/ReverseString.cpp"
// int main(){
//     string str = "the sky is blue";
//     cout << reverseWords(str) << endl;
//     return 0;
// }

// STRING COMPRESSION
// #include<vector>
// #include "./Modules/StringCompression.cpp"
// int main(){
//     vector<char> arr = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
//     stringCompress(arr);
//     for(char a:arr){
//         cout<<a<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// MATH FUNCTIONS
// #include "./Modules/MathFunctions.cpp"
// int main(){
//     int n = 153, a = 20, b = 28;
//     cout << isPrimeNum(n) << endl;
//     cout << countPrimes(n) << endl;
//     cout << countDigits(n) << endl;
//     cout << isArmstrong(n) << endl;
//     cout << findGCD(a, b) << endl;
//     cout << euclidGCD(a, b) << endl;
//     cout << euclidGCDRec(a, b) << endl;
//     cout << getlcm(a, b) << endl;
//     cout << reverseNumUsingStrings(n) << endl;
//     cout << reverseNum(n) << endl;
//     cout << palindromeNum(n) << endl;
//     return 0;
// }
//
// 2D ARRAYS
// #include "./Modules/2dArrays.cpp"
// int main(){
//     int rows=3, cols=3, key=8;
//     // LINEAR SEARCH USING 2D ARRAYS
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     std::pair<int, int> LinearArr = LinearSearch(arr, rows, cols, key);
//     cout << LinearArr.first << " : " << LinearArr.second << endl;
//     // CALCULATING THE HIGHEST SUM OF THE ROWS IN AN ARRAY.
//     cout << MaxRowSum(arr, rows, cols) << endl;
//     // CALCULATING THE HIGHEST SUM OF THE COLS IN AN ARRAY.
//     cout << MaxColSum(arr, rows, cols) << endl;
//     // CALCULATING THE SUM OF DIAGONALS IN AN ARRAY.
//     cout << DiagonalSum(arr, rows) << endl;
//     return 0;
// }

// 2D VECTORS
// #include<vector>
// #include "./Modules/2dVectors.cpp"
// int main(){
//     int key=8;
//     // LINEAR SEARCH USING 2D VECTOR
//     vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     std::pair<int, int> LinearVec = LinearSearch(vec, key);
//     cout << LinearVec.first << " : " << LinearVec.second << endl;
//     // CALCULATING THE HIGHEST SUM OF THE ROWS IN AN VECTOR.
//     cout << MaxRowSum(vec) << endl;
//     // CALCULATING THE HIGHEST SUM OF THE COLS IN AN VECTOR.
//     cout << MaxColSum(vec) << endl;
//     // CALCULATING THE SUM OF DIAGONALS IN AN VECTOR.
//     cout << DiagonalSum(vec) << endl;
//     return 0;
// }


// BINARY SEARCH IN 2D MATRIX
// #include<vector>
// #include "./Modules/SearchMatrix.cpp"
// int main(){
//     // BINARY SEARCH IN 2D MATRIX - 1
//     vector<vector<int>> vec1 = {{1, 2, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
//     std::pair<int, int> Mat1Vec = MatrixSearch1(vec1, 34);
//     cout << Mat1Vec.first << " : " << Mat1Vec.second << endl;

//     // BINARY SEARCH IN 2D MATRIX - 2
//     vector<vector<int>> vec2 = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
//     std::pair<int, int> Mat2Vec = MatrixSearch2(vec2, 5);
//     cout << Mat2Vec.first << " : " << Mat2Vec.second << endl;
//     return 0;
// }


// SPIRAL MATRIX
// #include<vector>
// #include "./Modules/SpiralMatrix.cpp"
// int main(){
//     vector<vector<int>> vec = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     vector<int> spiralOut = getSpiral(vec);
//     for(int spiral:spiralOut){
//         cout << spiral << " ";
//     }
//     cout<<endl;
//     return 0;
// }


// TWO SUM
// #include<vector>
// #include "./Modules/TwoSum.cpp"
// int main(){
//     vector<int> vec = {5, 2, 11, 7, 15};
//     pair<int, int> out = TwoSum(vec, 9);
//     cout << out.first << ", " << out.second << endl;
//     return 0;
// }

// FIND MISSING & DUPLICATE VALUES
// #include<vector>
// #include "./Modules/FindMissingDuplicate.cpp"
// int main(){
//     vector<vector<int>> vec = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
//     pair<int, int> out = FindMissingDuplicate(vec);
//     cout << out.first << ", " << out.second << endl;
//     return 0;
// }

// FIND DUPLICATE
#include<vector>
#include "./Modules/FindMissingDuplicate.cpp"
int main(){
    vector<int> vec = {3, 1, 3, 4, 2};
    cout << FindDuplicate(vec) << endl;
    return 0;
}
