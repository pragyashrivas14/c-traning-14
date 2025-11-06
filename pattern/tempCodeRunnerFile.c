#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j=n;j>i;j--)
        printf(" ");
        
       for( int k=0;k<n;k++){
            printf("*");
        }
        printf("\n");
    }
}