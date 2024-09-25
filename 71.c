//Find the number of words sentences vowels consonants punctuation marks in a text file in c program.

#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int words = 0, sentences = 0, vowels = 0, consonants = 0, punctuations = 0;

    file = fopen("input.txt", "r");  // Open the file (replace "input.txt" with your file name)
    if (!file) {  // Check if the file opened successfully
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {  // Read each character
        if (ch == ' ' || ch == '\n') words++;  // Count words by spaces and new lines
        if (ch == '.' || ch == '!' || ch == '?') sentences++;  // Count sentences by ending marks
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowels++;  // Count vowels
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) consonants++;  // Count consonants
        if (ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ';' || ch == ':') punctuations++;  // Count punctuation marks
    }

    fclose(file);  // Close the file

    printf("Words: %d\nSentences: %d\nVowels: %d\nConsonants: %d\nPunctuation Marks: %d\n", 
           words + 1, sentences, vowels, consonants - vowels, punctuations);  // Print results

    return 0;
}