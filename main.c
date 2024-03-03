#include<stdio.h>
#include<string.h> // Added for string functions

int main()
{
    char subject[20]; // Changed int to char array for subject
    printf("\nEnter Your Subject Name: ");
    scanf("%s", subject); // Removed unnecessary quotes around subject and corrected format specifier

    printf("\nYou Have Entered %s\n", subject); // Changed %d to %s for string printing

    // Compare entered subject with each subject separately
    if (strcmp(subject, "english") == 0 || 
        strcmp(subject, "maths") == 0 || 
        strcmp(subject, "marathi") == 0 || 
        strcmp(subject, "hindi") == 0)
    {
        printf("\nYou Passed\n");
    }    
    else
    {
        printf("\nSubject not found!\n");        
    }

    // Display marks based on the subject
    if (strcmp(subject, "maths") == 0)
    {
        printf("\nMaths Mark = 70\n");
    }
    else if (strcmp(subject, "marathi") == 0)
    {
        printf("\nMarathi Mark = 90\n");
    }
    else if (strcmp(subject, "english") == 0)
    {
        printf("\nEnglish Mark = 100\n");
    }
    else if (strcmp(subject, "hindi") == 0)
    {
        printf("\nHindi Mark = 80\n");
    }

    return 0;
}
