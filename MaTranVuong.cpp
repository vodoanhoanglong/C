#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void CapPhat(int n, int **&a);
void XoaBN(int n, int **a);
void Nhap(int &n, int **&a);
void Xuat(int n, int **a);
int DoiXungPhu(int n, int **a);
void LietKe(int n, int **a);
int Menu(int n, int **a);

int main(){
    int n;
    int **a=new int*[n];
    Menu(n, a);
    XoaBN(n, a);
    delete a;
}

void CapPhat(int n, int **&a){
    for(int i=0; i<n; i++){
        *(a+i) = new int[n];
        for(int j=0; j<n; j++){
            *(a+j) = new int[n];
        }
    }
}
void XoaBN(int n, int **a){
    for(int i=0; i<n; i++){
        delete *(a+i);
        for(int j=0; j<n; j++){
            delete *(a+j);
        }
    }
}
void Nhap(int &n, int **&a){
    printf("Nhap so luong hang x cot: \n"); 
    scanf("%d", &n);
    CapPhat(n, a);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("\nNhap a[%d][%d] = ", i+1, j+1);
            scanf("%d", (*(a+i)+j));
        }
    }
}
void Xuat(int n, int **a){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%5d", *(*(a+i)+j));
        }
        printf("\n");
    }
}
int DoiXungPhu(int n, int **a){
    int b[100], c[100], dem = 0;
    for(int i=0; i<n-2; i++){
        for(int j=0; j<n; j++){
            b[j] = *(*(a+i)+j);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=n-1; j<n; j++){
            c[i] = *(*(a+i)+j);
        }
    }
    for(int i=0; i<n; i++){
       if((b[i]-c[i])!=0){
           dem++;
        }
    }

    if(dem == n) return 1;
    else return 0;
}
void LietKe(int n, int **a){
    int t[100];
    int max;
    for(int i=0; i<n; i++){
        t[i] = 0;
        for(int j=0; j<n; j++){
            t[i] += *(*(a+i)+j);
            }
        }
    max = t[0];
    for(int i=1; i<n; i++){
        if(max < t[i]){
            max = t[i];
        }
    }
    for(int i=0; i<n; i++){
        if(t[i]==max){
            printf("\nHang co tong max la %d: %d", i+1, max);
        }
    }
}    
int Menu(int n, int **a){
    bool danhap = false;
    int p;
	while(true){
		system("cls");
		printf("-----Menu-------\n");
		printf("1. Nhap ma tran \n");
		printf("2. Xuat ma tran\n");
		printf("3. Kiem tra doi xung duong cheo phu\n");
		printf("4. Liet ke tong max\n");
		printf("5. Thoat\n");
		scanf("%d", &p);
	switch(p){
	case 1:
		printf("Ban da chon 1\n");
	    Nhap(n, a);
		printf("Ban da nhap thanh cong\n");
		danhap = true;
		printf("\nNhan phim bat ky de tiep tuc\n");
		getch();
		break;
	case 2:
	   if(danhap){
		printf("Ban da chon 2\n");
	    Xuat(n, a);
	   }else{
		   printf("Ban chua nhap ma tran\n");
	   }
	   printf("\nBam phim bat ky de tiep tuc\n");
	   getch();
	   break;
	case 3:
	if(danhap){
		printf("Ban da chon 3\n");
	    if(DoiXungPhu(n, a) == 1){
        printf("\nDoi xung qua duong cheo phu");
        }else{
        printf("\nKhong doi xung qua duong cheo phu");
        }
	}else{
		   printf("Ban chua nhap ma tran\n");
	   }
	   printf("\nBam phim bat ky de tiep tuc\n");
	   getch();
	   break;
	case 4:
	   if(danhap){
		printf("Ban da chon 4\n");
	    LietKe(n, a);
	   }else{
		   printf("Ban chua nhap ma tran\n");
	   }
	   printf("\nBam phim bat ky de tiep tuc\n");
	   getch();
	   break;
	case 5:
	   printf("Ban da chon thoat chuong trinh\n");
	   getch();
       return 0;
	default:
	    printf("\nKhong co chuc nang nay!");
        printf("\nBam phim bat ky de tiep tuc!");
        getch();
        break;
	}
}
}

   
