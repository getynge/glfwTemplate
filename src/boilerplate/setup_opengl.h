//
// Created by spark on 2017-09-03.
//

#ifndef GLTEST_SETUP_OPENGL_H
#define GLTEST_SETUP_OPENGL_H
#include <GLFW/glfw3.h>
namespace boilerplate {
    GLFWwindow * initGLFW(int width, int height, const char * title);

    bool initGLEW();
}
#endif //GLTEST_SETUP_OPENGL_H
