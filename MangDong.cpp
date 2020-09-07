#include <stdio.h>
#include <stdlib.h>

void NhapMang(int *a, int n);
void XuatMang(int *a, int n);
int Max(int *a, int n);
int Min(int *a, int n);
int main(){
    int n;
    int *a;
    do{
        printf("Nhap n: \n");
        scanf("%d", &n);
    }while(n<1);
    a = (int*)(malloc(n * sizeof(int)));
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\nGia tri lon nhat la: %d", Max(a, n));
    printf("\nGia tri nho nhat la: %d", Min(a, n));
    free(a);
}
void NhapMang(int *a, int n){
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu %d: \n", i+1);
        scanf("%d", (a+i));
        }
}
void XuatMang(int *a, int n){
    for(int i=0; i<n; i++){
        printf("%5d", *(a+i));
    }
}
int Max(int *a, int n){
    int max = *(a+0);
    for(int i=0; i<n; i++){
        if(*(a+i) > max){
            max = *(a+i);
        }
    }
return max;
}
int Min(int *a, int n){
    int min = *(a+0);
    for(int i=0; i<n; i++){
        if(*(a+i) < min){
            min = *(a+i);
        }
    }
return min;
}