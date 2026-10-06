#include <stdio.h>

int main(){

    int a = 100;
    int* p = &a;
    printf("a=%d\n",a);

    *p = 300;
    printf("a=%d\n",*p);

    char c = 'a';
    char*p1 = &c;
    printf("%zu\n",sizeof(p1)); 
    
    long long n = 100LL;
    long long*p2 = &n;
    printf("%zu\n",sizeof(p2)); 

    



    return 0;
}