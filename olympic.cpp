//BAI 7
#include <stdio.h>
#include <string.h>

struct SinhVien{
	char HT[50];
	int SD;
	char T[50];
};
typedef SinhVien SV;

void Nhap(SV a[], int n);
void Xuat(SV a[], int n);
void Tong(SV a[], int n);
void SapXep(SV a[], int n);
void TongDiem(SV a[], int n, int k[]);

int main(){
	int n, k[100];
	do{
		printf("Nhap so luong thi sinh tham gia: \n");
		scanf("%d", &n);
	}while(n<1);
	SV a[n];
	printf("==========Nhap danh sach thi sinh tham gia========== \n");
    Nhap(a, n);
    printf("==========Tinh tong diem theo truong========== \n");
    Tong(a, n);
	printf("==========Sap xep theo diem so giam dan cua thi sinh=========== \n");
	SapXep(a, n);
	printf("==========Tong diem cua truong co so diem cao nhat=========== \n");
	TongDiem(a, n, k);
}
void Nhap(SV a[], int n){
	for(int i=0; i<n; i++){
	printf("- Thong tin thi sinh thu %d:\n", i+1);
	printf("Nhap ten thi sinh: \n");
	fflush(stdin);
	gets(a[i].HT);
	printf("Nhap so diem: \n");
	scanf("%d", &a[i].SD);
	printf("Nhap ten truong: \n");
	fflush(stdin);
	gets(a[i].T);
    }
}
void Xuat(SV a[], int n){
	for(int i=0; i<n; i++){
    	printf("-Thong tin thi sinh thu %d: \n", i+1);
    	printf("Ho ten: %s\n", a[i].HT);
    	printf("So diem: %d\n", a[i].SD);
    	printf("Ten truong: %s\n", a[i].T);
    }
}
void Tong(SV a[], int n){
	int S = 0;
	char ten[100];
	printf("Nhap ten truong ban can tinh tong diem: \n");
	fflush(stdin);
	gets(ten);
	for(int i=0; i<n; i++){
		if(strcmp(ten, a[i].T)==0){
			S += a[i].SD;
		}
	}
	printf("Tong diem cua truong %s la : %d\n", ten, S);
}
void SapXep(SV a[], int n){
	SV t;
    for(int i=0; i<n; i++){
    	for(int j=i+1; j<n; j++){
    		if(a[i].SD < a[j].SD){
    			t = a[i];
    			a[i] = a[j];
    			a[j] = t;
    		}
    	}
	}
	Xuat(a, n);
}
void TongDiem(SV a[], int n, int k[]){
	int max;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(a[i].T, a[j].T)==0){
				k[i] = a[i].SD + a[j].SD;
			}else{
				k[i] = a[i].SD;
			}
		}
	}
	max = k[0];
	for(int i=0; i<n; i++){
		if(k[i] > max){
			max = k[i];
		}
	}
	printf("Truong co so diem cao nhat la: %d\n", max);
}

		
	

