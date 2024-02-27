#include <iostream>
#include <chrono>
#include <thread> // Include for std::this_thread

void pauseFunction() {
    std::cout << "Function started.\n";
    
    // Pause execution for 3 seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));
    
    std::cout << "Function resumed after pause.\n";
}

int main() {
    std::cout << "Before calling pauseFunction()\n";
    pauseFunction();
    std::cout << "After calling pauseFunction()\n";
    
    return 0;
}
