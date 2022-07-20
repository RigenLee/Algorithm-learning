#include<cstdio>
#include<cstring>


// memset--对数组中每一个元素赋相同的值
// 格式 memset(数组名，值，sizeof（数组名）);
int main(){
    int a[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);

    }
    printf("\n");
    //赋初值0
    memset(a, 0, sizeof(a));
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);

    }
    printf("\n");

    //赋初值-1   
    memset(a, -1, sizeof(a));
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}