#include "Greeter.h"



Greeter::Greeter(std::string nameOfPerson)
{
	greetingPerson_ = "������������, " + nameOfPerson + "!";
}

std::string Greeter::getGreetingPerson()
{
	return greetingPerson_;
}
