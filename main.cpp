#include <iomanip>
#include <cstdint>
#include <iostream>
using namespace std;

int main() {
	while(true)
	{
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
				//Print cyan
				cout << "\033[1;36m0\033[0m";
			}
			else
			{
				cout << "\033[1;32m1\033[0m";
				//Print green
			}	
			std::cout << " ";
			if((bitidx+1)%8==0)
			{
				//Print hex value for the byte
				int byteidx = (((63-bitidx)/8)*8);
				uint8_t resultByte = static_cast<uint8_t>((input & (static_cast<uint64_t>(0xff)<<(byteidx))) >> (byteidx));
				std::cout << "0x"
					  << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(resultByte) << std::endl;
			}
		}
	}
	return 0;
}
