#include <stdio.h>

struct NhanVien{
	char HT[100];
	int tuoi;
	char gt[10];
	int HSluong;
	int time;
};
typedef NhanVien NV;

void Nhap(NV a[], int n);
void Xuat(NV a[], int n);
void Tong(NV a[], int n);

int main(){
	int n;
	do{
		printf("Nhap so luong nhan vien: \n");
		scanf("%d", &n);
	}while(n<1);
	NV a[n];
	printf("==========Nhap thong tin============\n");
	Nhap(a, n);
	printf("=========Xuat thong tin============\n");
	Xuat(a, n);
	printf("=========Luong nhan vien===========\n");
	Tong(a, n);
}

void Nhap(NV a[], int n){
	for(int i=0; i<n; i++){
		printf("- Nhap thong tin nhan vien thu %d: \n", i+1);
		printf("Nhap ho ten nhan vien: \n"); 
		fflush(stdin);
		gets(a[i].HT);
		printf("Nhap tuoi nhan vien: \n");
		scanf("%d", &a[i].tuoi);
		printf("Nhap gioi tinh: \n");
		fflush(stdin);
		gets(a[i].gt);
		printf("Nhap he so luong: \n");
		scanf("%d", &a[i].HSluong);
		printf("Nhap thoi gian lam viec theo ngay: \n");
		scanf("%d", &a[i].time);
	}
}
void Xuat(NV a[], int n){
	for(int i=0; i<n; i++){
		printf("\n- Thong tin nhan vien thu %d: \n", i+1);
		printf("Ho ten nhan vien: %s", a[i].HT);
		printf("\nTuoi: %d", a[i].tuoi);
		printf("\nGioi tinh: %s", a[i].gt);
		printf("\nHe so luong cua nhan vien: %d", a[i].HSluong);
		printf("\nThoi gian lam viec theo ngay cua nhan vien: %d\n", a[i].time);
	}
}
void Tong(NV a[], int n){
	int S;
	for(int i=0; i<n; i++){
		S = a[i].HSluong * a[i].time;
		printf("Luong cua nhan vien thu %d: %d\n", i+1, S);
		}
}
