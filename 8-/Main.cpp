#include <iostream>
void printfloats(float * arrr, int size) 
{
	
}
void printsum(int * arrr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum = (sum + arrr[i]);
	}
	std::cout << "The Total is " << sum << std::endl;
}
void intbool(bool * arrr, int size, bool defalt) 
{
		for (int i = 0; i < size; ++i)
	{
		arrr[i] = defalt;
	}
}
int swap(int * arr, int * arrr, int start, int stop) 
{

	for (int i = start; i < stop; ++i)
	{
		arr[i] = arrr[i];
	}
	return 0;
}
char findletter(char * arrr, int size) 
{
	char letter = '1';
	std::cin >> letter;
for (int i = 0; i < size; ++i)
	{
	if (arrr[i] = letter) { return 0; }
	}
return 0;
}
int main() 
{
	float floats[100];
	for (int i = 0; i < 100; ++i) { floats[i] = 0 + (.01 * i); }
	int ints[100];
	for (int i = 0; i < 100; ++i) { ints[i] = i; }
	bool bools[100];
	bool defaltvalue = true;
	
	//printfloats(floats, 100);
	//printsum(ints, 100);
	//intbool(bools, 100, defaltvalue);
	int num[]{ 1,3,5,7,9,11,13,15,17 };
	int nums[]{ 1,2,3,4,5,6,7,8,9 };

	//swap(num, nums, 1, 9);

	char letters[]{ 'a', 'b', 'c', 'd', 'e', 'f' };




	return 0;
}