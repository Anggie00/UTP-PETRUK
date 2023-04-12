#include <iostream>

void vPtr(void* ptr, char command) {
    if (command == 'i') {
        int* intPtr = static_cast<int*>(ptr);
        for (int i = 0; i < *intPtr; i++) {
            std::cout << "ing" << std::endl;
        }
    } else if (command == 'c') {
        char* charPtr = static_cast<char*>(ptr);
        std::cout << "ceng " << *charPtr << std::endl;
    }
}
