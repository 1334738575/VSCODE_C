#include <iostream>
#include "test.h"
#include "testVscode.h"

int main(int argc, char *argv[])
{
    using namespace VSCODE_NSP;
    std::cout << "hello vscode !" << std::endl;
    testVscode();
    // SLAM_LYJ_CUDA::test1();
    // std::cin.ignore();
    return 0;
}