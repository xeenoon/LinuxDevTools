
#include <iostream>
using namespace std;

int main() {
	string strinput;

	std::cout << "Convert  binary: ";
	std::cin >> strinput;
	uint64_t input = 0;
	if(strinput.rfind("0x",0)==0) //Check for hex
	{
		input = stoull(strinput.substr(2), NULL, 16);
	}
	else
	{
		input = stoull(strinput);
	}
	for(int bitidx=0; bitidx<64;++bitidx)
	{
		if((((uint64_t)(1)<<(63-bitidx))&input)==0)
		{
			//std::cout << "\x1B[36m0\033[0m\t\t"; //Print cyan
			 cout << "\033[1;36m0\033[0m";
		}
		else
		{
			cout << "\033[1;32m1\033[0m";

			//std::cout << "\x1B[32m1\033[0m\t\t"; //Print green
		}	
		std::cout << " ";
		if((bitidx+1)%8==0)
		{
			std::cout << std::endl;
		}
	}
	return 0;
}
