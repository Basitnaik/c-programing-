#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the numbers;");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatesr number\n",a);

        } }else{
            printf("%d is gretest number",c);
        }   
            if(b>c){
                printf("%d is greatest number",b);

            } else{
                printf("%d is gretest number",c);
            }
        
        return 0;
    
}