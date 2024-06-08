#include <stdio.h>
#include <string.h>
int main(){
    int tc,size;
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        scanf("%d",&size); getchar();
        int matrix[3][size][size];
        int res[size][size];
        for(int j=0;j<3;j++){
            for(int k=0;k<size;k++){
                for(int l=0;l<size;l++){
                    scanf("%d",&matrix[j][k][l]);getchar();
                    
                }
            }
            
            if((i!=(tc-1))&&j<2)getchar();
        }
        for(int a=0;a<size;a++){
            for(int b=0;b<size;b++){
                res[a][b]=0;
                for(int l=0;l<size;l++){
                    // printf("[%d %d] %d+=%d*%d\n",b,a,res[a][b],matrix[0][a][l],matrix[1][l][b]);
                    res[a][b]+=matrix[0][a][l]*matrix[1][l][b];
                }
            }
        }
        printf("Case #%d:\n",i);
        for(int a=0;a<size;a++){
            for(int b=0;b<size;b++){
                matrix[0][a][b]=0;
                for(int l=0;l<size;l++){
                    // printf("[%d %d] %d+=%d*%d\n",b,a,matrix[0][a][b],res[a][l],matrix[2][l][b]);
                    matrix[0][a][b]+=res[a][l]*matrix[2][l][b];
                }
                printf("%d%s",matrix[0][a][b],(b==(size-1)?"\n":" "));
            }
        }
    }
}