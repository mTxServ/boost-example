#include <iostream>
#include <cstdlib>
#include "app.h"
#include "Options.h"

using namespace std;

int main(int argc, char** argv)
{
    App app;
    Options options;

    cout << app.getProjectVersion() << endl;
    
    if(!options.parse(argc, argv))
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}
