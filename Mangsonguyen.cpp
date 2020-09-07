#include<stdio.h>
#include<stdlib.h>
int nhapMang(int **a);
void xuatMang(int *a, int n);
int main(){
    int n;
    int *a;
    n = nhapMang(&a);
    xuatMang(a,n);
    return 0;
}
int nhapMang(int **a){
    int n;
    int temp;
    printf("nhap n:");
    scanf("%d",&n);
    *a = (int *) malloc (n * sizeof(int));
    for(int i =0;i<n;i++){
        printf("a[%d]: ",i);
        scanf("%d", &temp); // &temp tương tự (*a+i)
        *(*a+i) = temp;
    }
    return n;
}
void xuatMang(int *a, int n){
    printf("\n xuat mang:");
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}