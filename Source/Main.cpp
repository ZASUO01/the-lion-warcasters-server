//
// Created by pedro-souza on 04/11/2025.
//
#include <cstdlib>
#include "Network/Platforms.h"

int main() {
    if (Platforms::platformNetworkingInit() != 0) {
        exit(EXIT_FAILURE);
    }

    Platforms::platformNetworkingCleanup();
    return 0;
}