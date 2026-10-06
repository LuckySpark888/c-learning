
#include<stdio.h>

// int main()
// {
//     /*
// 需求:
// 定义一个长度为5的数组,并进行初始化:1[2345
// 完成下列要求:
// 1.获取索引为0,2,4的元素,并求和
// 2.把最后一个索引上的元素修改为10
// */
//     int arr[5]={1,2,3,4,5};
//     printf("最后一个索引上的元素值：%d\n",arr[4]);
//     int sum =arr[0]+arr[2]+arr[4];
//     printf("0,2,4元素求和：%d\n",sum);
//     arr[4]=10;
//     printf("最后一个索引上的元素值：%d\n",arr[4]);

//     return 0;
// }
    void printArr(int arr[],int len);

    //调用函数遍历数组
    void printArr(int arr[],int len){
        printf("%p\n",arr);//打印 20（数组总字节数）
        printf("打印函数中的sizeof(arr)=%zu\n",sizeof(arr));//打印 8（指针大小）
        for(int i =0 ; i < len ; i ++){
            printf ("arr[%d]=%d\n",i ,arr[i]);
        }

    }

int main(){
/*
需求:
定义一个长度为5的数组,并进行初始化:12345
遍历数组,并把每一个元素打印到控制台
完成下列要求:
*/
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(int);
    printf("打印数组总大小sizeof(arr)=%zu\n",sizeof(arr));
    printf("数组长度len%d\n",len);
    printArr(arr,len);// 调用你的打印函数
    // //数组遍历1
    // for (int i =0; i<5 ; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // printf("%p\n",arr);
    // printf("%p\n",&arr);
    // printf("sizeof(arr)  = %zu\n", sizeof(arr));     // 输出 20（整个数组占20字节）
    // printf("sizeof(&arr) = %zu\n", sizeof(&arr));    // 输出 8（64位系统下指针占8字节）
    
    return 0;

}