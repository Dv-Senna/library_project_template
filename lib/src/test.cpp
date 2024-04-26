#include "test.hpp"

#include <iostream>


namespace test {
	void sayHello() {
		#ifdef TP_WINDOWS
			std::cout << "Hello from Windows testlib !" << std::endl;
		#elifdef TP_LINUX
			std::cout << "Hello from Linux testlib !" << std::endl;
		#elifdef TP_APPLE
			std::cout << "Hello from Apple testlib !" << std::endl;
		#endif
	}
}