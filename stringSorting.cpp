/*
# Author: Nathaniel Carter
# Date Started: 3/27/2024
# Date Finished: 3/28/2024
# Time Spent (dd:hh:mm): 00:00:37
# Goal: The goal of this is to use a basic understading of c++ to make multiple funciton to print and sort an array while considering runtime
*/

#include <iostream>
#include <string>
#include <algorithm>

#define ARRLEN 10


/*
@Function - Compares 2 indexes in an array
@Param string a - The address of an index in the given array
@Param string b - The address of an index in the given array
@Return - True or false based on if the first index given is longer then the second
*/
bool cmp(const std::string& a, const std::string& b) {
    int x = a.length();
    int y = b.length();

    return x < y;
}


/*
@Function - Sort the given array
@Param string array - The given array
@Return - None
*/
void array_sort(std::string array[]) {
    std::sort(array, array + ARRLEN, cmp);
}


/*
@Function - Print out the given array
@Param string array - The given array
@Return - None
*/
void array_contents(const std::string array[]) {
    std::cout << "The current array is | ";

    for (int i = 0; i < ARRLEN; i++) {
        std::cout << array[i] << " | ";
    }
    std::cout << std::endl;
}


int main() {
    std::string array[ARRLEN];
    std::string input = "";

    for (int i = 0; i < ARRLEN; i++) {
        std::cin >> input;
        array[i] = input;
    }

    array_contents(array);
    array_sort(array);
    array_contents(array);

    return 0;
}