#include <iostream>
using namespace std;


int main()
{
	int result = 0;
	int start = 1;
	while (start < 1000){
		if(start % 3 == 0 || start % 5 == 0){
			result +=  start;
		}
		start++;
	}
	cout << "The result is " << result << endl;
	return 0;
}
