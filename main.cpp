#include <iostream>
#include <VscodeCmakeInclude.h>
#include "testVscode.h"

int main(int argc, char *argv[])
{
    using namespace VSCODE_NSP;
    std::cout << "hello vscode !" << std::endl;
    testVscode();
    VscodeCmakeOption opt;
    func1(opt);
    // std::cin.ignore();
    return 0;
}