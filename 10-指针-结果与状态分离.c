#include <stdio.h>

/*
作用3:函数的结果和计算状态分开
练习:定义一个函数,将两数相除,获取他们的余数
*/

int getRemainder(int num1,int num2,int* res);

int main(){
    int a =10;
    int b =1;

    int result = 0;
    int flag = getRemainder(a,b,&result);//用一个变量来接收函数返回值的状态

    if(!flag){//0 取反为1 代表ture
        printf("获取到的余数为%d\n",result);
    }
    else{
        printf("除数为0！");
    }
    return 0;
}


//定义一个函数,将两数相除,获取他们的余数，除数不能为0
//return 0/1 → 告诉调用者函数执行成功还是失败
//int* result 指针 → 让函数内部能直接修改调用者的变量（同一块内存）
int getRemainder(int num1,int num2,int* res){
//num1 / num2 num2!=0
    if(num2 == 0){
        return 1;//表示异常 函数运行中断
    }
    *res = num1 % num2;
    return 0;//表示函数成功运行
}