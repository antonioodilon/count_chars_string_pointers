#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stddef.h>

int countChars(const char * paramPointer);
int countCharsModified(const char* paramPointer);
int countCharsAlt(const char * paramPointer);

int main(void){
    const char testString[] = "This is your mask";
    //const char testString[] = "";
    char testString2[] = "I am Vengeance, I am the Night. I am Batman!";
    const char testString3[] = "I am Vengeance";
    printf("The string %s has %d chars\n", testString, countChars(testString));
    printf("The string %s has %d chars\n", testString2, countChars(testString2));

    printf("\n-----Separating output-----\n\n");

    printf("%d\n", countCharsModified(testString));

    printf("\n-----Separating output-----\n\n");

    printf("%d\n", countCharsAlt(testString3));

    return 0;
};

int countChars(const char * paramPointer)
{
    int lengthString;
    const char* pBeginning = paramPointer;

    while(*paramPointer)
    {
        paramPointer++;
    };

    const char * pEnd = paramPointer;
    lengthString = pEnd - pBeginning;

    return lengthString;
};

int countCharsModified(const char * paramPointer)
{
    int lengthString;
    const char * pBeginning = paramPointer;

    while(*paramPointer)
    {
        printf("%c ::: Address in memory: %p\n", *paramPointer, paramPointer);
        paramPointer++;
    };


    const char * pEnd = paramPointer;
    lengthString = pEnd - pBeginning;

    return lengthString;
};

// Another way:
int countCharsAlt(const char * paramPointer)
{
    const char * lastAddressMemory = paramPointer;

    while (*lastAddressMemory)
    {
        ++lastAddressMemory;
    };

    // Returning the length of the string:
    return lastAddressMemory - paramPointer;
};