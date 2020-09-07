// cho 2 so a,b xuat ra gia tri lon hon (dung ham)
// co the tach ra nhung ham: nhap, tim gtln, xuat
// hieu ro ban chat cua truyen tham so theo tham tri va tham chieu
#include<stdio.h>
void Nhap(int &a, int &b){
	printf("Nhap x, y: ");
	scanf("%d%d", &a, &b);
}
int GTLN(int a, int b){
	if(a>b)
		return a;
	else
		return b;	
}
void Xuat(int a, int b){
	printf("Gia tri lon hon la: %d \n", GTLN(a,b));
}
int main(){
	int x,y;
	Nhap(x,y);
	printf("\nGia tri cua x la %d, y la %d \n",x,y);
	Xuat(x,y);
	printf("\n");
}
