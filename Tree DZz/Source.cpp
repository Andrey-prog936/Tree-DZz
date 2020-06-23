#include <iostream>
#include <string>
using namespace std;

class Tree
{
	struct Node
	{
		int data;
		Node* left;
		Node* right;
		Node(int data, Node* left = nullptr, Node* right = nullptr) : data(data), left(left), right(right)
		{ }
	};
	Node* root;
	void Add(int data, Node*& root)
	{
		if (root == nullptr)
		{
			root = new Node(data);
			return;
		}
		if (data > root->data)
		{
			Add(data, root->right);
		}
		else
		{
			Add(data, root->left);
		}
	}
	// KLP ~~~
	void PrintKLP(Node* dataa) const
	{
		if (dataa != nullptr)
		{
			cout << dataa->data << " ";
			PrintKLP(dataa->left);
			PrintKLP(dataa->right);
		}
	}
	// LKP ~~~
	void PrintLKP(Node* dataa) const
	{
		if (dataa != nullptr)
		{
			PrintLKP(dataa->left);
			cout << dataa->data << " ";
			PrintLKP(dataa->right);
		}
	}
	// PKL ~~~
	void PrintPKL(Node* dataa) const
	{
		if (dataa != nullptr)
		{
			PrintPKL(dataa->right);
			cout << dataa->data << " ";
			PrintPKL(dataa->left);
		}
	}
	int Search(int data, Node* root) const
	{
		if (root == nullptr)
		{
			cout << " Not found ";
			return 0;
		}
		if (data > root->data)
		{
			Search(data, root->right);
		}
		else if (data < root->data)
		{
			Search(data, root->left);
		}
		else
		{
			cout << " Found: ";
			return root->data;
		}
	}
public:
	Tree() : root(nullptr) { }
	void Add(int data)
	{
		Add(data, root);
	}
	void PrintKLP() const
	{
		cout << "KLP:-> ";
		PrintKLP(root);
		cout << endl;
	}
	void PrintLKP() const
	{
		cout << "LKP:-> ";
		PrintLKP(root);
		cout << endl;
	}
	void PrintPKL() const
	{
		cout << "PKL:-> ";
		PrintPKL(root);
		cout<<endl;
	}
	int Search(int data) const
	{
		return Search(data, root);
	}
	
};

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