#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        for (int j=n;j>=i;j--)
        printf("*");
    {
        printf("\n");
    }

    }

}