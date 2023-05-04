#include <iostream>
#include "conta_bancaria.h"

int main(){
	conta_bancaria* conta1 = cria();
	imprime(conta1);
	conta_bancaria* conta2 = cria();
	
	deposita(conta1, 2000);
	imprime(conta1);
	
	saca(conta1, 1500);
	imprime(conta1);
	
	transfere(conta1, conta2, 1000);
	imprime(conta1);
	imprime(conta2);
	
	return 0;
}