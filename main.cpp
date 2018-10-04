#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "---------------------------------";
    cout << endl;
    cout << endl;
    cout << "Build";
    cout << endl;


     const int bufferSize = MAX_PATH;
    char oldDir[bufferSize]; // store the current directory
    
    // get the current directory, and store it
    if (!GetCurrentDirectory(bufferSize, oldDir)) {
        std::cerr << "Error getting current directory: #" << GetLastError();
        return 1; // quit if it failed
    }
    std::cout << "Current directory: " << oldDir << '\n';

    // new directory
    const char* newDir = R"(D:\\users\\conno\\desktop\\code\\FRC 2019 programs\\FRC 2019 practice\\common\\)";
    if (!SetCurrentDirectory(newDir)) {
        std::cerr << "Error setting current directory: #" << GetLastError();
        return 1; // quit if we couldn't set the current directory
    }
    std::cout << "Set current directory to " << newDir << '\n';

    

    // ...

   
    system("gradlew :robot:build");
    system("pause");

    return 0;
}
