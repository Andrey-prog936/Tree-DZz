#include "Tree.h"

void Tree::Add(int data, Node*& root)
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

void Tree::PrintKLP(Node* dataa) const
{
	if (dataa != nullptr)
	{
		cout << dataa->data << " ";
		PrintKLP(dataa->left);
		PrintKLP(dataa->right);
	}
}

void Tree::PrintLKP(Node* dataa) const
{
	if (dataa != nullptr)
	{
		PrintLKP(dataa->left);
		cout << dataa->data << " ";
		PrintLKP(dataa->right);
	}
}

void Tree::PrintPKL(Node* dataa) const
{
	if (dataa != nullptr)
	{
		PrintPKL(dataa->right);
		cout << dataa->data << " ";
		PrintPKL(dataa->left);
	}
}

int Tree::Search(int data, Node* root) const
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

void Tree::Add(int data)
{
	Add(data, root);
}

void Tree::PrintKLP() const
{
	cout << "KLP:-> ";
	PrintKLP(root);
	cout << endl;
}

void Tree::PrintLKP() const
{
	cout << "LKP:-> ";
	PrintLKP(root);
	cout << endl;
}

void Tree::PrintPKL() const
{
	cout << "PKL:-> ";
	PrintPKL(root);
	cout << endl;
}

int Tree::Search(int data) const
{
	return Search(data, root);
}
