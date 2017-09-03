#define GLEW_STATIC
#include <iostream>
#include <GLFW/glfw3.h>
#include "boilerplate/setup_opengl.h"

int main() {
    auto window = boilerplate::initGLFW(300, 300, "Hello world!");
    auto glewError = boilerplate::initGLEW();

    if(!window || !glewError){
        return EXIT_FAILURE;
    }

    glfwTerminate();
    return EXIT_SUCCESS;
}