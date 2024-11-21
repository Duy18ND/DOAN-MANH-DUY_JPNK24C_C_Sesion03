#include<stdio.h>
int main(){
	//khai bao bien chieudai, chieucao, S_tamgiac 
	float chieudai, chieucao, S_tamgiac;
	//nhap chieudai, chieucao 
	printf("chieu dai tam giac la:");
	scanf("%f",&chieudai);
	printf("chieu cao tam giac la:");
	scanf("%f",&chieucao);
	// tính dien tích tam giac = 1/2 * b * h 
	 S_tamgiac = 0.5  * (chieudai * chieucao);
	 printf("dien tich tam giac la: %.1f",S_tamgiac); 
	  
	return 0; 
	 
} 
