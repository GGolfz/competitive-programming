#include <stdio.h>
int main() {
    int n,min,max;
    scanf("%d",&n);
    for(int i = 0; i< n;i++){
        int k;
        scanf("%d",&k);
        if(i==0){
            min = k;
            max = k;
        } else {
            if(k<min){
                min = k;
            }
            if(k>max){
                max = k;
            }
        }
    }
    printf("%d\n",min);
    printf("%d",max);
    return 0;
}