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
    struct FlightInfo flights[10];                    // Declare an array of FlightInfo structs to store flight data
    for (int f = 0; f < 10; ++f)
    {
        char dest[30];// array to store destination input
        char dt[30];// array to store date input

        printf("Enter destination for flight %d: ", f + 1);     // Prompt user for destination input
        fgets(dest, sizeof(dest), stdin);
        dest[strcspn(dest, "\n")] = '\0';               // Remove newline character from destination input

        printf("Enter date for flight %d: ", f + 1);   // Prompt user for date input
        fgets(dt, sizeof(dt), stdin);
        dt[strcspn(dt, "\n")] = '\0';

        fillFlightInfo(&flights[f], dest, dt);

        printf("\n");
    }

    printf("\n");// Add a line break before printing flight information

    printFlightInfo(flights, 10); // Print flight information

    return 0;
}
