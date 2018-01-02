#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
#include "Options.h"

int main(int argc, char** argv)
{
    Options options;

    if(!options.parse(argc, argv))
        return 1;

    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(
        in(std::cin), in(), std::cout << (_1 * 3) << " " );
}
