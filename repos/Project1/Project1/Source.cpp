#include <iostream>
using namespace std;
int do_1(int n) {
	return n++;
}
int do_2(int& n) {
	return n++;
}
int do_3(int n) {
	return ++n;
}
int do_4(int& n) {
	return ++n;
}
int main() {
	int i = 1;
	cout << "i=" << i;
	cout << " do_1(i)=" << do_1(i) << endl;
	cout << "i=" << i;
	cout << " do_2(i)=" << do_2(i) << endl;
	cout << "i=" << i;
	cout << " do_3(i)=" << do_3(i) << endl;
	cout << "i=" << i;
	cout << " do_4(i)=" << do_4(i) << endl;
	cout << "i=" << i << endl;
	return 0;
}