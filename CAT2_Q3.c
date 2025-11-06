//simple c programming (hello world)single line comment
/*
Name:Samuel Muthama
Reg No:CT101/G/26523/25
Date:6/11/2025
Description:CAT2_gross tax ,netpay, taxes
*/

#include <stdio.h>
#include <stdlib.h>

// Function to write 10 integers to input.txt
void writeInputFile() {
    FILE *fptr;
    int num, i;

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }

    fclose(fptr);
    printf("Numbers successfully written to input.txt\n\n");
}

// Function to read integers, calculate sum and average, and write to output.txt
void processNumbers() {
    FILE *input, *output;
    int num, sum = 0, count = 0;
    float average;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    // Read integers and calculate sum
    while (fscanf(input, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(input);

    if (count == 0) {
        printf("No numbers found in input.txt!\n");
        return;
    }

    average = (float)sum / count;

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(output, "Sum = %d\n", sum);
    fprintf(output, "Average = %.2f\n", average);

    fclose(output);
    printf("Sum and average written to output.txt\n\n");
}

// Function to display contents of both files
void displayFiles() {
    FILE *fptr;
    char ch;

    printf("Contents of input.txt:\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt!\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\n\nContents of output.txt:\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt!\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);
}

int main() {
    writeInputFile();
    processNumbers();
    displayFiles();
    return 0;
}