#include <stdio.h>
int main(){
    int N;
    int arr[N],even = 0,odd = 0;
    scanf("%d", &N);
    for(int i = 0; i<N;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i<N;i++){
        if(arr[i]/2 == 0){
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }
    }
    printf("%d", even);
    printf("%d", odd);
    return 0;
}