#include "Greeter.h"

namespace Greeter
{

	Greeter::Greeter(std::string nameOfPerson)
	{
		greetingPerson_ = "������������, " + nameOfPerson + "!";
	}

	std::string Greeter::greet()
	{
		return greetingPerson_;
	}
}