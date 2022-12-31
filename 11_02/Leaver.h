#pragma once

#include <string>
#include <iostream>

class Leaver
{
private:
	std::string leavingPerson_;

public:
	Leaver(std::string nameOfPerson);

	std::string leave();
};