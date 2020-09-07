// Bai so 2
#include <stdio.h>
#include <conio.h>

struct SinhVien{
    char ten[30];
    char truong[50];
    float diem;
};
typedef SinhVien SV;
void nhap(SV &sv){
	printf("Nhap ten SV: "); 
	printf("Nhap so diem: "); 
	printf("Nhap truong: ");
	}
void nhapN(SV a[], int n){
	for(int i = 0; i< n; ++i){
        printf("\nNhap SV thu %d:", i+1);
        nhap(a[i]);
    }
}
void xuat(SV sv){
	printf("\nHo ten SV: %s", sv.ten);
    printf("\nSo diem: %f", sv.diem);
    printf("\nTruong: %s", sv.truong);
	}
void xuatN(SV a[], int n){
 	for(int i = 0;i < n;++i){
        printf("\nThong tin SV thu %d:", i+1);
        xuat(a[i]);
    }
}
void xeploai(SV a[], int n){
 SV tmp;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i].diem < a[j].diem){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;        
                }
            }
        }
    }
int main(){
	int n;
	do{
        printf("\nNhap so luong SV: "); scanf("%d", &n);
    }while(n <= 0);
    SV a[n];
    while(true){
    	nhapN(a, n);
    	}
}
