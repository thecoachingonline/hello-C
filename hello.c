#include <stdio.h>
#include <string.h>

unsigned long hash(unsigned char *str) {
    unsigned long hash = 5381;
    int c;

    while (c = *str++) {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return hash;
}

int main(void) {
    char message[] = "สวัสดี ชาวโลก!\n";
    unsigned long hashValue = hash(message);

    printf("ข้อความเข้ารหัส: %lu", hashValue);
    return 0;
}
