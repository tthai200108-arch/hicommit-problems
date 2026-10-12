#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    if (t < 15) {
        printf("Phan loai: Lanh\n");
        printf("Chuoi ket qua: LANH\n");
    } 
    else if (t < 25) 
        printf("Phan loai: Mat\n");
        printf("Chuoi ket qua: MAT\n");
    } 
    else if (t < 35) 
        printf("Phan loai: Nong\n");
        printf("Chuoi ket qua: NONG\n");
    } 
    else { 
        printf("Phan loai: Rat nong\n");
        printf("Chuoi ket qua: RAT_NONG\n");
    }

    return 0;
}