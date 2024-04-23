
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
			std::cout << "0";
		}
		else
		{
			std::cout << "1";
		}	
		std::cout << " ";
		if((bitidx+1)%8==0)
		{
			std::cout << std::endl;
		}
	}
	return 0;
}
