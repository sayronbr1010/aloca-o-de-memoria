#include <iostream>
#include <string> 
#include <memory>

using namespace std;

int main()
{
	//Este programa reserva somente a quantidade necess�ria de mem�ria para a vari�vel
	shared_ptr<string> nome = make_shared<string>();
	getline(cin, *nome);
	cout << *nome;

	cout << "\n\n";
	system("pause");
	return 0;
}

