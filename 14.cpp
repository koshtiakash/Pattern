#include<iostream>
using namespace std;

int main()
{
	int rows;
	
	cout << "Enter the no of rows: ";
	cin >> rows;
	for(int i=0; i <= rows ; ++i)
	{
	
		for(int space=rows; space > i ; space--)
			cout << " ";
	
		for(int j=0; j < i; j++)	
			cout << "* ";
		
		cout << endl;
	}
	
	for(int i=1; i < rows; i++)
	{
		for(int space=0; space < i ; ++space)
		 	cout << " ";		
		for(int j=rows; j > i; j--)	
			cout << "* ";
	
		cout << endl;
	}
	return 0;
}
