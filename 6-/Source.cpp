#include <iostream>


void printnumbers(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << nums[i] << std::endl;
	}
}
void addnumbers(int nums[], int size)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		total = (total + nums[i] );
	}
	std::cout << total << std::endl;
}

void smallestnumber(int nums[], int size) 
{
	int intro = 0;
	int small = nums[0];
	for (int i = 0; i < size; ++i)
	{
		intro = nums[i];
		if ( intro < small)
		{
			small = intro;
		}
	}
	std::cout << small << std::endl;
}

void largestnumber(int nums[], int size)
{
	int intro = 0;
	int large = nums[0];
	for (int i = 0; i < size; ++i)
	{
		intro = nums[i];
		if (intro > large)
		{
			large = intro;
		}
	}
	std::cout << large << std::endl;
}

void findnumber(int nums[], int size)
{
	int search = -1;
	int find = -1;
	std::cout << "What number do you want to search for?" << std::endl;
	std::cin >> search;
	for (int i = 0; i < size; ++i)
	{
		if (search == nums[i]) 
		{
			find = 1;
		}
	}
	std::cout << find << std::endl;
}
void countnumber(int nums[], int size)
{
	int search = -1;
	int find = 0;
	std::cout << "What number do you want to search for?" << std::endl;
	std::cin >> search;
	for (int i = 0; i < size; ++i)
	{
		if (search == nums[i])
		{
			++find;
		}
	}
	std::cout << find << std::endl;
}

void reverseprintnumbers(int nums[], int size)
{
	for (int i = (size - 1);  (i < size) and (i > -1); --i)
	{
		std::cout << nums[i] << std::endl;
	}
}


int main()
{
int val1[]{ 1, 3, 5, 7, 9, 3 };
int val2[]{ 0, 1, 2, 3, 2, 1 };
int val3[]{ 2, 4, 8, 16, 32, 64 };
int val4[]{ 33, 74, 52, 9, 9, 32 };
	


	//printnumbers(val1, 5);
/*
	addnumbers(val1, 6);
	addnumbers(val2, 6);
	addnumbers(val3, 6);
	addnumbers(val4, 6);

	smallestnumber(val1, 6);
	smallestnumber(val2, 6);
	smallestnumber(val3, 6);
	smallestnumber(val4, 6);

	largestnumber(val1, 6);
	largestnumber(val2, 6);
	largestnumber(val3, 6);
	largestnumber(val4, 6);

	findnumber(val1, 6);
	findnumber(val2, 6);
	findnumber(val3, 6);
	findnumber(val4, 6);

	countnumber(val1, 6);
	countnumber(val2, 6);
	countnumber(val3, 6);
	countnumber(val4, 6);

	reverseprintnumbers(val1, 6);
	reverseprintnumbers(val2, 6);
	reverseprintnumbers(val3, 6);
	reverseprintnumbers(val4, 6);
	*/



	return 0 ();

}