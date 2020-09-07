#include <stdio.h>
void Nhap(int a[], int n);
void SapXep(int a[], int n);
int TimKiem(int a[], int n, int x);
void TimKiemNhiPhan(int a[], int n, int x);
int main(){
    int n, x;
    int a[100];
    printf("Nhap so luong phan tu: \n");
    scanf("%d", &n);
    Nhap(a, n);
    SapXep(a, n);
    printf("Nhap so can tim: \n"); scanf("%d", &x);
    TimKiemNhiPhan(a, n, x);
}
void Nhap(int a[], int n){
    for(int i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n){
    for(int i=0; i<n; i++){
        printf("a[%d] = %d\n", i , a[i]);
    }
}
void SapXep(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    Xuat(a, n);
}
int TimKiem(int a[], int n, int x){
    int l = 0, r = n, mid;
    while(l<=r){
        mid = (l+r)/2;
        if(a[mid] == x)
        return 1;
        else if(a[mid] <= x)
            l = mid + 1;
        else r = mid - 1;
        }
return 0;
}
void TimKiemNhiPhan(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(TimKiem(a, n, x)){
        printf("Tim thay x\n");
        break;
        }else{ 
            printf("Khong tim thay x\n");
            break;
        }
    }
}


