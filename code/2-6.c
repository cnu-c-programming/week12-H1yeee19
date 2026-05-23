#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[]) {
    if (argc < 3)
        return 0;

    FILE* fp = fopen(argv[1], "r");
    const char* target_str = argv[2];

     char line[256];
    while (fgets(line, sizeof(line), fp)) {
        // fgets(): 파일에서 한 줄씩 읽어서 line 배열에 저장하는 함수, 최대 sizeof(line) - 1 문자까지 읽음
        if (strstr(line, target_str)) {
            // strstr(): line 문자열 안에 target_str이 포함되어 있는지 찾는 함수
            printf("%s", line);
        }
    }
    fclose(fp);
    return 0;
}

