// program to find countries in Pete's World
// Date: 08/11/2024
// author Pete Lowe
// Cody Copperthwaite
//  Milosz Kropielnicki
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to D or Z to T" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	
	}

	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}
	
	if (letter == 'b' || letter == 'B') // written by cody
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia, Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bahrain Arabian Peninsula, Bhutan, Brunei Darussalam, " << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Bs in rest of the world" << std::endl;
		}
	}

	if (letter == 'c' || letter == 'C') //written by cody
	{
		if (region == 1)
		{
			std::cout << "Canada, Cayman islands, Chile, Colombia, Costa Rica, Cuba, " << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo, Congo, Republic of (Brazzaville), C�te D'ivoire (Ivory Coast)" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos (Keeling) Islands, Cyprus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cocos (Keeling) Islands, Cook Islands" << std::endl;
		}


	}
	if (letter == 'd' || letter == 'D') //written by cody
	{
		if (region == 1)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ds in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ds in the rest of the world" << std::endl;
		}






	}

	if (letter == 't' || letter == 'T')
	{
		if (region == 1)
		{
			std::cout << "Trinidad and Tobago, Turks and Caicos Islands" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ts in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Togo, Tunisia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Thailand, Tibet, Timor-Leste, Turkey, Turkmenistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Tokelau, Tongo, Tuvalu" << std::endl;
		}
	}

	if (letter == 'u' || letter == 'U')
	{
		if (region == 1)
		{
			std::cout << "United States, Uruguay" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "United Kingdom, Ukraine" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Uganda" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Uzbekistan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Us in the rest of the world" << std::endl;
		}
	}

	if (letter == 'v' || letter == 'V')
	{
		if (region == 1)
		{
			std::cout << "Venezuala, Virgin Islands (British), Virgin Islands (U.S.)" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Vs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuata" << std::endl;
		}
	}

	if (letter == 'w' || letter == 'W')
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}

	if (letter == 'x' || letter == 'X')
	{
		if (region == 1)
		{
			std::cout << "There are no Xs in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Xs in the rest of the world" << std::endl;
		}
	}


	if (letter == 'y' || letter == 'Y')
	{
		if (region == 1)
		{
			std::cout << "There are no Ys in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ys in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ys in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Yemen" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ys in the rest of the world" << std::endl;
		}
	}

	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}