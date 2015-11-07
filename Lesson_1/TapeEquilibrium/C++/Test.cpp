
#include <iostream>
#include "solution.h"
#include <vector>


int main()
{
	int myints[] = {3,1,2,4,3};
	std::vector<int> arrayvector (myints, myints + sizeof(myints) / sizeof(int) );
	int result = solution(arrayvector);
	std::cout << " The solution is " << result;
}