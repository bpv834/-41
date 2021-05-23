#include<stdio.h>
#include<string.h>

struct content {
	char title[40];
	int price;
	double rate;
};

int main() {
	struct content c1 = { "aaa",1000,10.0 };
	struct content* p = &c1;
	printf("%s,%d,%.1f\n", c1.title, c1.price, c1.rate);

	p->price *= 2;
	p->rate = 10.5;
	strcat_s(p->title, ":endgame");

	printf("%s,%d,%.1f\n", p->title, p->price, p->rate);
	printf("%s,%d,%.1f\n", c1.title, c1.price, c1.rate);
}