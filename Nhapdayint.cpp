//Bai 2
#include <stdio.h>

void Nhap(int a[], int n);
void Tong(int a[], int n);
void TBC(int a[], int n);
void Max(int a[], int n);
void Min(int a[], int n);
void ThongKe(int a[], int n, int x);

int main(){
	int a[100], n, x;
	do{
		printf("Nhap so luong phan tu: \n"); scanf("%d", &n);
	}while(n<1);
	Nhap(a ,n);
	Tong(a, n);
	TBC(a, n);
	Max(a, n);
	Min(a, n);
	ThongKe(a, n, x);
}
void Nhap(int a[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap so nguyen thu %d = \n", i+1);
		scanf("%d", &a[i]);
	}
}
void Tong(int a[], int n){
	int S = 0;
	for(int i=0; i<n; i++){
	    S += a[i];
	}
    printf("Tong cac so trong day la: %d\n", S);
}
void TBC(int a[], int n){
	float S = 0;
	for(int i=0; i<n; i++){
		S += a[i];
    }
    S = S / n;
    printf("Trung binh cong cua day la: %.2f\n", S);
}
void Max(int a[], int n){
	int max = a[0];
	for(int i=0; i<n; i++){
		if(a[i] > max){
		max = a[i];
	    }
	}
	printf("Phan tu lon nhat trong day la: %d\n", max);
} 
void Min(int a[], int n){
	int min = a[0];
	for(int i=0; i<n; i++){
		if(a[i] < min){
		min = a[i];
	    }
	}
	printf("Phan tu lon nhat trong day la: %d\n", min);
} 
void ThongKe(int a[], int n, int x){
	int dem = 0;
	printf("Moi ban nhap x: \n");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(x > a[i] && a[i] % 2 == 0){
			printf("Phan tu thu %d = %d\n", i+1, a[i]);
			dem += 1;
		}
	}
	printf("So phan tu chan nho hon x la: %d\n", dem);
}

       			
		
