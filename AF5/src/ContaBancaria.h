/*
 * BankAccount.h
 *
 *  Created on: Dec 4, 2018
 *      Author: rehaell
 */

#ifndef CONTABANCARIA_H_
#define CONTABANCARIA_H_

#include <string>
#include <ctime>
#include <vector>

using namespace std;

class ContaBancaria {
	struct Cliente {
		unsigned int num_cliente = 0;
		string nome_cliente = "" ;
	} cliente;

	class Operacao {
		time_t data;
		enum TipoOperacao {
			null = 0,
			saque,
			deposito
		} operacao;
	public:
		Operacao(): data(time(0)), operacao(null){}
		Operacao(time_t data_operacao, TipoOperacao tipo_operacao);
		~Operacao(){}

	};

	unsigned long int numero_conta;
	unsigned long int saldoConta;

	vector<Operacao> transacaoes;
};



#endif /* CONTABANCARIA_H_ */
