#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NhapMang(int *a, int n);
void XuatMang(int *a, int n);
int laCaoNhat(int *a, int n);
int laNhoNhat(int *a, int n);
void laDuong(int *a, int n);
void laAm(int *a, int n);
void laCapSoCong(int *a, int n);
void laSapXepTangDan(int *a, int n);
int laKiemTraSoNguyenTo(int n);
void laLietKeSoNguyenTo(int *a, int n);

int main(){
    int n;
    int *a;
    do{
        printf("Nhap n: \n");
        scanf("%d", &n);
    }while(n<0);
    a = (int*)(malloc(n * sizeof(int)));
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\nGia tri lon nhat la: %d\n", laCaoNhat(a, n));
    printf("\nGia tri nho nhat la: %d\n", laNhoNhat(a, n));
    laDuong(a, n);
    laAm(a, n);
    laCapSoCong(a, n);
    printf("Sap xep mang theo thu tu tang dan: ");
    laSapXepTangDan(a, n);
    XuatMang(a, n);
    printf("\nCac so nguyen to liet ke ra duoc la: ");
    laLietKeSoNguyenTo(a, n);
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
int laCaoNhat(int *a, int n){
    int dem = 0;
    int max = *(a+0);
    for(int i=0; i<n; i++){
        if(*(a+i) > max){
            max = *(a+i);
        }
    }
    for(int i=0; i<n; i++){
        if(max == *(a+i)) dem++;
    }
printf("\nCo %d gia tri cao nhat", dem);
return max;
}
int laNhoNhat(int *a, int n){
    int dem = 0;
    int min = *(a+0);
    for(int i=0; i<n; i++){
        if(*(a+i) < min){
            min = *(a+i);
        }
    }
    for(int i=0; i<n; i++){
        if(min == *(a+i)) dem++;
    }
printf("Co %d gia tri nho nhat", dem);
return min;
}
void laDuong(int *a, int n){
    int d = 0;
    for(int i=0; i<n; i++){
        if(*(a+i) < 0){
            printf("Mang k phai la mang toan so duong\n");
            break;
        }else{
            d++;
        }
    }
    if(d == n){
        printf("Mang toan so duong\n");
    }
} 
void laAm(int *a, int n){
    int flag = 0;
    for(int i=0; i<n; i++){
        if(*(a+i) > 0){
            printf("Mang k phai la mang toan so am\n");
            break;
        }else{
            flag++;
        }
    }
    if(flag == n){
        printf("Mang toan so am\n");
    }
} 
void laCapSoCong(int *a, int n){
    int c = *(a+1)-*(a+0);
    int flag = 1;
    for(int i=1; i<n-1; i++){
        if(*(a+i) + c != *(a+i+1)){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        printf("Day vua nhap k la cap so cong\n");
    }else{
        printf("Day vua nhap la cap so cong\n");
    }
}
void laSapXepTangDan(int *a, int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(a+i) > *(a+j)){
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}
int laKiemTraSoNguyenTo(int n){
    int t = true;
    if(n<2)
    return t = false;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
           return t = false;
        }
    }
    return t = true;
}
void laLietKeSoNguyenTo(int *a, int n){
    for(int i=0; i<n; i++){
        if(laKiemTraSoNguyenTo(*(a+i))){
            printf("%5d", *(a+i));
        }
    }
}
       
