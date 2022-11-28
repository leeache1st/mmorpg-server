#include <iostream>
#include "utils/Utility.h"
#include "config-formatter/JsonFormatter.h"

int main(int argc, char **argv) {
    DISCARD_UNUSED(argc);
    DISCARD_UNUSED(argv);

    try {
        // TODO: SOME
    }
    catch (std::exception const &e) {
        std::cerr <<
                  "Caught exception: "
                  << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
