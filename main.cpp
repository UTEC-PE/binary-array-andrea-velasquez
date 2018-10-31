#include <iostream>
#include "boolean.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\nBinary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;


    boolean algo(19);
	algo.bitOn(15);
	algo.bitOff(15);
	for (int i=0; i<algo.get_size(); ++i)
		cout << i <<": " << algo[i] <<endl;

    system("read");
    return EXIT_SUCCESS;
}

