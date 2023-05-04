struct conta_bancaria{
	long int saldo; 
};

conta_bancaria* cria(){
	conta_bancaria* n = new conta_bancaria;
	n -> saldo = 1000;
	return n;
}

void libera(conta_bancaria* c){
	delete c;
}

void imprime(conta_bancaria* c){
	std::cout << "" << c << "\n";
	std::cout << "Saldo da conta : " << c -> saldo << "\n\n";
}

void deposita(conta_bancaria* c, int valor){
	if(valor < 0){
		std::cout << "Digite apenas valores maiores que zero!\n";
	}else{
		c -> saldo += valor;
	}
}

void saca(conta_bancaria* c, int valor_saque){
	if(valor_saque > c -> saldo || valor_saque < 0){
		std::cout << "Voce nao pode realizar saques com valores maiores que o saldo de sua conta ou menores que zero!\n";
	}else{
		c -> saldo -= valor_saque;
	}
}

void transfere(conta_bancaria* c, conta_bancaria* e, int valor_transfere){
	if(valor_transfere < 0 || valor_transfere > c -> saldo){
		std::cout << "Voce nao pode transferir valores negativos ou maiores que o saldo da sua conta!\n";
	}else{
		c -> saldo -= valor_transfere;
		e -> saldo += valor_transfere;
	}
}