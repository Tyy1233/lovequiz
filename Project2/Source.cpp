#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main(int argc, char* argv[]) {
	char oper;
	int entry = 0;

	cout << "Did you know that your amazing!" << endl;
	cout << "       *           *       " << endl;
	cout << "      **           **      " << endl;
	cout << "     *  *         *  *     " << endl;
	cout << "    *    *       *    *    " << endl;
	cout << "   *      *     *      *   " << endl;
	cout << "  *        *   *        *  " << endl;
	cout << " *          * *          * " << endl;
	cout << "*            *            *" << endl;
	cout << " *                       * " << endl;
	cout << "  *                     *  " << endl;
	cout << "   *                   *   " << endl;
	cout << "    *                 *    " << endl;
	cout << "     *               *     " << endl;
	cout << "      *             *      " << endl;
	cout << "       *           *       " << endl;
	cout << "        *         *        " << endl;
	cout << "         *       *         " << endl;
	cout << "          *     *          " << endl;
	cout << "           *   *           " << endl;
	cout << "            * *            " << endl;
	cout << "             *             " << endl;
	cout << "     Enter yes or no       " << endl;
	cout << " Your entry: ";
	cin >> oper;
	if (oper = 'yes') {
		entry = 1;
	}
	else if (oper = 'no') {
		entry = 2;
	}
	else {
		cout << "You'll have to enter something else" << endl;
	}
	while (entry != 0) {
		if (entry = 1) {
			cout << "Test";
			break;
		}
		else if (entry = 2) {
			cout << "test no";
			break;
		}
	}









	return 0;
}