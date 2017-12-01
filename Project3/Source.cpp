#include <iostream>
#include <csignal>
using namespace std;

void signal(int semnal)
{
	cout << "Semnal intrerupt ( " << semnal << ") primit!" << endl;

	exit(semnal);
}


int main()
{
	signal (SIGINT,signal);

	while(1){
		cout << "Going to sleep..." << endl;
		
	}
	system ("pause");
	return 0;
}



