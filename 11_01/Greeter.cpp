#include "Greeter.h"



Greeter::Greeter(std::string NameOfPerson)
{
	greetingAPerson_ = "������������, " + NameOfPerson + "!";
}

std::string Greeter::getGreetingAPerson()
{
	return greetingAPerson_;
}
