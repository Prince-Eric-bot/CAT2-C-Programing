/*
Name: Erick Mburu
Reg: PA106/G/28729/25
Desc: question 3
*/
#include <stdio.h>

void writeIntegers() {
    FILE *f = fopen("input.txt", "w");
    if (f == NULL) {
        printf("Error opening input.txt\n");
        return;
    }

    int num;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);
        fprintf(f, "%d\n", num);
    }
    fclose(f);
}

void calculateSumAverage() {
    FILE *f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("Error reading input.txt\n");
        return;
    }

    int num, sum = 0, count = 0;
    while (fscanf(f, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(f);

    float avg = (float)sum / count;

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error writing output.txt\n");
        return;
    }

    fprintf(out, "Sum: %d\nAverage: %.2f\n", sum, avg);
    fclose(out);
}

void displayFiles() {
    char line[100];

    FILE *f = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "r");

    if (f == NULL || out == NULL) {
        printf("Error opening files\n");
        return;
    }

    printf("\n input.txt \n");
    while (fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }

    printf("\n output.txt \n");
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }

    fclose(f);
    fclose(out);
}

int main() {
    writeIntegers();
    calculateSumAverage();
    displayFiles();
    return 0;
}
