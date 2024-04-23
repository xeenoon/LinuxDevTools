
#include <iostream>
using namespace std;

int main() {
	string strinput;
	
	std::cout << "Convert to binary: ";
	std::cin >> strinput;

	if(strinput.rfind("0x",0)==0) //Check for hex
	{
	}
	else
	{
		uint64_t input = stoull(strinput);
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
	}
	return 0;
}
