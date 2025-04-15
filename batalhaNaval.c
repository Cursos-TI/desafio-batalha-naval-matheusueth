#include <stdio.h>
 
int main() {
    int matriz[10][10];
 
    for (int i = 0; i < 10; i++) {     
        for (int j = 0; j < 10; j++) {  
            if (j % 2== 0) {
                matriz[i][j] = 0; 
            } else {
                matriz[i][j] = 0;
            }
        }
    }
 
    // Impressão da matriz
    for (int i = 0; i < 10; i++) {      
        for (int j = 0; j < 10; j++) {  
            printf("%d ", matriz[i][j] );
        }
        printf("\n");
    }
 
    return 0;
}
