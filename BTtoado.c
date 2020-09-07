//BAI 3
#include <stdio.h>
#include <math.h>
void Nhap(float a[], float b[], int n){
	for(int i=0; i<n; i++){
		printf("Nhap gia tri x va y cua diem M%d: \n", i+1);
		scanf("%f%f", &a[i], &b[i]);
	}
}
float Dodai(float x1, float y1, float x2, float y2){
	float d;
	d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	return d;
}
float Gapkhuc(float a[], float b[], int n){
	float d = 0;
	for(int i=0; i<n; i++){
		d += Dodai(a[i], b[i], a[i+1], b[i+1]);
	}
	return d;
}
void Max(float a[], float b[], int n){
	int k=0;
	float max = Dodai(a[0], b[0], 0, 0);
	for(int i=1; i<n; i++){
		if(Dodai(a[i], b[i], 0, 0) > max){
			max = Dodai(a[i], b[i], 0, 0);
			k = i+1;
		}
	}
printf("\nDiem xa truc hoanh nhat la: M%d, Khoang cach = %.2f", k, max);
}
void Dem(float a[], float b[], int n){
	int dem = 0;
	for(int i=1; i<n; i++){
		if(a[i] == 0 && b[i] != 0){
			printf("\nM%d cat truc tung", i+1);
			dem += 1;
		}
	}
	printf("\nCo %d diem cat truc tung", dem);
}
int main(){
	float a[100], b[100];
	int n;
	do{
		printf("\nNhap so luong diem toa do: \n");
		scanf("%d", &n);
	}while(n<1);
	Nhap(a, b, n);
	printf("\nTinh do dai duong gap khuc\n");
	printf("Do dai duong gap khuc la: %.2f", Gapkhuc(a, b, n));
	Max(a, b, n);
	Dem(a, b, n);
}
