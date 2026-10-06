#include<stdio.h>
#include <stdlib.h>
#include <time.h>
// //求max
// int arr[] = {33,5,22,44,55};

// int len = sizeof(arr)/sizeof(arr[0]);

// int main(){
// //  遍历数组 求max
//     int max = arr[0];
//     in
//     for(int i = 0; i < len; i++){
//         if (max < arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("max值=%d",max);
//     return 0;
// }



// int main(){
//     //需求：生成10个1-100之间的随机数存入数组 求和
//     int arr[10] = {0};
//     int len = sizeof(arr) / sizeof(int);
//     int sum = 0;

//     //设置种子
//     srand(time(NULL));

//     //生成随机数
//     //int num = rand() % 100 +1;//生成1 到100的随机数
//     //生成10个1-100之间的随机数存入数组
//     for(int i = 0 ; i < len; i ++){
//         int num = rand() % 100 +1;
//         arr[i] = num;
//         printf("%d\n",arr[i]);
//     }
//     //求和
//     for (int i = 0;i <len;i++){
//         sum = sum + arr[i];

//     }
//     printf("随机数数组的和：%d\n",sum);


//     return 0 ;

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

    int contains(int arr[],int lenc,int num);

    int main(){
    //需求：生成10个1-10之间的随机数存入数组 求和
    int arr[10] = {0};
    int len = sizeof(arr) / sizeof(int);
    int sum = 0;

    //设置种子
    srand(time(NULL));

    //生成随机数
    //int num = rand() % 10 +1;//生成1 到10的随机数
    //生成10个1-100之间的随机数存入数组
    for(int i = 0 ; i < len;){
        //生成随机数
        int num = rand() % 10 +1;
        int flag = contains(arr,len,num);//把生成的随机数num传入判断函数中；
        //判断num不存在数组中才存入数组；
        if(!flag ){
            arr[i] = num;
            i ++;//只有存入第1个不重复的数组后才能往下；第一个数组存入后++进入第二次for循环，这个时候不能打印数组，因为循环还没有结束
        }
    }

    for(int i =0;i<len;i++){
        printf("%d\n",arr[i]);
    }

    //求和
    for (int i = 0;i <len;i++){
        sum = sum + arr[i];

    }
    printf("随机数数组的和：%d\n",sum);
        //求平均数 总和/数组长度
    int avg = sum /len;
    int count =0;
    //统计有多少个数字比平均数小
    for (int i =0;i<len;i++){
        if(arr[i] < avg){
        count++;
        }
    }
    printf("随机数比平均数小的个数有%d\n",count);

    return 0 ;
}

    int contains(int arr[],int len,int num){
        for(int i=0;i<len;i++){
            if(num == arr[i])
            {
            return 1;//num和其中一个元素相等就返回1（真）；
            }
        }
        return 0;//没有重复 结束当前num和数组内每个元素的对比
    }
