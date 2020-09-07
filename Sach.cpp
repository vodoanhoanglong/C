#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
struct Sach{
	char Tensach[100];
	char Tacgia[50];
	int Nam;
    int	t = 0;
};
typedef Sach S;
void Nhap(Sach S[], int n){
	for(int i=0; i<n; i++){
	    printf("- Nhap thong tin sach thu %d:", i+1);
	    printf("\nNhap ten sach:\n"); fflush(stdin); gets(S[i].Tensach);
        printf("Nhap ten tac gia:\n"); fflush(stdin); gets(S[i].Tacgia);
        printf("Nhap nam san xuat:\n"); scanf("%d", &S[i].Nam);
    }
}
void Xuat(Sach S[], int n){
	for(int i=0; i<n; i++){
		printf("- Thong tin sach thu %d: \n", i+1);
		printf("Ten sach: %s\n", S[i].Tensach);
		printf("Ten tac gia: %s\n", S[i].Tacgia);
		printf("Nam xuat ban: %d\n", S[i].Nam);
	}
}
void TenTG(Sach S[], int n){
	int dem = 0;
	char Ten[50];
	printf("- Nhap ten tac gia:\n"); fflush(stdin); gets(Ten);
	for(int i=0; i<n; i++){
		if(strcmp(Ten, S[i].Tacgia)==0){
			dem += 1;
		}
	}
	printf("- Tac gia cua %d cuon sach", dem);
}
void ThongKe(Sach S[], int n){
	Sach t;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(S[i].Nam > S[j].Nam){
				t = S[i];
				S[i] = S[j];
				S[j] = t;
			}
		}
	}
}
int main(){
	int n;
	bool DaNhap = false;
    int k;
	Sach S[100];// do nó nằm trên trc khi nhập n;
	do{
		printf("Nhap so luong sach: \n");
		scanf("%d", &n);
	}
	while(n<1);
	while(true){
	  system("cls");
        printf("                                     ------------------------------------------\n");
        printf("                                     |                 MENU                   |\n");
        printf("                                     |      1. Nhap thong tin sach            |\n");
        printf("                                     |      2. Xuat thong tin sach            |\n");
        printf("                                     |      3. Thong ke sach theo nam         |\n");
        printf("                                     |      4. Dem tac gia cua bao nhieu sach |\n");
        printf("                                     |      5. Thoat                          |\n");
        printf("                                     ----------------------------------------\n");
        printf("                                     **       Nhap lua chon cua ban        **\n");
        scanf("%d",&k);
        switch(k){
        	case 1:
        		printf("\nBan da chon nhap thong tin sach!\n");
                Nhap(S, n);
                printf("\nBan da nhap thanh cong!\n");
                DaNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
            	if(DaNhap){
                    printf("\nBan da chon xuat tat ca thong tin sach!\n");
                    Xuat(S, n);
                }else{
                    printf("\nBan chua nhap thong tin sach!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
            	if(DaNhap){
                    printf("\nBan da chon thong ke thong tin sach theo nam xuat ban!\n");
                    ThongKe(S, n);
                    Xuat(S, n);
                }else{
                    printf("\nBan chua nhap thong tin sach!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
            	if(DaNhap){
                    printf("\nBan da chon dem so sach cua cua mot tac gia!\n");
                    TenTG(S, n);
                }else{
                    printf("\nBan chua nhap thong tin sach!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 5:
            	printf("\nBan da chon thoat chuong trinh");
            	getch();
            	return 0;
            default:
                printf("\nKhong co chuc nang nay!\n");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }
}

    
	
		


