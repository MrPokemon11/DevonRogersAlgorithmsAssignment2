// DevonRogersAlgorithmAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#pragma comment(lib, "winmm.lib")//required to make the audio play
#include <Windows.h>//plays the audio, doesn't work in online compiler (hunt down functions in the header files)
#include <vector>//allows arrays that change size
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>//allows me to measure the time the sorting takes

//audio is mostly figured out; it plays, but doesn't yet work in online compiler

using namespace std;

//this code is based off of (but not directly copied from) https://www.geeksforgeeks.org/cpp-program-for-merge-sort/


//prints all of the data in the vector that is passed in and wraps it in square brackets
void printArray(vector<int> data) {
    if (data.empty()) {
        cout << "[]";
        return;
    }
    cout << "[ ";
    cout << data[0];
    for (int i = 1; i < data.size();i++) {
        cout << ", ";
        cout << data[i];
    }
    cout << " ]";
    return;
}

//prints all of the data in the vector that is between first and last and wraps it in square brackets
void printArray(vector<int> data, int first, int last) {
    if (data.empty()) {
        cout << "[]";
        return;
    }
    cout << "[ ";
    cout << data[first];
    for (int i = first+1; i < last;i++) {
        cout << ", ";
        cout << data[i];
    }
    cout << " ]";
    return;
}

//the function that merges the arrays together
vector<int> merge(vector<int> arr1, vector<int> arr2) {
    vector<int> returnVector;
    int arr1Iter = 0, arr2Iter = 0;
    while (arr1Iter < arr1.size() && arr2Iter < arr2.size()) {
        if (arr1[arr1Iter] > arr2[arr2Iter]) {//if array 1 at the current array 1 position is larger than array 2 at the current array 2 position, add the value at the current position of array 2 to the larger array, then increase the current position in array 2
            returnVector.push_back(arr2[arr2Iter]);
            arr2Iter++;
        }
        else {
            returnVector.push_back(arr1[arr1Iter]);
            arr1Iter++;
        }
    }

    while (arr1Iter < arr1.size()) {//if there are things left over in array 1, add them to the end of the return vector
        returnVector.push_back(arr1[arr1Iter]);
        arr1Iter++;
    }

    while (arr2Iter < arr2.size()) {//if there are things left over in array 2, add them to the end of the return vector
        returnVector.push_back(arr2[arr2Iter]);
        arr2Iter++;
    }

    cout << "Merge ";
    printArray(arr1);
    cout << " and ";
    printArray(arr2);
    cout << " into ";
    printArray(returnVector);
    cout << endl;
    //play a sound of some kind here, prefereably different from the split one (asyncronously?)

    return returnVector;
}

//the mergesort algorithm itself
vector<int> mergeSort(vector<int> arr, int const first, int const last) {//either make it void or vector<int>, not sure which yet
    if (first >= last) {
        return arr;
    }
    int mid = (first + last) / 2;

    cout << "Split ";
    printArray(arr);
    cout << " into ";
    printArray(arr, first, mid);
    cout << " and ";
    printArray(arr, mid + 1, last);
    cout << endl;
    //play a sound of some kind here (asyncronous?)

    vector<int> arr1, arr2;


}

int main()
{
    std::cout << "Please enter the array you would like to sort. Please separate the values with commas.\n";
    string arra;
    getline(cin, arra);
    getline(cin, arra);
    
    vector<int> numbers;

    std::istringstream iss(arra);
    string s;
    while (std::getline(iss, s, ',')) {
        numbers.push_back(stoi(s));
    }

    int numNums = numbers.size();//the number of numbers

    cout << "The initial array: ";
    printArray(numbers);//print the the unsorted array
    cout << endl;

    vector<int> sorted;
    sorted = mergeSort(numbers, 0, numNums);

    cout << "The sorted array: ";
    printArray(sorted);//print the sorted array
    
    //this is stored here so that i remember it later
    PlaySound(TEXT("SystemHand"), NULL, SND_ALIAS);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
