#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <ctype.h>

// Helper function that takes in a char array and checks if it's an int. 0 = false, 1 = true.
int isInt(char arr[]) {
    int i = 0;
    if (arr[0] == '-') { // check for the negative sign
       i = 1;
    }
    while (arr[i] != '\0') {
        if (!isdigit(arr[i])) { // check if the array value is between ASCII 0 and 9
            return 0; // return 0 if not an integer
        }
        i++;
    }
    return 1; // return 1 if it's an int
}

// This program takes in two integer arguments & outputs the sum of the values.
// NOTE: Program includes only basic error-checking.
int main(int argc, char *argv[]) {
	if (argc != 3) { // Exit if two args weren't passed
        printf("Error: Program requires two integer arguments to run. Now exiting.\n");
        return 0;
    }

    if (isInt(argv[1]) + isInt(argv[2]) != 2) { // Exit if the two arguments aren't ints
        printf("Error: One or more arguments are not integers. Now exiting.\n");
        return 0;
    }

    printf("The sum of the two values is: %d\n", (atoi(argv[1]) + atoi(argv[2])));

	return 0;
}
