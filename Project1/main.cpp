#include <iostream>
#include <string>

int main()
{
	std::string guess;
	int a;

	std::cout << "your first clue is that it is something to eat" << std::endl;

	while (1)
	{
		std::cin >> guess;
		if (guess == "cookie")
		{
			std::cout << "it'S NOT A COOKIE!!!!!!!!!!!!!!!" << std::endl;
			break;
		}
		else if (guess == "orange")
		{
			std::cout << "well shit ur right" << std::endl;
			std::cin >> a;
			exit(0);
		}
		else
			std::cout << "nO\n" << std::endl;
	}


	std::cout << "your sECOND clue is that it is rOUND" << std::endl;
	
	while (1)
	{
		std::cin >> guess;

		if (guess == "cookie")
		{
			std::cout << "nO it's nOT A COOKIE!!!!!!!!!!!!!!!!!!" << std::endl;
			break;
		} 
		else
			std::cout << "nO\n" << std::endl;
	}

	std::cout << "youR thIRD clue is that it is the cOLoR orAnge" << std::endl;
	
	while (1)
	{
		std::cin >> guess;

		if (guess == "cookie")
		{
			std::cout << "nO it's nOT A COOKIE!!!!!!!!!!!!!!!!!!" << std::endl;
			std::cout << "IT'S SOMeThING TO EAt THATS ROUnD AND oRANG!e!!!!!!!!!!!!!!!!!" << std::endl;
			std::cout << "it'S AN ORANGe1!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
			std::cout << "itS' AN OOOranGE!!!!!!!!!!!!!" << std::endl;
			break;
		}
		else
			std::cout << "nO\n" << std::endl;
	}

	while (1)
	{
		std::cin >> guess;

		if (guess == "orange")
		{
			std::cout << "of COURSE it's an OrANGe I jusT TOLD yoU iTS an ORNAGE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << std::endl;
			break;
		}
		else
		{
			std::cout << "ur just dumb" << std::endl;
		}
	}
	std::cout << "ok bye" << std::endl;
	std::cin >> a;
		

	return 0;
}