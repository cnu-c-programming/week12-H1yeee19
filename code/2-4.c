#include <stdio.h>

int main(int argc, const char* argv[]) {
    if (argc < 2)
        return 0;

    FILE* fp = fopen(argv[1], "r");

    int count[26] = {0};
    int c;  // 문자를 저장하는 변수: 문자를 아스키 코드(숫자)로 저장

    while ((c = fgetc(fp)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            count[c - 'a']++;
            // 아스키 코드: 문자 'a'는 97, 'b'는 98, ... 'z'는 122
            // c(읽은 문자) - 'a'(97)는 0부터 25까지의 인덱스를 생성
        }
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }
    fclose(fp);
    return 0;
}

