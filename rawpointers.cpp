#include<bits/stdc++.h>

int main() {
    int n = 10;
    int* arr = new int[n]; // Dynamically allocates an array of 10 integers on the heap

    // Set some values in the array
    for (int i = 0; i < n; i++) {
    arr[i] = i;
    }

    delete[] arr; // Deallocates the memory assigned to the array
}
