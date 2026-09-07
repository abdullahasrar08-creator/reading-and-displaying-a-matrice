#include<stdio.h>
int main(){
    int i,j,n,m;
    printf("Enter no of rows and columns:");
    scanf("%i %i",&m,&n);
    int a[m][n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%i",&a[i][j]);
        }
    }
    printf("\nEntered elements are:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%i",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
