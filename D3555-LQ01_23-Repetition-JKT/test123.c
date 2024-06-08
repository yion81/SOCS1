#include <stdio.h>
#include <math.h>

int main(){
    int t, x=1;
    scanf("%d", &t);
    while(t--){
        int n, hasil=0;
        int prime=0;
        scanf("%lld", &n);
        for(int i = 2; i<=n; i++){
            if(n%i==0){
                prime = 1;
                for(int j=2; j <=sqrt(i); j++){
                    if(i%j==0){
                        prime = 0;
                        break;
                    }
                }
                if(prime ==1){
                    hasil +=i;
                }
            }
        }
        printf("Case #%d: %d\n",x, hasil);
        x++;
        

    }
    return 0;
}