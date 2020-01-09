#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
// 对b.txt文件进行解密操作，生成c.txt文件
int main(void){
    FILE *fp1 = fopen("XXX/b.txt", "r");
    FILE *fp2 = fopen("XXX/c.txt", "w");
    
    if (!fp1 || !fp2 ) {
        return -1;
    }
    int ch;
    
    while ((ch=fgetc(fp1)) !=EOF ) {
        // 加密算法就是对每个字符进行加操作
        ch--;
        printf("%c\n",ch);
        fputc(ch, fp2);
    }
    return EXIT_SUCCESS;
}

