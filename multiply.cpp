#include<iostream>
#include <emscripten.h>

extern "C" {
  extern int multiply_in_js(float, float);
}

int EMSCRIPTEN_KEEPALIVE main() {

   std::cout << "initialized";

}

// Method to return multiplication two floats
extern "C" {
	
	int EMSCRIPTEN_KEEPALIVE multiply(float x, float y) {

	    return multiply_in_js(x, y);

	}

}