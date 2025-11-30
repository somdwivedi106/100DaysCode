#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int is_distinct = 1;
    int diagonal[10]; 
    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                is_distinct = 0;
                break;
            }
        }
        if (is_distinct == 0)
            break;
    }

    if (is_distinct)
        printf("True; Diagonal elements are distinct\n");
    else
        printf("False; Diagonal elements are NOT distinct\n");

    return 0;
}