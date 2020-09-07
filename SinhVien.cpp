// định nghĩa 1 kiểu struct sinhvien
// nhập, xuất 1 sinh viên: họ tên, giới tính, điểm(toán,lí, hóa)
// tính điểm trung bình của sinh viên
// hàm: định nghĩa --> xây dựng --> gọi hàm
#include<stdio.h> 
#include<stdlib.h>
enum GioiTinh{
    NAM = 1,
    NU = 2
};// thiếu ;
typedef struct Diem{
    float toan;
    float ly;
    float hoa;
};
typedef struct SinhVien{
    char hoten[100];
    int gioitinh;// 1: nam, 2: nu, khac 1,2: khac
    Diem *diem;
};
void nhapSinhVien(SinhVien *sinhvien);
void xuatSinhVien(SinhVien *sinhvien);
float tinhDiemTrungBinh(SinhVien *sinhvien);
int main(){
    SinhVien *sinhvien;
    sinhvien=(SinhVien*)(malloc(sizeof(SinhVien)));
    nhapSinhVien(sinhvien);
    xuatSinhVien(sinhvien);
   return 0; 
}
void nhapSinhVien(SinhVien *sinhvien){
    // gets thì thêm fflush
    fflush(stdin);
    printf("Nhap ho ten sinh vien: ");
    gets(sinhvien->hoten);
    printf("Nhap gioi tinh: ");
    scanf("%d",&sinhvien->gioitinh);
    printf("Nhap diem:");
    printf("Diem toan: ");
    sinhvien->diem = (Diem*)(malloc(sizeof(Diem)));
    scanf("%f",&sinhvien->diem->toan);
    printf("Diem ly: ");
    scanf("%f",&sinhvien->diem->ly);
    printf("Diem hoa: ");
    scanf("%f",&sinhvien->diem->hoa);
}
void xuatSinhVien(SinhVien *sinhvien){
    float diemtrungbinh = tinhDiemTrungBinh(sinhvien);
    printf("%s \t",sinhvien->hoten);
    if(sinhvien->gioitinh==NAM){
        printf("nam \t");  
    }
    else if(sinhvien->gioitinh==NU){
        printf("nu \t");  
    }
    else
    {
        printf("khac \t");  
    }
    printf("%.2f\t %.2f\t %.2f \t%.2f", sinhvien->diem->toan,sinhvien->diem->ly,sinhvien->diem->hoa, diemtrungbinh);
    
}
float tinhDiemTrungBinh(SinhVien *sinhvien){
    return (sinhvien->diem->toan + sinhvien->diem ->ly + sinhvien ->diem->hoa)/3;
}