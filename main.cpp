#include <cstdlib>      // provides atof()
#include <iostream>     // provides cout, cin, precision, fixed, scientific
#include <string>       // provides 'string()'

/*
 *
 */

using namespace std;

int main(int nargc, char* argv[])
{

    cout << "I'm alive!\n";
	
	const unsigned int N {10};

	for (int n=0; n < N; n++){
		cout << n << endl;
	}

    return 0;
}
