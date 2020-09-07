#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void nhapmang(int *a, int n);
void xuatmang(int *a, int n);
int timmax(int *a, int n);
void timvitrimax(int *a,int n);
int timmin(int *a, int n);
void timvitrimin(int *a,int n);
void SapXepTangDan(int *a, int n);
void Them1PhanTu(int *a, int &n, int *ViTriThem, int *PhanTuThem);
void KiemTraPhanTuThem(int *a, int n, int *ViTriThem, int *PhanTuThem);
void Xoa1PhanTu(int *a, int &n, int *ViTriXoa);
void KiemTraPhanTuXoa(int *a, int n, int *ViTriXoa);
int main(){
	int *a, n, *ViTriThem, *PhanTuThem, *ViTriXoa;
	printf("\nnhap so phan tu trong mang:");
	scanf("%d",&n);
	a = (int*)malloc(n * sizeof(int));
	ViTriThem = (int*)malloc(n * sizeof(int));
	PhanTuThem = (int*)malloc(n * sizeof(int));
	ViTriXoa = (int*)malloc(n * sizeof(int));
	nhapmang(a, n);
	xuatmang(a, n);
	timmax(a, n);
	timvitrimax(a, n);
	timmin(a, n);
	timvitrimin(a, n);
	SapXepTangDan(a, n);
	printf("\nSap xep tang dan: ");
	xuatmang(a, n);
	KiemTraPhanTuThem(a, n, ViTriThem, PhanTuThem);
	KiemTraPhanTuXoa(a, n, ViTriXoa);
	free(a);
	free(ViTriThem);
	free(PhanTuThem);
	free(ViTriXoa);
	getch();
	return 0;
}
void nhapmang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("\nphan tu thu a[%d]:",i);
		scanf("%d",(a+i));
	}
}
void xuatmang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("\t%d",*(a+i));
	}
}
int timmax(int *a, int n){
	int MAX=*(a+0);
	for(int i=1;i<n;i++){
		if(MAX<*(a+i)){
			MAX=*(a+i);
		}
	}
	return MAX;
}
void timvitrimax(int *a, int n){
	int vt=timmax(a,n);
	printf("\ngia tri lon nhat trong day la: %d",vt);
	for(int i=0;i<n;i++){
		if(*(a+i)==vt){
			printf("\nvi tri max la: %d",i);
		}
	}
}
int timmin(int *a, int n){
	int MIN=*(a+0);
	for(int i=1;i<n;i++){
		if(MIN>*(a+i)){
			MIN=*(a+i);
		}
	}
	return MIN;
}
void timvitrimin(int *a,int n){
	int vt=timmin(a,n);
	printf("\ngia tri nho nhat trong day la: %d",vt);
	for(int i=0;i<n;i++){
		if(*(a+i)==vt){
			printf("\nvi tri min la: %d",i);
		}
	}
}
void SapXepTangDan(int *a, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (*(a + i) > *(a + j)){
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
void Them1PhanTu(int *a, int &n, int *ViTriThem, int *PhanTuThem){
	for(int i = n; i > *ViTriThem; i--){
		a[i] = a[i - 1];
	}
	a[*ViTriThem] = *PhanTuThem;
	n++;
}
void KiemTraPhanTuThem(int *a, int n, int *ViTriThem, int *PhanTuThem){
	do
	{
		printf("\nNhap vao vi tri can them (%d --> %d) ", 0, n);
		scanf("%d", ViTriThem);
		if (*ViTriThem < 0 || *ViTriThem > n)
		{
			printf("\nVi tri khong hop le. Xin kiem tra lai !");
		}
	}while(*ViTriThem < 0 || *ViTriThem > n);

	printf("\nNhap vao phan tu can them: ");
	scanf("%d", PhanTuThem);

	Them1PhanTu(a, n, ViTriThem, PhanTuThem);
	printf("\nMang sau khi them:\n");
	xuatmang(a, n);
}
void Xoa1PhanTu(int *a, int &n, int *ViTriXoa){
	for(int i = *ViTriXoa; i < n; i++){
		a[i] = a[i + 1];
	}
}
void KiemTraPhanTuXoa(int *a, int n, int *ViTriXoa){
	do{
		printf("\nNhap vi tri xoa: ");
		scanf("%d", ViTriXoa);

		if(*ViTriXoa < 0 || *ViTriXoa >= n)
		{
			printf("\nVi tri khong hop le. Xin kiem tra lai!");
		}
	}while(*ViTriXoa < 0 || *ViTriXoa >= n);

	Xoa1PhanTu(a, n, ViTriXoa);
	printf("\nMang sau khi xoa phan tu tai vi tri %d: ", *ViTriXoa);
	xuatmang(a, n);
}

