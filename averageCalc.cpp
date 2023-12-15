// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Dec/14/2023
// This program gets generate 10 random numbers
// between 1 and 100.It will then calculate the
// average of all the numbers. My program uses a
// list and a loop to do what is listed above.

// Importing C++ libraries to allow input/output,
// and generation of a random number.
#include<iostream>
#include<cstdlib>
#include<random>
#include<iomanip>

    int main() {
    // Declaring constants.
     const int MAX_ARRAY_SIZE = 10;
     const int MAX_NUMBER = 100;
     const int MIN_NUMBER = 0;

     // Declaring array.
     int arrayOfInt[MAX_ARRAY_SIZE];

     // Initializing sum to 0.
     int sum = 0;

     // Declaring variable for random numbers
     // and counter.
     int randomNumber;
     int counter;

     // Explaining my program to the user.
     std::cout <<
     "Welcome! My program will generate 10 numbers from";
     std::cout <<
     "1 to 100 and will calculate their average.\n";

     // This loop generates the random numbers and adds them to the list.
     for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
         // Initializing seed.
         std::random_device rseed;

         // mersenne_twister.
         std::mt19937 rgen(rseed());

        // Setting range for generated numbers to be 0-100.
         std::uniform_int_distribution<int> idist(MIN_NUMBER, MAX_NUMBER);

         // Generating a random number.
         randomNumber = idist(rgen);

         // Appending the list to the random numbers.
         arrayOfInt[counter] = randomNumber;

         // Displaying the generated numbers.
         std::cout << arrayOfInt[counter] <<
         " added to the list at position " <<
         counter << "\n";
     }

        // The second loop calculates the sum and average
        // of the numbers.
        for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
            // Setting my sum variable to add my list to my
            // counter, which will calculate the sum of
            // all the numbers.
            sum += arrayOfInt[counter];
        }
        // Calculating the average.
        // Dividing the sum of all the generated numbers
        // by 10 (amount of numbers).
        // Using float to be more accurate.
        float average = sum / MAX_ARRAY_SIZE;

        // Displaying the average to the user.
        std::cout << "\nThe average of these numbers is "
        << std::fixed << std::setprecision(2) << average;
}
