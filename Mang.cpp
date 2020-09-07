#include <stdio.h>

void Nhap(int a[], int n);
void Xuat(int a[], int n);
int Max(int a[], int n);

int main(){
	int a[100], n;
	do{
		printf("Nhap so luong phan tu trong mang: \n");
	    scanf("%d", &n);
	}while(n<1);
	printf("=========Nhap=========\n");
	Nhap(a, n);
	printf("=========Xuat==========\n");
	Xuat(a, n);
	printf("=========Max===========\n");
	printf("Gia tri lon nhat la: %d\n", Max(a, n));
}

void Nhap(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void Xuat(int a[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = %d\n", i, a[i]);
	}
}
int Max(int a[], int n){
	int max = a[0];
	for(int i=0; i<n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}
