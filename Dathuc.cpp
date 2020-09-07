//BAI 5
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void NhapDaThuc(float P[], int n);
void InDaThuc(float P[], int n);
void TongDaThucMoi(float R[], float P[], float Q[], int n, int m);
float TinhGiaTriDaThuc(float P[], float x, int n);


void NhapDaThuc(float P[], int n){
	for(int i=n;i>=0;i--){ 
		printf(" a(%d)*x^%d: ",i,i);
		scanf("%f",&P[i]);
	}
}
void InDaThuc(float P[], int n){
	for(int i=n;i>0;i--)
		printf(" %.1f*x^%d + ",P[i],i);
		printf("%.1f",P[0]);
}
void TongDaThucMoi(float R[], float P[], float Q[], int n, int m){
	int t;
	(n>m)?t=n:t=m;
	/*  if(n>m)
			t=n;
		else
			t=m;
	*/
	for(int i=0;i<=t;i++)
		R[i]=P[i]+Q[i];
		printf("\nDa thuc R la: ");
        InDaThuc(R,t);
}
float TinhGiaTriDaThuc(float P[], float x, int n){
	float gt=0;
	for(int i=n;i>=0;i--)
		gt=gt + P[i]*pow(x,i);
	return gt;	
}
int main(){
	float P[MAX], Q[MAX], R[MAX], x, y, kq1, kq2, kq3;
	int n, m, t;
	printf("Nhap so bac cua P: ");
	scanf("%d", &n);
	NhapDaThuc(P,n);
	
	printf("Nhap so bac cua Q: ");
	scanf("%d", &m);
	NhapDaThuc(Q,m);
	printf("\nDa thuc P la: ");
	InDaThuc(P,n);
	printf("\nDa thuc Q la: ");
	InDaThuc(Q,m);
	
	TongDaThucMoi(R,P,Q,n,m);
	
	printf("\nnhap gia x: ");
	scanf("%f", &x);
	printf("nhap gia y: ");
	scanf("%f", &y);
	kq1=TinhGiaTriDaThuc(P,x,n);
	printf("\nGia tri da thuc P tai x la: %.1f",kq1);
	kq2=TinhGiaTriDaThuc(Q,y,m);
	printf("\nGia tri da thuc Q tai y la: %.1f",kq2);
	kq3 = kq1+kq2;
	printf("\nTong hai da thuc tai x va y la: %.1f",kq3);
	printf("\n");
}
