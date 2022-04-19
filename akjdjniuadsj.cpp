#include<stdio.h>
int main(){
    int num, n = 0, m = 1;
    printf("Enter Rows:");
    scanf("%d",&num);
    char alphabets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= num; i++){
        for (int j = 0; j < i; j++){
            if (i %2 != 0){
                printf("%c",alphabets[n]);
                if (i - 1 == j){
                    n++;
                }
            }else{
                printf("%d", m);
                if (i - 1 == j){
                    m++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
