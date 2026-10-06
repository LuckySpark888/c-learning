// #include <stdio.h>

// void swap(int* p1,int* p2);

// int main(){
//     /*
//     定义两个变量,要求交换变量中记录的值
//     注意:交换的代码写在一个新的函数swap中
//     */

//     int a = 1;

//     int b = 3;

//     swap(&a,&b);
//     return 0;
// }

// void swap(int* p1,int* p2){
//     printf("交换前\na=%d\nb=%d\n",*p1,*p2);
//     int temp = *p1; 
//     *p1 = *p2;
//     *p2 = temp;
//     printf("交换后\na=%d\nb=%d\n",*p1,*p2);

// }

#include <stdio.h>

int* method();

int main(){
    //调用method函数，并使用该函数中的变量a;
    int*p1 = method();
    printf("-------\n");
    printf("%d\n",p1);

    return 0;
}

//定义一个method函数，并返回变量a的地址
int* method(){
    static int a =20;//函数运行完后局部变量的内存空间被释放 加上static就不会
    return &a;
}