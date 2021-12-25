#include<stdio.h>
int main(){ // Tinh S(n)= 1 + 1/2 + 1/3 + ... +1/n 
    int n;
    printf ("Nhap so n=");
    scanf("%d",&n);
	float S = 0;
	if(n>0){
	for(int i=1;i<=1;i++){
		S = S+ 1.0/i ;
	}printf("Gia tri S = %f",S);
	}else{
		printf("Error");
	}
	
}
