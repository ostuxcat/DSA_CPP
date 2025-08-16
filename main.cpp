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
#include "./Modules/2dArrays.cpp"
int main(){
    int rows=3, cols=3, key=8;
    // LINEAR SEARCH USING 2D ARRAYS
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::pair<int, int> LinearArr = LinearSearchArray(arr, rows, cols, key);
    cout << LinearArr.first << " : " << LinearArr.second << endl;
    // CALCULATING THE HIGHEST SUM OF THE ROWS IN AN ARRAY.
    cout << MaxRowSum(arr, rows, cols) << endl;
    // CALCULATING THE HIGHEST SUM OF THE COLS IN AN ARRAY.
    cout << MaxColSum(arr, rows, cols) << endl;
    // CALCULATING THE SUM OF DIAGONALS IN AN ARRAY.
    cout << DiagonalSum(arr, rows) << endl;
    return 0;
}
