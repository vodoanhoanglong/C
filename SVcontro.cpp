#include <stdio.h>
#include <stdlib.h>

struct SinhVien{
    char HoTen[100];
    float Diem;
};
typedef SinhVien *sinhvien;

void Nhap(SinhVien *sinhvien, int n);
void Xuat(SinhVien *sinhvien, int n);
float DiemCao(SinhVien *sinhvien, int n);

int main(){
    int n;
    SinhVien *sinhvien;
    do{
        printf("Nhap so luong sinh vien: \n");
        scanf("%d", &n);
    }while(n<1);
    sinhvien = (struct SinhVien*)(malloc(n * sizeof(SinhVien)));
    Nhap(sinhvien, n);
    Xuat(sinhvien, n);
    printf("\nSinh vien co diem so cao nhat la %.2f: ", DiemCao(sinhvien, n));
    free(sinhvien);
}
void Nhap(SinhVien *sinhvien, int n){
    for(int i=0; i<n; i++){
    printf("-Nhap thong tin sinh vien thu %d: \n", i+1);
    printf("Ho ten sinh vien: \n");
    fflush(stdin);
    gets((sinhvien + i)->HoTen);
    printf("Diem sinh vien: \n");
    scanf("%f", &(sinhvien + i)->Diem);
    }
}
void Xuat(SinhVien *sinhvien, int n){
    for(int i=0; i<n; i++){
        printf("- Thong tin sinh vien thu %d: \n", i+1);
        printf("Ho ten  sinh vien: %s\n", (sinhvien + i)->HoTen);
        printf("Diem sinh vien: %.2f\n", (sinhvien + i)->Diem);
    }
}
float DiemCao(SinhVien *sinhvien, int n){
    float max = (sinhvien+0)->Diem;
    for(int i=0; i<n; i++){
        if((sinhvien + i)->Diem > max){
            max = (sinhvien + i)->Diem;
        }
    }
    return max;
}


    