#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
cout<<"Limite de <char>"<<(int)numeric_limits<char>::min()<<endl //para determinar em numeros,(int) é utilizado para a variavel do tipo char
    <<"Limete de <char>"<<(int)numeric_limits<char>::max()<<endl
    <<"Numero d bytes <char>"sizeof(char)<<endl;
	system("PAUSE");
	return 0;
	
}
