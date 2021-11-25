#include <stdio.h>
#include <string.h>

void toUTF8(int cp, char* str);
int toCodePoint(char* str, int len);

int main(void) {
    char str1[5] = {0x00};

    toUTF8(L'哈', str1);
    printf("%s\n", str1); // 在 UTF-8 終端機下會顯示「林」

    char str2[] = u8"哈";                 // 「林」會使用三個位元組
    printf("%d\n", toCodePoint(str2, 3)); // 顯示 26519

    return 0;
}

void toUTF8(int cp, char* str) {
    if(cp <= 0x7F) { 
        str[0] = cp; 
    }
    else if(cp <= 0x7FF) { 
        str[0] = (cp >> 6) + 192; 
        str[1] = (cp & 63) + 128; 
    }
    else if(0xd800 <= cp && cp <= 0xdfff) {} // 無效區塊
    else if(cp <= 0xFFFF) { 
        str[0] = (cp >> 12) + 224; 
        str[1]= ((cp >> 6) & 63) + 128; 
        str[2]= (cp & 63) + 128; 
    }
    else if(cp <= 0x10FFFF) { 
        str[0] = (cp >> 18) + 240; 
        str[1] = ((cp >> 12) & 63) + 128; 
        str[2] = ((cp >> 6) & 63) + 128; 
        str[3]= (cp & 63) + 128; 
    }
}

int toCodePoint(char* u, int len) {
    if(len < 1) {
        return -1; 
    }

    unsigned char u0 = u[0]; 
    if(u0 >=0 && u0 <= 127) {
        return u0;
    }

    if(len < 2) {
        return -1;
    } 

    unsigned char u1 = u[1]; 
    if (u0 >= 192 && u0 <= 223) {
        return (u0 - 192) * 64 + (u1 - 128);
    }

    if(u[0] == 0xed && (u[1] & 0xa0) == 0xa0) {
        return -1; //code points, 0xd800 to 0xdfff
    }

    if(len < 3) {
        return -1; 
    }

    unsigned char u2 = u[2]; 
    if(u0 >= 224 && u0 <= 239) {
        return (u0 - 224) * 4096 + (u1 - 128) * 64 + (u2 - 128);
    }

    if (len < 4) {
        return -1;
    }

    unsigned char u3 = u[3]; 
    if(u0>=240 && u0<=247) {
        return (u0 - 240) * 262144 + (u1 - 128) * 4096 + (u2 - 128) * 64 + (u3 - 128);
    }

    return -1;
}