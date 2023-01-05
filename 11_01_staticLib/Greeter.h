#pragma once
#include <string>
#include <iostream>

namespace Greeter
{
	class Greeter
	{
	private:
		std::string greetingPerson_;

	public:
		Greeter(std::string nameOfPerson);

		std::string greet();
	};
}