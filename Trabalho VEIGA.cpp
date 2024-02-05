#include <iostream>
#include <locale>

using namespace std;


funcao(){
	int matricula;
	string nome;
	int tempo;
	float mes1,mes2,mes3;
	float resultadomes1,resultadomes2,resultadomes3, resultadomes4, resultadomes5,resultadomes6;
	
	cout<<"Informe Matricula: ";
	cin>>matricula;
	cout<<"\nInforme Nome do Vendedor: ";
	cin>>nome;
	cout<<"\nInforme o Tempo de casa do vendedor: ";
	cin>>tempo;
	cout<<"\nValor do Mês 1: ";
	cin>>mes1;
	cout<<"\nValor do Mês 2: ";
	cin>>mes2;
	cout<<"\nValor do Mês 3: ";
	cin>>mes3;
	
	system("cls");
	if(tempo >= 10)
	{
		resultadomes1 = (mes1*10/100);
		resultadomes2 = (mes2*12/100);
		resultadomes3 = (mes3*15/100);
		
	cout<<"\nMatricula do Vendedor: "<<matricula;	
	cout<<"\nNome Do Vendedor: "<<nome;	
	cout<<"\nTempo De Casa: "<<tempo;	
	cout<<"\nValor do Mês 1: "<<mes1;
	cout<<"\nValor do Mês 2: "<<mes2;
	cout<<"\nValor do Mês 3: "<<mes3;
	cout<<"\nValor da Comissão do Mês 1: "<<resultadomes1;
	cout<<"\nValor da Comissão do Mês 2: "<<resultadomes2;
	cout<<"\nValor da Comissão do Mês 3: "<<resultadomes3;
	}

	else{
		
	resultadomes4 = (mes1*10/100);
	resultadomes5 = (mes2*10/100);
	resultadomes6 = (mes3*10/100);
	
	cout<<"\nMatricula do Vendedor: "<<matricula;	
	cout<<"\nNome Do Vendedor: "<<nome;	
	cout<<"\nTempo De Casa:R$ "<<tempo;	
	cout<<"\nValor do Mês 1:R$ "<<mes1;
	cout<<"\nValor do Mês 2:R$ "<<mes2;
	cout<<"\nValor do Mês 3:R$ "<<mes3;
	cout<<"\nValor da Comissão do Mês 1:R$ "<<resultadomes4;
	cout<<"\nValor da Comissão do Mês 2:R$ "<<resultadomes5;
	cout<<"\nValor da Comissão do Mês 3:R$ "<<resultadomes6;
	
	
	}
	
	
	
	
	
}




main(){

	setlocale(LC_ALL, "Portuguese");
	funcao();
	
	
	return 0;
	
}
