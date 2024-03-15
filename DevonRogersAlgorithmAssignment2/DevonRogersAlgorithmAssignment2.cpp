// DevonRogersAlgorithmAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#pragma comment(lib, "winmm.lib")//required to make the audio play
#include <Windows.h>//plays the audio, doesn't work in online compiler (hunt down functions in the header files)
#include <vector>


//audio is mostly figured out; it plays, but doesn't yet work in online compiler

using namespace std;

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

//the function that merges the arrays together
void merge() {

}

//the mergesort algorithm itself
void mergeSort(vector<int> arr, int const first, int const last) {//either make it void or vector<int>, not sure which yet
    
    vector<int> arr1, arr2;

}

int main()
{
    std::cout << "Please enter the array you would like to sort. Please separate the values with commas.\n";
    
    
    
    
    
    
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
