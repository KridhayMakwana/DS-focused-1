/*
* File : f1.cpp
* Project : DS Focus Assignmnet 1
* Programmer : Kridhay Makwana
* First version : 2024 - 05 - 16
* Description : Write a program that takes in information about flights and stores the destination and
                date in an array of structs to be displayed. Dynamic memory allocation is used to store
                the strings in the struct.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct FlightInfo {
    // Define the FlightInfo struct
    char* date;                   // Pointer to store the date string
    char* destination;            // Pointer to store the destination string
};
void fillFlightInfo(struct FlightInfo* flight, const char* destination, const char* date);
// Function prototypes
void printFlightInfo(struct FlightInfo flights[], int size);
int main()                       // Main function 
{

    printf("Enter flight information:\n");            // Prompt the user to enter flight information
