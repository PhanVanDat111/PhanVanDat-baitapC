#include<stdio.h>


int main (){
	float soKwh1, soKwh2;
     float giaTienDien=0; 
	printf (" nhap so kwh su dung trong 1 thang  truoc :  ");
		scanf("%f", &soKwh1);
		
    printf (" nhap so kwh su dung trong 1 thang  sau/n :  ");
	scanf("%f", &soKwh2);
		 
// so kwh dien su dung trong 1 thang	
	float soKwh1thang= soKwh2-soKwh1;
	
// tong tien dien trong 1 thang
 
 
   printf ( " so kwh da su dung trong 1 thang la: %.2f",soKwh1thang);
	
         	if(0<soKwh1thang&&soKwh1thang<50) 
           {
              giaTienDien+=soKwh1thang*10000; 
        	 
	       }else if (soKwh1thang<100) 
	       {
	       giaTienDien +=(soKwh1thang-50)*15000;
	       
		   }else if (soKwh1thang<150)
		   {
		   	giaTienDien +=(soKwh1thang-100)*20000;
		   	
		   }else if (soKwh1thang<200)
		   {
		   	giaTienDien+=(soKwh1thang-150)*25000; 
		   	
		   } else
		    giaTienDien+=(soKwh1thang-200)*30000; 
		   
		    
		   printf ("\ngia tien dien la : %.2f",giaTienDien);
	
	return 0;
}
