#include<stdio.h>
#include<stdlib.h>
typedef struct PhanSo
{
    int tu;
    int mau;
};
enum SoSanh{
    LONHON = 1,
    BANGNHAU = 0,
    BEHON = -1
};
int uocChungLonNhat(int a, int b);
void nhapPhanSo(PhanSo *phanso);
void nhapPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatPhanSo(PhanSo *phanso);
void rutGonPhanSo(PhanSo *phanso);
PhanSo* tongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatTongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
PhanSo* hieuPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatHieuPhanSo(PhanSo *phanso1, PhanSo *phanso2);
PhanSo* tichPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatTichPhanSo(PhanSo *phanso1, PhanSo *phanso2);
PhanSo* thuongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void xuatThuongPhanSo(PhanSo *phanso1, PhanSo *phanso2);
void doiDauPhanSo(PhanSo *phanso);
float chuyenDoiSangSo(PhanSo *phanso);
int soSanh(PhanSo *phanso1, PhanSo *phanso2);
void xuatKetQuaSoSanh(PhanSo *phanso1, PhanSo *phanso2);
int main()
{
    PhanSo *phanso1, *phanso2;
    phanso1 = (PhanSo*) malloc(sizeof(struct PhanSo));
    phanso2 = (PhanSo*) malloc(sizeof(struct PhanSo));
    nhapPhanSo(phanso1,phanso2);
    xuatPhanSo(phanso1);
    xuatPhanSo(phanso2);
    xuatKetQuaSoSanh(phanso1,phanso2);
    free(phanso1);
    free(phanso2);
    return 0;
}
void nhapPhanSo(PhanSo *phanso)
{
    // nh?p t? vŕ m?u
    printf("\nTu so: ");
    scanf("%d", &phanso->tu);
    do{
        printf("\nMau so: ");
        scanf("%d", &phanso->mau);
        if(phanso->mau == 0){
            printf("\n mẫu bằng 0, nhập lại:");
        }
    } while(phanso->mau ==0);
}
void nhapPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    printf("\nPhan so thu 1:\n ");
    nhapPhanSo(phanso1);
    printf("\nPhan so thu 2: \n");
    nhapPhanSo(phanso2);
}
void xuatPhanSo(PhanSo *phanso)
{
    // rút g?n phân s?
    rutGonPhanSo(phanso);
    doiDauPhanSo(phanso);
    // in phân s?
    printf("\n%d/%d", phanso->tu, phanso->mau);
}
void rutGonPhanSo(PhanSo *phanso) 
{
    // B1: těm u?c chung l?n nh?t c?a t? vŕ m?u
    int uocchunglonnhat = uocChungLonNhat(phanso->tu, phanso->mau);
    // B2: rút g?n phân s?
    phanso->tu = phanso->tu / uocchunglonnhat;
    phanso->mau = phanso->mau / uocchunglonnhat;
}
int uocChungLonNhat(int number1, int number2)
{// s? d?ng d? quy
     if (number2 == 0) return number1;
    return uocChungLonNhat(number2, number1 % number2);
}
PhanSo* tongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    PhanSo *tong;
    tong = (PhanSo*) malloc(sizeof(struct PhanSo));
    tong->tu = phanso1->tu * phanso2->mau + phanso1->mau * phanso2->tu;
    tong->mau = phanso1->mau * phanso2->mau;
    return tong;
}
void xuatTongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh tong phan so
    PhanSo *tong = tongPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(tong);
}
PhanSo* hieuPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
	PhanSo *hieu;
	hieu = (PhanSo*)malloc(sizeof(struct PhanSo));
	hieu->tu = phanso1->tu * phanso2->mau - phanso1->mau * phanso2->tu;
    hieu->mau = phanso1->mau * phanso2->mau;
    return hieu;
}
void xuatHieuPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh hieu cua phan so
    PhanSo *hieu = hieuPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(hieu);
}
PhanSo* tichPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
	PhanSo *tich;
	tich = (PhanSo*)malloc(sizeof(struct PhanSo));
	tich->tu = phanso1->tu * phanso2->tu;
    tich->mau = phanso1->mau * phanso2->mau;
    return tich;
}
void xuatTichPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh tich cua phan so
    PhanSo *tich = tichPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(tich);
}
PhanSo* thuongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
	PhanSo *thuong;
	thuong = (PhanSo*)malloc(sizeof(struct PhanSo));
	thuong->tu = phanso1->tu * phanso2->mau;
    thuong->mau = phanso1->mau * phanso2->tu;
    return thuong;
}
void xuatThuongPhanSo(PhanSo *phanso1, PhanSo *phanso2)
{
    // tinh thuong cua phan so
    PhanSo *thuong = thuongPhanSo(phanso1, phanso2);
    // xuat phan so
    xuatPhanSo(thuong);
}
void doiDauPhanSo(PhanSo *phanso)
{
	if(phanso->mau < 0){// không được so sánh phân số với 1 số
		phanso->tu = -(phanso->tu);
		phanso->mau = -(phanso->mau);
	}
}
float chuyenDoiSangSo(PhanSo *phanso)
{
	return (float)phanso->tu / phanso->mau;
}
int soSanh(PhanSo *phanso1, PhanSo *phanso2)
{
    int ketquasosanh = BANGNHAU;// ban đầu cho kết quả bằng 0 tức 2 số bằng nhau
	float number1 = chuyenDoiSangSo(phanso1);
	float number2 = chuyenDoiSangSo(phanso2);
	if (number1 > number2) 
	{
		ketquasosanh = LONHON;
	}
	else if (number1 < number2) 
	{
		ketquasosanh = BEHON;
	}
	return ketquasosanh;
}
void xuatKetQuaSoSanh(PhanSo *phanso1, PhanSo *phanso2){
    int ketquasosanh = soSanh(phanso1,phanso2);
    if(ketquasosanh == LONHON){
        printf("\nphan so 1 > phan so 2!");
    }
    else if(ketquasosanh == BEHON){
        printf("\nphan so 1 < phan so 2!");       
    }
    else
    {
        printf("\nphan so 1 = phan so 2!");       
    }
    
}