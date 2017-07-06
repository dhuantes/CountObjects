#include <iostream>
#include <vector>
#include "JoshHat.h"

using namespace std;


int main(int argc,char* argv[])
{
	JoshHat m_hat;
	cout << "First Object on Stack...." << endl;
	cout << "Current Count: " << JoshHat::s_numJoshHatObjects << endl;
	vector<JoshHat*> l_vecHats;
	cout << "Next 5 Objects on Heap...." << endl;
	for(int i=0;i<5; i++)
	{
		JoshHat* anotherOne = new JoshHat();
		cout << "Current Count: " << JoshHat::s_numJoshHatObjects << endl;
		l_vecHats.push_back(anotherOne);
	}
		
	cout << "Current Count: " << JoshHat::s_numJoshHatObjects << endl;

	cout << "Another Object on Heap...." << endl;
	JoshHat* l_hat = new JoshHat();
	cout << "Current Count: " << JoshHat::s_numJoshHatObjects << endl;

	cout << "Delete Object on Heap...." << endl;
	delete l_hat;

	cout << "Current Count: " << JoshHat::s_numJoshHatObjects << endl;

	cout << "Delete Remaining Objects on Heap...." << endl;
	for (auto itr = l_vecHats.begin();itr != l_vecHats.end();itr++)
	{
		delete *itr;
		cout << "Current Count: " << JoshHat::s_numJoshHatObjects << endl;
	}
	return 0;

};
