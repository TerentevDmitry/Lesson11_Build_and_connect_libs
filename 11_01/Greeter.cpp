#include "Greeter.h"



Greeter::Greeter(std::string nameOfPerson)
{
	greetingPerson_ = "Здравствуйте, " + nameOfPerson + "!";
}

std::string Greeter::getGreetingPerson()
{
	return greetingPerson_;
}
