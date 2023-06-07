#include <stdio.h>
void fac(int a[], int b, int n){
    int i;
     for(i=0;i<n;i++){
        if(a[i]%b==0){
            printf("%d is a factor of %d\n", a[i], b);
        }
    }
}
int main() {
    int b,i,n;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &b);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
   fac(a,b,n);
    return 0;
}