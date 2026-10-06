#include <stdio.h>

void printfARR(int arr[],int len);

int main() {
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(int);

    // 键盘录入 5 个数据
    for (int i = 0; i < len; i++) {
        printf("请录入第%d个元素\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printfARR(arr,len);

    // 反转数组
    //i 从头数起，j从尾数=len -1；1 < j的情况下反转
    int j =len -1;
    int i =0;
    while (i<j)
    {
        /* code */
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;//交换结束后i向右移动一个
        j--;//交换结束后j向左移动一个
    }
    

    // 遍历输出
    printfARR(arr,len);

    return 0;
}

void printfARR(int arr[],int len){
    for(int i = 0;i<len;i++){
        printf("%d\n",arr[i]);
    }

}