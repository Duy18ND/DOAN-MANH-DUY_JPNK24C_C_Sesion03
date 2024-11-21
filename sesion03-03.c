#include<stdio.h>

int main(){
	//khai bao bien bankinh, dien tich, chuvi 
	float bankinh, dientich, chuvi;
	//nhap bien pi, bankinh 
	float pi = 3.14;
	printf("ban can nhap ban kinh R:  ");
	scanf("%f",&bankinh);
	//tinh chuvi cong thuc => 2*pi*r 
	chuvi = 2 * pi * bankinh;
	dientich = pi * bankinh * bankinh;
	printf("chu vi hinh tron la: %.2f \n",chuvi);
	printf("dien tich hinh tron la: %.2f",dientich);
	
	return 0; 
} 
