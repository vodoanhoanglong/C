#include<stdio.h>
#include<math.h>
void nhap (float &a, float &b, float &c){
	printf("Nhap x,y,z: \n");
	scanf("%f%f%f",&a,&b,&c);
	}
int giaiPT(float a, float b, float c){
    if(a==0){
    	if(b==0){
    		printf("\nPhuong trinh vo nghiem");
    		}
    	else {
    		printf("\nPhuong trinh co nghiem x = %.2f", -c/b);
    		}
    	}
    else {
    	float d;
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %.2f",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %.2f,%.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    
  }
void xuat (float a, float b, float c){
	printf(" ", giaiPT(a,b,c));
	}
int main (){
    float x,y,z;
    nhap(x,y,z);
    xuat(x,y,z);
}

	
