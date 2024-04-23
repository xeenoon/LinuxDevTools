
#include <iostream>

int main() {
	int64_t input = 0;
	std::cout << "Convert to binary: ";
	std::cin >> input;
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
		if((bitidx+1)%8==0)
		{
			std::cout << std::endl;
		}
	}
	return 0;
}
