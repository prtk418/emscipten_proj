#include<iostream>
#include <emscripten.h>

int EMSCRIPTEN_KEEPALIVE main() {

   std::cout << "initialized";

}

// Method to return multiplication two floats
extern "C" {
	
	int EMSCRIPTEN_KEEPALIVE multiply(int x, int y) {

	    return x * y;

	}

}