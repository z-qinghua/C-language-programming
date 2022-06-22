#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "1234567890";
    char str2[] = "china";
    int l1 = strlen(str1);
    int l2 = strlen(str2);
    int l3;
    strncpy(str1, str2, 5);
    printf("%s\n", str1);
    l3 = strlen(str1);
    printf("%d %d %d\n", l1, l2, l3);   // Êä³ö10£¬5£¬10£¬²»°üÀ¨'\0'·ûºÅ 
    return 0;
}

