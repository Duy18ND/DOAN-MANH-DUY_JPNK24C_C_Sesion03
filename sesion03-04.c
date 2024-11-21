#include<stdio.h>
int main(){
	//khai bao bien toan, van, anh, tong diem, diem trung binh 
	float toan, van, anh, sum,ave; 
	//nhap diem toan, van ,anh 
	printf("diem toan la:");
	scanf("%f",&toan);
	printf("diem van la:");
	scanf("%f",&van);
	printf("diem anh la:");
	scanf("%f",&anh);
	 //tinh tong diem và diem trung binh
	 sum = toan + van + anh;
	 ave = sum / 3;
	 //in ra màn hinh
	 printf("tong diem toan van anh la: %.2f \n",sum);
	 printf("diem trung binh toan van anh la: %.2f",ave); 
	 return 0; 
} 
