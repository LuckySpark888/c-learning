// #include <stdio.h>
// void sum(){
//     int num1 =10;
//     int num2 =20;
//     int result = num1 + num2;
//     printf("sum:%d", result);
// }

// int main(){
//     sum();
//     return 0;
// }

/*

*/
#include <stdio.h>
void printArr(int arr[],int len);



int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(int);
    printArr(arr,len);
    return 0;
}

void printArr(int arr[],int len){
    printf("在函数内部，sizeof(arr) = %d 字节\n", sizeof(arr));//在函数内部 sizeof(arr) 永远等于指针的大小
    printf("在函数内部，sizeof(arr[0]) = %d 字节\n", sizeof(arr[0]));
    for(int i =0;i<len;i++){
        printf("第%d个索引的值是%d\n",i,arr[i]);
    }
}