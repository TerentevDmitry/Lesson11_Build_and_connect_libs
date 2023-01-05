#pragma once

#include <string>
#include <iostream>

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

namespace Leaver
{
	class Leaver
	{
	private:
		std::string leavingPerson_;

	public:
		Leaver(std::string nameOfPerson);

		std::string leave();
	};
}