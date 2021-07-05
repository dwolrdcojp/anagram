// Project: Anagram
// File: anagram.cpp

#include <iostream>
#include <string>

bool IsAnagram(std::string str1, std::string str2)
{
	// Anagram is not case sensitive so we convert all characters to uppercase
	std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
	std::transform(str2.begin(), str2.end(), str2.begin(), ::toupper);


	// Anagram does not care about space so we remove all spaces if any
	str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
	str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());

	// Then, we sort string1 and string2
	std::sort(str1.begin(), str1.end());
	std::sort(str2.begin(), str2.end());

	// If they both are anagrams, they will be exactly the same after sorted 
	return str1 == str2;
}

int main()
{
	std::cout << "Anagram" << std::endl;

	// Input string1
	std::string string1;
	std::cout << "Input string 1 -> ";
	std::getline(std::cin, string1);

	// Input string2
	std::string string2;
	std::cout << "Input string 2 -> ";
	getline(std::cin, string2);

	// Check if they are anagrams 
	std::cout << "'" << string1 << "' and '";
	std::cout << string2 << "' are ";
	if(IsAnagram(string1, string2))
	{
		std::cout << "anagrams";
	}
	else
	{
		std::cout << "NOT anagrams";
	}
	std::cout << std::endl;

	return 0;
}
	
