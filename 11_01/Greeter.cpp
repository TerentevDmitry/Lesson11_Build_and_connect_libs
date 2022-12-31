#include "Greeter.h"



Greeter::Greeter(std::string NameOfPerson)
{
	greetingAPerson_ = "Здравствуйте, " + NameOfPerson + "!";
}

std::string Greeter::getGreetingAPerson()
{
	return greetingAPerson_;
}
