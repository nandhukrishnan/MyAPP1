//#include<iostream>
//
//using namespace std;
//
//class Node
//{
//	public:
//		int data;
//		Node* left;
//		Node* right;
//};
//
//Node* root=NULL;
//Node* current = NULL;
//
//void addNode(int data)
//{
//	if (!root)
//	{
//		root = new Node();
//		root->data = data;
//		root->left = NULL;
//		root->right = NULL;
//		return;
//	}
//	
//	Node* temp = root;
//	while (temp)
//	{
//		if (data < temp->data)
//		{
//			if (temp->left)
//				temp = temp->left;
//			else
//				break;
//		}
//		else if (data > temp->data)
//		{
//			if (temp->right)
//				temp = temp->right;
//			else
//				break;
//		}
//		else
//		{
//			cout << "Cannot insert node !\n";
//			return;
//		}
//	}
//	if (data < temp->data)
//	{
//		Node* node = new Node();
//		node->data = data;
//		node->left = NULL;
//		node->right = NULL;
//		temp->left = node;
//	}
//	else if (data > temp->data)
//	{
//		Node* node = new Node();
//		node->data = data;
//		node->left = NULL;
//		node->right = NULL;
//		temp->right = node;
//	}
//
//}
//
//void print(Node* node)
//{
//	if (node)
//	{
//		cout << node->data << endl;
//		print(node->left);
//		print(node->right);
//	}
//}
//
//int main()
//{
//	addNode(20);
//	addNode(10);
//	addNode(30);
//	addNode(25);
//	addNode(35);
//	addNode(5);
//	addNode(12);
//
//	print(root);
//	delete root;
//	return 0;
//}