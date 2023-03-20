stats
Statistics Analysis of Unsigned Char Data Items


Project Description
This project analyzes an array of unsigned char data items and reports statistics on the maximum, minimum, mean, and median of the data set. The data set is also reordered from large to small.
The project is implemented as Week 1 Application Assignment of Introduction to Embedded Systems Software and Development Environments Course of University of Colorado Boulder at Coursera

Repository
This repository contains the following files:

stats.c: implementation file for the C-programming code
stats.h: header file for the C-programming code
README.md: includes information on the author and the project

Details

This repository contains the implementation of a C-program that analyzes an array of unsigned char data items and reports analytics on the maximum, minimum, mean, and median of the data set. The data set is also reordered from large to small. All statistics are rounded down to the nearest integer. The implementation includes a few functions such as print_statistics(), print_array(), find_median(), find_mean(), find_maximum(), find_minimum(), and sort_array().

Functions
void print_statistics(unsigned char* arr, unsigned int length)
Prints the statistics of an array including minimum, maximum, mean, and median.

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array
void print_array(unsigned char* arr, unsigned int length)
Given an array of data and a length, prints the array to the screen.

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array
unsigned char find_median(unsigned char* arr, unsigned int length)
Given an array of data and a length, returns the median value.

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array
Output
An unsigned char result from the function.
unsigned char find_mean(unsigned char* arr, unsigned int length)
Given an array of data and a length, returns the mean.

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array
Output
An unsigned char result from the function.
unsigned char find_maximum(unsigned char* arr, unsigned int length)
Given an array of data and a length, returns the maximum.

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array
Output
An unsigned char result from the function.
unsigned char find_minimum(unsigned char* arr, unsigned int length)
Given an array of data and a length, returns the minimum.

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array
Output
An unsigned char result from the function.
void sort_array(unsigned char* arr, unsigned int length)
Given an array of data and a length, sorts the array from largest to smallest. (The zeroth element should be the largest value, and the last element (n-1) should be the smallest value).

Inputs
arr: an unsigned char pointer to an n-element data array
length: an unsigned integer as the size of the array

Author
Ihsan Ozan YILDIRIM

Date
Sunday, 20 March 2023
