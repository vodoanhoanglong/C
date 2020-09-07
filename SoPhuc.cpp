#include <stdio.h>
#include <math.h>

struct SoPhuc{
    int thuc;
    int ao;
};
typedef SoPhuc sophuc;

void NhapSoPhuc(SoPhuc sophuc[], int n);
void XuatSoPhuc(SoPhuc sophuc[], int n);
void TinhTong(SoPhuc sophuc[], int n);
void TinhHieu(SoPhuc sophuc[], int n);
void TinhTich(SoPhuc sophuc[], int n);
void TinhThuong(SoPhuc sophuc[], int n);
void TinhModun(SoPhuc sophuc[], int n);

int main(){
    int n;
    do{
        printf("Nhap so luong so phuc:\n");
        scanf("%d", &n);
    }while(n<=0);
    SoPhuc sophuc[n];
    NhapSoPhuc(sophuc, n);
    XuatSoPhuc(sophuc, n);
    TinhTong(sophuc, n);
    TinhHieu(sophuc, n);
    TinhTich(sophuc, n);
    TinhThuong(sophuc, n);
    TinhModun(sophuc, n);
}

void NhapSoPhuc(SoPhuc sophuc[], int n){
    for(int i=0; i<n; i++){
        printf("So phuc thu %d\n", i+1);
        printf("Nhap phan thuc: \n");
        scanf("%d", &sophuc[i].thuc);
        printf("Nhap phan ao: \n");
        scanf("%d", &sophuc[i].ao);
    }
}
void XuatSoPhuc(SoPhuc sophuc[], int n){
    for(int i=0; i<n; i++){
        printf("z%d = %d + %di\n", i+1, sophuc[i].thuc, sophuc[i].ao);
    }
}
void TinhTong(SoPhuc sophuc[], int n){
    int c1 = sophuc[0].thuc, c2 = sophuc[0].ao;
    for(int i=1; i<n; i++){
        c1 += sophuc[i].thuc;
        c2 += sophuc[i].ao;
    }
printf("Tong cac so phuc: z = %d + %di\n", c1, c2);
}
void TinhHieu(SoPhuc sophuc[], int n){
    int c1 = sophuc[0].thuc, c2 = sophuc[0].ao;
    for(int i=1; i<n; i++){
        c1 -= sophuc[i].thuc;
        c2 -= sophuc[i].ao;
    }
printf("Hieu cac so phuc: z = %d + %di\n", c1, c2);
}
void TinhTich(SoPhuc sophuc[], int n){
    int c1 = sophuc[0].thuc, c2 = sophuc[0].ao;
    for(int i=1; i<n; i++){
        c1 *= sophuc[i].thuc;
        c2 *= sophuc[i].ao;
    }
printf("Tich cac so phuc: z = %d + %di\n", c1, c2);
}
void TinhThuong(SoPhuc sophuc[], int n){
    float c1 = sophuc[0].thuc, c2 = sophuc[0].ao;
    for(int i=1; i<n; i++){
        c1 /= sophuc[i].thuc;
        c2 /= sophuc[i].ao;
    }
printf("Thuong cac so phuc: z = %.2f + %.2fi\n", c1, c2);
}
void TinhModun(SoPhuc sophuc[], int n){
    float m;
    for(int i=0; i<n; i++){
        m = sqrt(pow(sophuc[i].thuc, 2) + pow(sophuc[i].ao, 2));
        printf("|z%d| = %.2f\n", i+1, m);
    }
}