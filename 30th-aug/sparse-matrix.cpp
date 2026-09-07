// Problem Statement
// A sparse matrix is a matrix in which most of the elements are zero. Storing such a matrix in normal 2D form wastes memory because zero values are stored unnecessarily.

// Write a C program to:

// Read a matrix of size rows × columns from the user.
// Display the original matrix.
// Convert it into sparse matrix triplet form.
// Print the triplet representation of the matrix.
// Triplet representation
// In triplet form, a sparse matrix is represented as:

// First row stores:
// number of rows
// number of columns
// total number of non-zero elements
// Each subsequent row stores:
// row index
// column index
// non-zero value  
// Example:
// If the matrix is:

// 1 0 0
// 0 5 0
// 0 0 9

// Then its triplet form is:

// 3 3 3
// 0 0 1
// 1 1 5
// 2 2 9

#include<iostream>

int main(){
    int i,j,k,triplet;

    cout<
} 
