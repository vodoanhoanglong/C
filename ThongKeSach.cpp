#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct Sach{
	char Ten[50];
	char TacGia[50];
	int Nam;
};
typedef Sach S;

void Nhap(Sach *S, int n);
void Xuat(Sach *S, int n);
int DemSach(Sach *S, int n);
void SapXep(Sach *S, int n);
void Loc(Sach *S, int n, int m[], int k[]);
int Menu(Sach *S, int n, int m[], int k[]);

int main(){
	int dem[100];
	int m[100];
	int k[100];
	int n;
	Sach *S;
	do{
		printf("Nhap so luong sach: \n");
		scanf("%d", &n);
	}while(n<=0);
	S = (struct Sach*)malloc(n * sizeof(struct Sach));
	Menu(S, n, m, k);
	free(S);
}

void Nhap(Sach *S, int n){
	for(int i=0; i<n; i++){
		printf("- Nhap thong tin sach thu %d\n", i+1);
		printf("Nhap ten sach: \n");
		fflush(stdin);
		gets((S+i)->Ten);
		printf("Nhap tac gia: \n");
		fflush(stdin);
		gets((S+i)->TacGia);
		printf("Nhap nam xuat ban: \n");
		scanf("%d", &(S+i)->Nam);
	}
}
void Xuat(Sach *S, int n){
	for(int i=0; i<n; i++){
	printf("-Thong tin sach %d\n", i+1);
	printf("Ten: %s\n", (S+i)->Ten);
	printf("Tac gia: %s\n", (S+i)->TacGia);
	printf("Nam XB: %d\n", (S+i)->Nam);	
}
}
int DemSach(Sach *S, int n){
	char x[50];
	printf("Nhap ten tac gia can dem so cuon sach: \n");
	fflush(stdin);
	gets(x);
	int dem = 0;
	for(int i=0; i<n; i++){
		if(strcmp(x, (S+i)->TacGia)==0){
			dem++;
		}
	}
	return dem;
}
void SapXep(Sach *S, int n){
    int t;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
		    if((S+i)->Nam > (S+j)->Nam){
		    	t = (S+i)->Nam;
		    	(S+i)->Nam = (S+j)->Nam;
		    	(S+j)->Nam = t;
		    }
	    }
	}
}
void ThongKe(Sach *S, int n, int m[], int k[]){
	int l = 0;
	m[l] =  1;
	SapXep(S, n);
    for(int i=1; i<=n; i++){
    		if((S+i)->Nam == (S+i-1)->Nam){
    			m[l] = m[l] + 1;
				k[l] = (S+i)->Nam;
			}
			else{
				l = l+1;
				m[l] = 0;
				m[l] = m[l] + 1;
				if((S+0)->Nam != (S+1)->Nam){
					k[l-1] = (S+i-1)->Nam;
				}
				k[l] = (S+i)->Nam;
			}
		}
		for(int i=0; i<l; i++){
			printf("%d : %d cuon\n", k[i], m[i]);
		}
}
int Menu(Sach *S, int n, int m[], int k[]){
	bool danhap = false;
	int p;
	while(true){
		system("cls");
		printf("-----Menu-------\n");
		printf("1. Nhap du lieu sach \n");
		printf("2. Xuat danh sach sach\n");
		printf("3. Dem theo tac gia\n");
		printf("4. Thong ke theo nam\n");
		printf("5. Thoat\n");
		scanf("%d", &p);
	switch(p){
	case 1:
		printf("Ban da chon 1\n");
	    Nhap(S, n);
		printf("Ban da nhap thanh cong\n");
		danhap = true;
		printf("Nhan phim bat ky de tiep tuc\n");
		getch();
		break;
	case 2:
	   if(danhap){
		printf("Ban da chon 2\n");
	    Xuat(S, n);
	   }else{
		   printf("Ban chua nhap du lieu sach\n");
	   }
	   printf("Bam phim bat ky de tiep tuc\n");
	   getch();
	   break;
	case 3:
	   if(danhap){
		printf("Ban da chon 3\n");
	    printf("Tac gia cua %d cuon sach\n", DemSach(S, n));
	   }else{
		   printf("Ban chua nhap du lieu sach\n");
	   }
	   printf("Bam phim bat ky de tiep tuc\n");
	   getch();
	   break;
	case 4:
	   if(danhap){
		printf("Ban da chon 4\n");
	    ThongKe(S, n, m, k);
	   }else{
		   printf("Ban chua nhap du lieu sach\n");
	   }
	   printf("Bam phim bat ky de tiep tuc\n");
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