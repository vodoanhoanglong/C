#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int Nhap(float *a, int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &*(a + i));
	}
}
int Xuat(float *a, int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = %.2f\n", i, *(a + i));
	}
}
int MaxDuong(int n, float *a, float *max){
	max = (a + 0);
	    for(int i=0; i<n; i++){
		    if(*max < *(a + i) && *(a + i) > 0){
			max = (a + i);
		    }
	    }
	    printf("\nPhan tu duong lon nhat la: %.2f\n", *max);
	if(*max < 0){
		printf(" => Khong co phan tu duong!");
	}
}
int Fibo(int n, float *a){
	float t, t1 = *(a + 0), t2 = *(a + 1);
	if(t1 == 0 || t2 == 1){
		for(int i=0; i<n; i++){
			printf("%f", *(a + 0));
			t = t1 + t2;
			t1 = t2;
			t2 = t;
		}
	printf("\nDay so co tinh chat cua day Fibo\n");
	}
	else
	printf("\nDay so khong co tinh chat Fibo\n");
}
int Menu(float *a, int n){
	int k;
	float *max;
	bool DaNhap = false;
	*(a + n);
	while(true){
	  system("cls");
        printf("                                     ----------------------------------------\n");
        printf("                                     |                MENU                  |\n");
        printf("                                     |      1. Nhap day                     |\n");
        printf("                                     |      2. Xuat day                     |\n");
        printf("                                     |      3. Tim max duong                |\n");
        printf("                                     |      4. Kiem tra tinh Fibonacci      |\n");
        printf("                                     |      5. Thoat                        |\n");
        printf("                                     ----------------------------------------\n");
        printf("                                     **       Nhap lua chon cua ban        **\n");
        scanf("%d",&k);
        switch(k){
        	case 1:
        		printf("\nBan da chon nhap day!\n");
                Nhap(a, n);
                printf("\nBan da nhap day thanh cong!\n");
                DaNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
            	if(DaNhap){
                    printf("\nBan da chon xuat day!\n");
                    Xuat(a, n);
                }else{
                    printf("\nBan chua nhap day!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 3:
            	if(DaNhap){
                    printf("\nBan da chon tim max duong!\n");
                    MaxDuong(n, a, max);
                }else{
                    printf("\nBan chua nhap day!!!!\n");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 4:
            	if(DaNhap){
                    printf("\nBan da chon kiem tra tinh Fibonacci!\n");
                    Fibo(n, a);
                }else{
                    printf("\nBan chua nhap day!!!!\n");
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
int main(){
	float *a;
	int n, k;
	float *max;
	bool DaNhap = false;
	do{
		printf("Nhap so luong phan tu: \n");
		scanf("%d", &n);
	}
	while(n<1);
    a = (float *)malloc(n * sizeof(float));
    if(a == NULL){
    	printf("Khong the cap phat!\n");
    	exit(0);
    }
    Menu(a, n);
    free(a);
}
    
    
