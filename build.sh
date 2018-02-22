em++ multiply.cpp -o multiply.js -s WASM=1 -s EXPORTED_FUNCTIONS='["_main"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]' -s NO_EXIT_RUNTIME=0
