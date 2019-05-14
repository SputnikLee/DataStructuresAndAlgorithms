#include <stdio.h>
int main() {
    int n = 3,count = 0,i,j;
    int a[3][3] = {{1,0,0},{1,1,0},{1,1,1}};
    j=0;
    for(i=0;i<n;++i){
        while(j<n){
            if(a[i][j] == 0) break;
            else j++;
        }
        count += j;
    }
    printf("%d",count);
    return 0;
}