#include <stdio.h>

/*
指针的作用二:
函数返回多个值
练习:
定义一个函数,求数组的最大值和最小值,并进行返回
*/
void getMaxMinVal(int arr[],int len,int* max,int* min);

int main(){
    int arr[]={11,23,45,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(int);

    int maxVal = arr[0], minVal = arr[0];
    getMaxMinVal(arr,len,&maxVal,&minVal);
    printf("最大值=%d\n最小值=%d\n",maxVal,minVal);

    return 0;
}


void getMaxMinVal(int arr[],int len,int* max,int* min){
    //max
    *max = arr[0];//是把 arr[i] 的值写入到 max 指向的内存（也就是 maxVal）
    for(int i =1; i<len; i++){
        if(*max < arr[i]){
            *max = arr[i];
        }
        
        
    }
    //min
    *min = arr[0];
    for(int i =1;i<len;i++){
        if(arr[i] < *min){
            *min = arr[i];
        }
        
        
    }

}