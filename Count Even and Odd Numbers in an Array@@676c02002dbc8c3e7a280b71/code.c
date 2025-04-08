#include <stdio.h>
int main(){
    int N,even = 0,odd = 0;
    scanf("%d", &N);
    int arr[N];
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
    printf("%d\n", even);
    printf("%d\n", odd);
    }
   
    return 0;
}