#pragma once
#include <string>
#ifdef DYNAMLIB_EXPORTS
#define DYNAMLIB_API __declspec(dllexport)
#else
#define DYNAMLIB_API __declspec(dllimport)
#endif

namespace Dyn
{
	class Leaver {
	public:
		DYNAMLIB_API std::string leave(std::string name);
	};
}
