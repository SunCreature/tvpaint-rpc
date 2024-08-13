#include <codecvt>
#include <locale>
#include <string>
#ifdef _WIN32
	#include <windows.h>
#endif

std::string home_dir();
std::string to_utf8(std::string codepage_str);