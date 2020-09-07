//BAI 4
#include <stdio.h>
#define MAX 100

void Nhap(int a[][MAX], int n);
void Xuat(int a[][MAX], int n);
void Tong(int a[][MAX], int n);
void Max(int a[][MAX], int n);
void Tich(int a[][MAX], int n, int k[]);
void TamGiac(int a[][MAX],int n);

int main(){
	int a[MAX][MAX], k[MAX], n;
	do{
		printf("Nhap so luong hang x cot");
		scanf("%d", &n);
	}while(n<1);
	Nhap(a, n);
	Xuat(a, n);
	Tong(a, n);
	Max(a, n);
	Tich(a, n, k);
	TamGiac(a, n);
}
void Nhap(int a[][MAX], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d] = ", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
}
void Xuat(int a[][MAX], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void Tong(int a[][MAX], int n){
	int S = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			S += a[i][j];
		}
	}
	printf("Tong ma tran la: %d\n", S);
}
void Max(int a[][MAX], int n){
	int max = a[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
	    }
	}
	printf("Gia tri lon nhat cua ma tran la: %d\n", max);
}
void Tich(int a[][MAX], int n, int k[]){
	int min;
	int T;
	for(int i=0; i<n; i++){
		T = 1;
		for(int j=0; j<n; j++){
				T *= a[j][i];
			}
	k[i] = T;
	printf("Tich cua cot %d = %d\n", i+1, T);
	}
	min = k[0];
	for(int i=1; i<n; i++){
	    if(min > k[i]){
			min = k[i];
		}
	}
	printf("Tich cua cot nho nhat la: %d\n", min);
}
void TamGiac(int a[][MAX],int n)
{
	bool dem = false;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i][j]!=0){
				dem = true;
			}
		}
	}
	if(dem)
	printf("Khong phai ma tran tam giac duoi\n");
	else
	printf("Day la ma tran tam giac duoi");
}
