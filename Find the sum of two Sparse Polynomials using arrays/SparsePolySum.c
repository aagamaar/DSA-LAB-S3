#include <stdio.h>

void main() {
    int n, m, i, j, k;

    // 1. Get the number of terms
    printf("Enter number of terms in the first and second polynomials: ");
    if (scanf("%d %d", &n, &m) != 2 || n < 0 || m < 0) {
        printf("Invalid input for term counts.\\n");
        return;
    }

    // CRITICAL FIX: Declare the arrays after n and m are read (Variable Length Arrays - VLAs)
    int P1[n][2], P2[m][2], P3[n + m][2];

    // 2. Input First Polynomial (P1)
    printf("Enter coefficients and exponents of first polynomial (e.g., 5 3 for 5x^3)\\n");
    for (i = 0; i < n; i++) {
        printf("P1 Term %d (Coeff Exp): ", i + 1);
        scanf("%d %d", &P1[i][0], &P1[i][1]); 
    }

    // 3. Input Second Polynomial (P2)
    printf("Enter coefficients and exponents of second polynomial\\n");
    for (i = 0; i < m; i++) {
        printf("P2 Term %d (Coeff Exp): ", i + 1);
        scanf("%d %d", &P2[i][0], &P2[i][1]);
    }

    // 4. Addition Algorithm Setup
    i = 0; // Index for P1
    j = 0; // Index for P2
    k = 0; // Index for P3 (Result)

    // Main comparison loop: Runs as long as there are terms in BOTH P1 and P2
    while (i < n && j < m) {
        // Case 1: Exponents are EQUAL -> Add coefficients
        if (P1[i][1] == P2[j][1]) {
            int sum_coeff = P1[i][0] + P2[j][0];
            
            // Only store the term if the resulting coefficient is NOT zero
            if (sum_coeff != 0) {
                P3[k][0] = sum_coeff;
                P3[k][1] = P1[i][1];
                k++;
            }
            i++; 
            j++;
        } 
        // Case 2: P1's Exponent is GREATER -> Copy P1 term
        else if (P1[i][1] > P2[j][1]) {
            P3[k][0] = P1[i][0];
            P3[k][1] = P1[i][1];
            i++; 
            k++;
        } 
        // Case 3: P2's Exponent is GREATER -> Copy P2 term
        else { // P1[i][1] < P2[j][1]
            P3[k][0] = P2[j][0];
            P3[k][1] = P2[j][1];
            j++; 
            k++;
        }
    }

    // 5. Copy Remaining Terms from P1 (if any)
    while (i < n) {
        P3[k][0] = P1[i][0];
        P3[k][1] = P1[i][1];
        i++; 
        k++;
    }

    // 6. Copy Remaining Terms from P2 (if any)
    while (j < m) {
        P3[k][0] = P2[j][0];
        P3[k][1] = P2[j][1];
        j++; 
        k++;
    }

    // 7. Print Resultant Polynomial (Executed ONCE after all addition is done)
    printf("\nResultant Polynomial (Total terms: %d)\\n", k);
    
    // Reset 'i' for printing P3
    for (i = 0; i < k; i++) {
        // Only print terms where the coefficient is NOT zero
        if (P3[i][0] != 0) {
            printf("%+dx^%d ", P3[i][0], P3[i][1]); 
        }
    }
    printf("\n");
}