#include <stdio.h>

int suma(int op1, int op2){
    return (op1+op2);
}

int resta(int op1, int op2){
    return (op1-op2);
}

int multiplicacio(int op1, int op2){
    return (op1*op2);
}

int divisio(int op1, int op2){
    return (op1/op2);
}

int mayor(int op1, int op2){
	if(op1>op2)
	{
		return op1;
	}else{
		return op2;
	}
}
