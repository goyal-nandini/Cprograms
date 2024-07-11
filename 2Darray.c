#include <stdio.h>
//#define println() printf("\\n")
int main(){

    int i,j;
    int arr[3][3];
    printf("this is code.");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
           
    }
}
    
   
    // for(i=0;i<=3;i++)
    //     for(j=0;j<=3;j++)
    // {
    //     a = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
    //     if(temp < a)
    //         temp = a ; 
        
    // }
    // printf("result is : ");
    //     printf("%d",temp);

