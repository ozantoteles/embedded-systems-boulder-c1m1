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
 * @file stats.h
 * @brief This header file contains function declarations for analyzing an array of unsigned char data items
 *
 * This header file contains function declarations for analyzing an array of unsigned char data items
 * and reporting analytics on the maximum, minimum, mean, and median of the data set. In addition,
 * it provides function declarations for reordering the data set from large to small.
 *
 * Author: Ihsan Ozan YILDIRIM
 * Date: Monday, 20 March 2023
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * Given an array of data and a length, prints the statistics of the data including minimum, maximum,
 * mean, and median.
 *
 * @param data An unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return None
 */
void print_statistics(unsigned char *data, unsigned int length);

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
void print_array(unsigned char *data, unsigned int length);

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
unsigned char find_median(unsigned char *data, unsigned int length);

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
unsigned char find_mean(unsigned char *data, unsigned int length);

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
unsigned char find_maximum(unsigned char *data, unsigned int length);

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
unsigned char find_minimum(unsigned char *data, unsigned int length);

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
void sort_array(unsigned char *data, unsigned int length);

#endif /* __STATS_H__ */
