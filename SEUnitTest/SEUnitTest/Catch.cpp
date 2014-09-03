// catch.cpp


#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int main(int argc, char* const argv[]) {

	Catch::Session session;

	if (int returnCode = session.applyCommandLine(argc, argv))
		return returnCode;

	if (Catch::isDebuggerActive())
		session.config().useStream("debug");

	return session.run();
}

// cl -nologo -EHsc -I../../Catch/single_include catch_ide_main.cpp catch_ide_tests.cpp && catch_ide_main.exe -r compact
