//BAI 1
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void Hello();
float Nhap(float &a, float &b);
float Cong(float a, float b);
float Tru(float a, float b);
float Nhan(float a, float b);
float Chia(float a, float b);
float Mu(float a, float b);
void Menu(float a, float b);

int main(){
	float a, b;
	printf("In ra man hinh cau chao Hello World\n");
	Hello();
	printf("May tinh bo tui don gian\n");
	Menu(a, b);
}  
void Hello(){
	printf("Hello World\n");
}
float Nhap(float &a, float &b){
	scanf("%f%f", &a, &b);
}
float Cong(float a, float b){
	float S = a + b;
	return S;
}
float Tru(float a, float b){
	float S = a - b;
	return S;
}
float Nhan(float a, float b){
    float S = a * b;
	return S;
}
float Chia(float a, float b){
	float S = a / b;
	return S;
}
float Mu(float a, float b){
	float S = pow(a, b);
	return S;
}  
void Menu(float a, float b){
    int L;
	bool Danhap = false;
	while(true){
	printf("\n==============Menu==============\n");
	printf("0. Nhap 2 so a va b can tinh\n");
	printf("1. Thuc hien phep tinh cong\n");
	printf("2. Thuc hien phep tinh tru\n");
	printf("3. Thuc hien phep tinh nhan\n");
	printf("4. Thuc hien phep tinh chia\n");
	printf("5. Thuc hien phep tinh mu\n");
	printf("6. Thoat\n");
	printf("-----Nhap lua chon cua ban----------\n");
	scanf("%d", &L);
	system("cls");
	    switch(L){
            case 0:
            	printf("Moi ban nhap 2 so a va b:\n");
            	Nhap(a, b);
            	printf("Ban da nhap thanh cong\n");
            	Danhap = true;
            	getch();
            	break;
		    case 1:
		        if(Danhap){
		        	printf("Ban da chon thuc hien phep cong\n");
		        	printf("%.2f + %.2f = %.2f", a, b, Cong(a, b));
		    
		        }else{
		        	printf("Ban chua nhap 2 so a va b\n");
				}
				getch();
				break;
			case 2:
		        if(Danhap){
		        	printf("Ban da chon thuc hien phep tru\n");
		        	printf("%.2f - %.2f = %.2f", a, b, Tru(a, b));
		        	
		        }else{
		        	printf("Ban chua nhap 2 so a va b\n");
				}
				getch();
				break;
			case 3:
		        if(Danhap){
		        	printf("Ban da chon thuc hien phep nhan\n");
		        	printf("%.2f * %.2f = %.2f", a, b, Nhan(a, b));
		        
		        }else{
		        	printf("Ban chua nhap 2 so a va b\n");
				}
				getch();
				break;
			case 4:
		        if(Danhap){
		        	printf("Ban da chon thuc hien phep chia\n");
		        	printf("%.2f / %.2f = %.2f", a, b, Chia(a, b));
		        
		        }else{
		        	printf("Ban chua nhap 2 so a va b\n");
				}
				getch();
				break;
			case 5:
		        if(Danhap){
		        	printf("Ban da chon thuc hien phep tinh mu\n");
		        	printf("%.2f ^ %.2f = %.2f", a, b, Mu(a, b));
		        
		        }else{
		        	printf("Ban chua nhap 2 so a va b\n");
				}
				getch();
				break;
			case 6:
				printf("Ban da chon thoat chuong trinh\n");
				exit(0);
				break;
			default:
				printf("Khong co chua nang nay\n");
				getch();
				break;
		    }
        }
	}


