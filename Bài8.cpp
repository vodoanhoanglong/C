#include <stdio.h>
#include <string.h>

void KiemTra(char s[]);
void Dem(char s[]);
void Trai(char s[], int x);
void Phai(char s[], int k);
void BatKy(char s[], int n, int m);

int main(){
    char s[100];
    int x, k, m, n;
    printf("Nhap xau: \n");
    gets(s);
    KiemTra(s);
    Dem(s);
    Trai(s, x);
    Phai(s, k);
    BatKy(s, n, m);
}
void KiemTra(char s[]){
    int l;
    for(int i=0; i<strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            l = 1;
        }else{ 
            l = 0;
            break;
        }
    }
    if(l == 1) printf("Chuoi da nhap toan so\n");
    else printf("Chuoi da nhap khong phai toan so\n");
}
void Dem(char s[]){
    bool d = false;
	int dem = (s[0] != ' ');
    for (int i = 0; i < strlen(s)-1; i++)
    {
        if(s[i] >= '0' && s[i] <= '9'){
            printf("Chuoi vua nhap co so nen k dem duoc so tu\n");
            dem = 0;
            break;
        }else if(s[i] == ' ' && s[i + 1] != ' ')
        {
           dem++;
        }
    }
    printf("So tu trong xau la: %d \n", dem);
}
void Phai(char s[], int x){
    printf("\nNhap so ky tu can lay ben phai: \n");
    scanf("%d", &x);
    for(int i=strlen(s)-x; i<strlen(s); i++){
        printf("%c", s[i]);
    }
}
void Trai(char s[], int k){
    printf("\nNhap so ky tu can lay ben trai: \n");
    scanf("%d", &k);
    for(int i=0; i<k; i++){
        printf("%c", s[i]);
    }
}
void BatKy(char s[], int n, int m){
    printf("\nNhap vi tri bat dau lay ki tu: \n"); scanf("%d", &m);
    printf("Nhap so ky tu can lay bat dau tu vi tri thu %d: \n", m); scanf("%d", &n);
    for(int i=m-1; i<m+(n-1); i++){
        printf("%c", s[i]);
    }
}
              
    
