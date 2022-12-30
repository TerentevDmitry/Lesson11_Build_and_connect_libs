#include "Greeter.h"

std::string Greeter(std::string greeting)
{
	std::string greetingPerson = "Здравствуйте, " + greeting + "!";

	return greetingPerson;
}