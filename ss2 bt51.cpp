 #include<stdio.h>

int main (){ 
// nhap chieu dai va chieu rong
float d,r;
 
// nhap chieu dai va chieu rong bang scanf

  printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &d);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &r);

 
// thuc hien tinh dien tich hcn
 printf("dien tich hcn la: %.2f ",d*r); 
  printf("chu vi hcn la: %.2f ",(d+r)*2); 
   


return 0; 
} 
