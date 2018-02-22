#include <iostream>

class hello  {
private:
	int a;
	int b;
public:
	static int counter;
	hello() : a(1), b(2) {counter++;};
	hello(int x, int y);
	friend std::ostream& operator<<(std::ostream& os, hello& p);
};

hello::hello(int x, int y) {
	a=x;
	b=y;
	counter++;
}
std::ostream& operator<<(std::ostream& os, hello& attr) {
	os << "..hello" << std::endl;
	os << ".....a=" << attr.a << std::endl;
	os << ".....b=" << attr.b << std::endl;
	os << ".....counter=" << attr.counter << std::endl;
	os << std::endl;
	return os;
}
