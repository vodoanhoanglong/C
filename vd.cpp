#include <stdio.h>
// //vd1
// int main(){
//     char chuoi[]={"CNTT"};
//     char *contro=chuoi;
//     contro++;
//     printf("%c", *contro);
// }
// //vd2
// // int main(){
// //     char *s = "Abc";
// //     while(*s)
// //        printf("%c\n", *s++);/* con trỏ s++ thì ra Abc, còn con trỏ ++s thì ra bc */
// // }
// //vd3
// // void f(int a[]){
// //     for(int i = 0; i<3; i++){
// //         a[i]++;
// //     }
// // }
// // main(){
// //     int i, a[]= {10, 20, 30};
// //     f(a);
// //     for(i=0; i<3; ++i){
// //         printf("%d", a[i]);
// //     }
// // }
// // vd4
// // int main();
// // void main(){ /*int mới đúng*/
// //     printf("okey");
// // }
// //vd5
// int main(){
//     int a = 3;
//     int z = 3;
//     int s = 1;
//     int b = ++a+a+++--a;//->13
//     int c = ++z+z+++z++; //->14 z++: z=z+1
//     int d = ++s + ++s + ++s+s++;//->14
//     printf("%d\n", b);
//     printf("%d\n", c);
//     printf("%d", d);
// }
// //vd6
// // int main(){
// //     float x = 'a';
// //     printf("%f", x);
// // }
// //vd7
// // int main(){
// //     float f1=0.1;
// //     if(f1 == 0.1) // k thể so sánh vì giống khai báo ở trên
// //     printf("oke");
// //     else printf("d");
// // }
// //vd8
// // int main(){
// //     float f1=0.1;
// //     if(f1==0.1f)// ra oke vì 0.1f thì so sánh đc
// //     printf("oke");
// //     else printf("sai");
// // }
// //vd9
// // int main(){
// //     int a =2;
// //     int b=0;
// //     int y=(b==0)?a:(a>b)?(b=1):a;
// //     printf("%d\n", y);
// // }
// // vd10
// // void main(){ //void k ra la tuỳ chương trình chứ vẫn chay
// //     int x=5;
// //     if(x<1)
// //     printf("hello");
// //     if(x==5)
// //     printf("hi");
// //     else printf("no");
// // }
// // vd11
// // int main(){
// //     int x=1;
// //     if(x>0)
// //     printf("haha");
// //     else if(x>0)
// //     printf("hello");
// // }
// vd12
//     int main(){
//        int x=0;
//         if(x==0)
//         printf("true, ");
//         else if(x=10)
//         printf("false, ");
//     printf("%d\n", x);
// }
// //vd13
// int main(){
//     int a=1;
//     if(a--)
//       printf("true");
//       if(a++)
//             printf("false");
// }
// vd14
// // int main(){
// //     int x=1;
// //     if(x)
// //          printf("hello");
// //          printf("world");
// //     else 
// //          printf("xas");
// // // }
// int main(){
//     int x=5;
//     if(x<1);
//     printf("Hello");
// }
// vd15
// int main()
// {
//     int ints[] = { 0, 1, 2, 3 };
//     int* i1 = ints + 1;
//     int a = ++*i1;
//     int b = a + *i1;
//     printf("%d\n", b);//->4
// }
// vd16
// int main(){
//     int a[2][2][3] = {{{1,2,3},{4,5,6}},{{7,8,9},{10,11,12}}};
//     printf("%d", a[0][1][2]);
// }
// vd17
// int main(){
//     int a[2][2][3] = {0,1,2,3,4,5,6,7,8,9};
//     printf("%d", a[1][0][2]);
// }
// int main(){
//     int x=0;
//     for(int i =0; i<3;i++){
//         for(int j=1; j<4; j++)
//             x=x+1;
//     }
//     printf("%d", x);
// }
// int main(){
//     char arr[10] = {'G', 'I', 'A','O','T', 'H','O','N','G'};
//     char *p;
//     p = (char *)(arr+3)[2];
//     printf("%c", p);
// }
int main(){
    // int i, j;
    // i = j =2;
    // if(i--&&i==1){ 
    //    printf("Hello");
    // }else{ 
    // printf("g");
    // }
//     int i, j;
//     i=j=2;
//     while(i--&&++j)
//       printf("%d %d", i, j);
// }