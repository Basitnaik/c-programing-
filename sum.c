// sumusing loops
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter the n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
