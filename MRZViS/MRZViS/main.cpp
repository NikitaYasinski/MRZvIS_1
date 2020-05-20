#include "Conveyer.h"

int main() {
	vector<int> one{35, 55, 48, 58};
	vector<int> two{52, 40, 36, 47};
	auto Dx = new Conveyer;
	Dx->calculate(one, two);
	system("pause");
}
