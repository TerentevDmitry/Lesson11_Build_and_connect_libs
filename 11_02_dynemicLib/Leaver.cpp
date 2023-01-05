#include "Leaver.h"

namespace Leaver
{
	Leaver::Leaver(std::string nameOfPerson)
	{
		leavingPerson_ = "До свидания, " + nameOfPerson + "!";
	}

	std::string Leaver::leave()
	{
		return leavingPerson_;
	}
}