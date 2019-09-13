#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ac-bd)+(ad+bc

struct complex
{
    float real;
    float imag;
};

typedef struct complex Complex;
//Letra a
Complex soma(Complex c1, Complex c2){
	Complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	return c3;
}

//Letra b
Complex sub(Complex c1, Complex c2){
	Complex c4;
	c4.real = c1.real - c2.real;
	c4.imag = c1.imag - c2.imag;
	return c4;
}

//Letra c
Complex scal(Complex c1, float scl){
	Complex c5;
	c5.real = scl * c1.real;
	c5.imag =  scl * c1.imag;
	return c5;
}

//Letra d
//ac-bd)+(ad+bc
Complex mult(Complex c1, Complex c2){
	Complex c6;
	c6.real = (c1.real * c2.real) - (c1.imag * c2.imag);
	c6.imag = (c2.real * c1.imag) + (c2.imag * c1.real);
	return c6;
}

//Letra e
float norm(Complex c1){
	float c7;
	c7 = sqrt(c1.real * c1.real + c1.imag * c1.imag);
	return c7; 
}

//Letra f
Complex conju(Complex c1){
	Complex c8;
	c8.real = c1.real;
	c8.imag = -c1.imag;
	return c8;
}

//Letra g
Complex divs(Complex c1, Complex c2){
	float denm = norm(c2)*norm(c2);
	Complex c9;
	c9.real=(c1.real*c2.real+c1.imag*c2.imag) / denm;
	c9.imag=(c2.real*c1.imag+c1.real*c2.imag) / denm;
	return c9;
}

int main(){

	float scl;
    Complex c1 = {4,5};
    Complex c2 = {3,4};
    Complex c3 = soma(c1,c2);
    Complex c4 = sub(c1,c2);
    Complex c5 = scal(c1, scl);
    Complex c6 = mult(c1,c2);
    float c7 = norm(c1);
    Complex c8 = conju(c1);
    Complex c9 = divs(c1,c2);
    
    //Complex 
    printf("C1 real = %f imag = %f \n", c1.real,c1.imag);
    printf("C2 real = %f imag = %f \n", c2.real,c2.imag);
    printf("C3 real = %f imag = %f \n", c3.real,c3.imag);
    printf("C4 real = %f imag = %f \n", c4.real,c4.imag);
    printf("C5 real = %f imag = %f \n", c5.real,c5.imag);
    printf("C6 real = %f imag = %f \n", c6.real,c6.imag);
    printf("C7 norma = %f \n", c7);
    printf("C8 conjugado= %f \n", c8);
    printf("C6 real = %f imag = %f \n", c9.real,c6.imag);
    printf(" ");
    return 0;
}