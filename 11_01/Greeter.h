#pragma once

#include <string>
#include <iostream>

class Greeter
{
private:
	std::string greetingPerson_;

public:
	Greeter(std::string nameOfPerson);
	
	std::string greet();
};

