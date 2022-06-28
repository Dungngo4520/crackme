#include <stdio.h>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

int main() {
	const char alphanum[] =
		"0123456789"
		"abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));

	string name = "";

	for (int i = 0; i < 20; i++) {
		name += alphanum[rand() % strlen(alphanum)];
	}

	DWORD64 key = 0x13DB81;

	for (int i = 0; i < name.length(); i++) {
		key += name.at(i) + 0x186A0;
	}

	key += 0x7A69;

	printf("Name: %s\nKey: %ld\n", name.c_str(), key);

	system("pause");

}