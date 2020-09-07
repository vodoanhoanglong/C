#include <stdio.h>
#include <math.h>
#define MAX 100

void Nhap(int a[], int n){
	for(int i=0; i<n; i++){
	printf("a[%d] = ", i);
	scanf("%d", &a[i]);
	}
}
void Xuat(int a[], int n){
	for(int i = 1; i<=n; i++){
	if(i%10==0){
	printf("a[%d] = %d\n      ", i-1, a[i-1]);
	printf("---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	}
	else
	printf("a[%d] = %d        ", i-1, a[i-1]);
	}
}
void ThemPhanTu(int a[], int &n){
	int val,pos;
	printf("\nNhap gia tri muon them vao mang: ");
	scanf("%d", &val);
    printf("Nhap vi tri muon them trong mang: ");
	scanf("%d", &pos); 
    if(n >= MAX){
    	printf("Mang da full, khong them duoc nua!!!\n");
        return;
    }
    if(pos < 0){
        pos = 0;
    }
    else if(pos > n){	
        pos = n;
    }
    for(int i = n; i > pos; i--){	
        a[i] = a[i-1];
    }
    a[pos] = val;		
    ++n;	
    Xuat(a, n);
}
void Xoa(int a[], int &n){
 	int pos;
	printf("Nhap vi tri muon xoa trong mang: ");
	scanf("%d", &pos);
    if(n <= 0){		
        return;
    }
    if(pos < 0){	
        pos = 0;
    }
    else if(pos >= n){	
        pos = n-1;
    }
    for(int i = pos; i < n - 1; i++){	   
        a[i] = a[i+1];
    }
    --n;
    Xuat(a, n);
}
void XuatM(int a[], int n){
	for(int i=n-1; i>=0; i--){
		printf("a[%d]\t", i);
    }
}
void XuatDaoNguoc(int a[], int n){
 for(int i=0;i<=n/2;i++){
   int temp=a[i];
   a[i]=a[n-1-i];
   a[n-1-i]=temp;
   }
 for(int i=0;i<n;i++){
    printf("%d \t", a[i]);
    }
}
void PTLN(int a[], int n){
	int max = a[0];
	for(int i=1;i<n;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("Phan tu lon nhat la = %d\n", max);
}
void PTNN(int a[], int n){
	int min = a[0];
	for(int i=1;i<n;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("Phan tu nho nhat la = %d\n", min);
}
void PTDNN(int a[], int n){
	int i, minD;
    for(i=0; i<n; i++){
	    if(a[i]>0 && a[i]<minD)
        minD = a[i];
    }
    printf("Phan tu duong nho nhat la = %d\n", minD);
}
void Tong(int a[], int n){
	int t = 0;
	for(int i=0; i<n; i++){
		t = t + a[i];
	}
	printf("Tong gia tri cac phan tu cua mang = %d\n", t);
}
void Tbc(int a[], int n){
	float s = 0;
	for(int i=0; i<n; i++){
		s += a[i];
	}
	s = s / n;
	printf("Trung binh cong cua mang la = %.2f\n", s);
}
void Tbn(int a[], int n){
	float S = 1;
	for(int i=0; i<n; i++){
		S *= a[i];
	}
    S = pow(abs(S), 1.0/n);
	printf("Trung binh nhan cua mang la = %.2f\n", S);
}
void TongDuong(int a[], int n){
	int dem = 0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			dem+= 1;
		}
	}
	int td = 0;
	for(int i=0; i<n; i++){
		if(a[i]>0){
			td += a[i];
		}
	}
	printf("So phan tu duong trong mang la = %d", dem);
	printf("\nTong cac phan tu duong trong mang la = %d", td);
}
void XuatN(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%5d", a[i]);
	}
}
void SapXepTang(int a[], int n){
	int tang;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				tang = a[i];
				a[i] = a[j];
				a[j] = tang;
			}
		}
	}
}
void SapXepGiam(int a[], int n){
	int giam;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] < a[j]){
				giam = a[i];
				a[i] = a[j];
				a[j] = giam;
			}
		}
	}
}
void TimKiem(int a[], int n, int x){
	int i;
	printf("Nhap so phan tu can tim = ");
	scanf("%d", &x);
	for(i=0; i<n; i++){
		if(a[i] == x){
		    printf("So phan tu can tim la a[%d] = %d", i, a[i]);
	        break;
		}
	}
	if(a[i] != x)
	    printf("Khong tim thay so phan tu trong mang");
}
int main(){
	int n, x;
	int a[MAX];
	do{
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
    }while(n<=0 || n>MAX);
	printf("======================================================== NHAP MANG ========================================================\n");  
	Nhap(a, n);
	printf("========================================================  XUAT MANG ========================================================\n");
	Xuat(a, n);
	printf("\n======================================================== THEM 1 PHAN TU ========================================================");
	ThemPhanTu(a, n);
	printf("\n========================================================  XOA 1 PHAN TU ========================================================\n");
	Xoa(a, n);
	printf("\n======================================================== TIM KIEM SO PHAN TU TRONG MANG ========================================================\n");
	TimKiem(a, n, x);
	printf("\n======================================================== XUAT DAO NGUOC ========================================================\n");
    XuatM(a, n);
    printf("\n");
	XuatDaoNguoc(a, n);
	printf("\n======================================================== TIM PHAN TU LON NHAT ========================================================\n");
	PTLN(a, n);
	printf("======================================================== TIM PHAN TU NHO NHAT ========================================================\n");
	PTNN(a, n);
	printf("======================================================== TIM PHAN TU DUONG NHO NHAT ========================================================\n");
    PTDNN(a, n);
	printf("======================================================== TINH TONG ========================================================\n");
	Tong(a, n);
	printf("======================================================== TINH TRUNG BINH CONG ========================================================\n");
	Tbc(a, n);
	printf("======================================================== TINH TRUNG BINH NHAN ========================================================\n");
	Tbn(a, n);
	printf("======================================================== SAP XEP MANG THEO THU TU TANG DAN ========================================================\n");
	SapXepTang(a, n);
	XuatN(a, n);
	printf("\n======================================================== SAP XEP MANG THEO THU TU GIAM DAN ========================================================\n");
	SapXepGiam(a, n);
	XuatN(a, n);
	printf("\n======================================================== DEM VA TINH TONG SO DUONG TRONG MANG ========================================================\n");
	TongDuong(a, n);
	printf("\n======================================================== THE END ========================================================\n");
	printf("\nVO DOAN HOANG LONG 6051071067\n");
}
