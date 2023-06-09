/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This file contains the functions to analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set.
 *
 * The functions in this file can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. 
 * In addition, the functions can reorder this data set from large to small. All statistics should be rounded down to the nearest integer.
 * After analysis and sorting is done, the data is printed to the screen in nicely formatted presentation.
 *
 * The file contains the following functions:
 *      main() - The main entry point for your program
 *      print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *      print_array() - Given an array of data and a length, prints the array to the screen
 *      find_median() - Given an array of data and a length, returns the median value
 *      find_mean() - Given an array of data and a length, returns the mean
 *      find_maximum() - Given an array of data and a length, returns the maximum
 *      find_minimum() - Given an array of data and a length, returns the minimum
 *      sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.)
 *
 * @author Ihsan Ozan YILDIRIM
 * @date Sunday, 19 March 2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */

    sort_array(test, SIZE);
    printf("Sorted Array: ");
    print_array(test, SIZE);

    printf("Statistics:\n");
    print_statistics(test, SIZE);

}

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * Given an array of data and a length, this function prints the statistics of the data set including minimum, maximum, mean, and median.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return None
 */
void print_statistics(unsigned char* data, unsigned int length) {
    unsigned char minimum = find_minimum(data, length);
    unsigned char maximum = find_maximum(data, length);
    unsigned char mean = find_mean(data, length);
    unsigned char median = find_median(data, length);

    printf("Statistics:\n");
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);
    printf("Mean: %d\n", mean);
    printf("Median: %d\n", median);
}

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return None
 */
void print_array(unsigned char *data, unsigned int length) {
    printf("Array: [");
    for(int i=0; i<length; i++) {
        printf("%u", data[i]);
        if(i != length-1) {
            printf(", ");
        }
    }
    printf("]\n");
}

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * Given an array of data and a length, returns the median value.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_median(unsigned char *data, unsigned int length) {
    // sort the array first
    sort_array(data, length);

    // calculate median based on the length of the array
    if (length % 2 == 0) {
        // if length is even, average the middle two elements
        return (data[length / 2 - 1] + data[length / 2]) / 2;
    } else {
        // if length is odd, return the middle element
        return data[length / 2];
    }
}

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * Given an array of data and a length, returns the mean.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_mean(unsigned char *data, unsigned int length) {
    unsigned int sum = 0;
    for(unsigned int i = 0; i < length; i++) {
        sum += data[i];
    }
    return (unsigned char) (sum / length);
}

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * Given an array of data and a length, returns the maximum.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_maximum(unsigned char *data, unsigned int length) {
    unsigned char max = data[0];
    for (int i = 1; i < length; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * Given an array of data and a length, returns the minimum.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return An unsigned char result from the function
 */
unsigned char find_minimum(unsigned char *data, unsigned int length) {
    unsigned char min = data[0];

    for (int i = 1; i < length; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }

    return min;
}

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest
 *
 * This function takes an array of data and a length as inputs and sorts the array
 * from largest to smallest using bubble sort algorithm. The zeroth element will be
 * the largest value, and the last element (n-1) should be the smallest value.
 *
 * @param data A pointer to the unsigned char data array to be sorted
 * @param length An unsigned integer as the size of the array
 *
 * @return None
 */
void sort_array(unsigned char *data, unsigned int length) {
    unsigned char temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}


