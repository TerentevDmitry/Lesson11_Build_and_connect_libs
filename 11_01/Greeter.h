#pragma once

#include <string>
#include <iostream>

class Greeter
{
private:
	std::string greetingAPerson_;

public:
	Greeter(std::string NameOfPerson);
	
	std::string getGreetingAPerson();
};

