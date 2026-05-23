#include <stdio.h>

int main(int argc, const char* argv[]) {
    const char* filename = "numbers.txt";

    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        return 0;
    }


    int sum = 0;
    int num, c;
   char buf[100];
    while ((c = fscanf(fp, "%d", &num)) != EOF) {
        sum += num;
        if (c == 0) {
            fscanf(fp, "%s", buf);
            fprintf(stderr, "invalid input %s\n", buf);
        }
    }


    printf("sum: %d\n", sum);
    fclose(fp);
    return 0;
}
