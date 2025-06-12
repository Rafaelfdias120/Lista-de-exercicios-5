#include <stdio.h>

int main(){
    int A[10], B[10], C[10], i, j;

    for ( i = 0; i < 10; i++){
        printf("Digite os valores de A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    for ( i = 0; i < 10; i++){
        printf("Digite os valores de B[%d]: ", i);
        scanf("%d", &B[i]);

    }
    for ( j = 0; j < 10; j++){
        C[j] = A[j] - B[j];
        printf("Vetor C[%d]: %d\n", j, C[j]);
    }
    return 0;
}