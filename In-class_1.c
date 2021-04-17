#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>


float Calc (float op1, char mode, float op2){

	if (mode=='+'){
		return op1+op2;}
	else if (mode=='-'){
		return op1 - op2;}
	else if (mode=='*'){
		return op1 * op2;}
	else if (mode=='/'){
		return op1/op2;}
	else
		return 0;


}

int* divisor(int num){

	int x=num;
	int y=0;
	int divs[num];
	while(x>0){
		if(num%x==0){
			divs[y]=x;
			y++;}
		x--;}
	if(y!=num){
		divs[y]=-1;}
   
	while(x<num && divs[x]!=-1){
		printf("%i \n",divs[x]);
		x++;}		
	return divs;
}

void pgen(int len){
	srand(time(NULL));
	int r;
	int x=0;
	char p[len];
	while(x<len){
		r=(rand()%94)+33;
		p[x]=r;
		x++;}
	x=0;
	while(x<len){
		printf("%c",p[x]);
		x++;}
	printf("\n");	




}
int main(){
	float x;
	char a;
	float y;
	int z;
	int b;
	int c;
	printf("Caluclate: Insert Operand 1 \n");
	scanf("%f",&x);
	printf("Calculate: Insert Operation (+,-,*,/) \n");
	scanf(" %c",&a);
	printf("Calculate: Insert Operand 2 \n");
	scanf("%f",&y);
	x=Calc(x,a,y);
	printf(" = %f \n",x);
	b=0;
	printf("Divisor: Enter Int \n");
	scanf("%i",&z);
	
	int* divs=  divisor(z);
	printf("= \n");

	printf("Password Generator: Insert length \n");
	scanf("%i",&c);
	pgen(c);
	return 0;
}









