#include <stdio.h>
void fun1(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
}
void fun2(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", a[i]);
    }
}
void fun3(int a[], int b[], int n){
    int i, j, count;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                count++;
            }
        }
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    fun1(a,n);
    fun2(a,n);
    fun1(b,n);
    fun2(b,n);
    fun3(a,b,n);
    return 0;
}