#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;
FILE *fp_src = fopen(argv[1], "r");
    FILE *fp_dst = fopen(argv[2], "w");

    int c;
    while ((c = fgetc(fp_src)) != EOF) {
        fputc(c, fp_dst);   // 읽은 문자 c를 fp_dst에 작성(복사)
    }

    fclose(fp_src);
    fclose(fp_dst);
    return 0;

}

