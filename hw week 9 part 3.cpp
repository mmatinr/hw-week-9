#include <iostream>
using namespace std;

int main()
{
	int fib[10];
	fib[0]=1;
	for( int i = 1; i < 10 ; i++){
		fib[i] = fib[i - 1] + fib[i -2];
			}
		for( int i = 0; i < 10 ; i++)	{
			cout<< fib[i]<<"  ";
		}
}
