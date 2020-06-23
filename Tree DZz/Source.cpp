#include "Tree.h"

int main()
{
	Tree t;
	t.Add(1);
	t.Add(2);
	t.Add(3);
	t.Add(4);
	t.Add(5);

	t.PrintKLP();
	cout << endl;
	t.PrintLKP();
	cout << endl;
	t.PrintPKL();

	cout << t.Search(2) << endl;

	return 0;
}