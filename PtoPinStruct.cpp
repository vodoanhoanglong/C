#include<stdio.h>
typedef struct Sach{
    int id;
    char name[30];
};
void nhapSach(int *n, Sach *&sach);// nhap danh sach sach // Sach **sach
void xuatSach(int n, Sach sach[]);
int main(){
    Sach *sach;
    int n;
    nhapSach(&n,sach); //(&n, &sach)
    xuatSach(n,sach);
}
void nhapSach(int *n, Sach *&sach){ //Sach **sach
    printf("nhap n:");
    scanf("%d", n);
    sach= new Sach[*n]; // *sach = ....
    for(int i=0;i<*n;i++){
        printf("Nhap id: ");
        scanf("%d", &(sach+i)->id); //&(*sach+i)->id
        fflush(stdin);
        printf("Nhap name: ");
        gets((sach+i)->name); //(*sach+i)
    }
}
void xuatSach(int n, Sach sach[]){
    for(int i=0;i<n;i++){
        printf("%d\t %s\n",sach[i].id, sach[i].name);
    }
}