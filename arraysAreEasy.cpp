// February 22, 2025

/* Instructions: 
1.) create an array arr of integers with 5 elements
2.) write a program that prints the address of each element in the array using pointer arithmetic
3.) increment a pointer to traverse the array and print each value */

// Due: February 23 (Sunday)
#include <iostream>
using namespace std;

int main() {

    int arr[2][2][2] = {
        {{2, 4}, {6, 8}},
        {{10, 12}, {14, 16}}
    };

    arr [0][0][0] = 1;
    arr [0][0][1] = 2;
    arr [0][0][0] = 3;
    arr [0][1][0] = 4;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                cout << "The memory address of element [" << i << "] [" << j << "] [" << k << "] is " << (&arr[i][j][k]) << ".\n";
            }
        }
    }

    return 0;
}