//
// Created by spark on 2017-09-03.
//

#define GLEW_STATIC
#include <GL/glew.h>
#include <iostream>
#include "setup_opengl.h"

using namespace std;
GLFWwindow * boilerplate::initGLFW(int width, int height, const char * title) {
    if(!glfwInit()){
        cerr << "Could not initialize glfw"<<endl;
        return nullptr;
    }

    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    auto window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    glfwMakeContextCurrent(window);

    return window;
}

bool boilerplate::initGLEW() {
    glewExperimental = GL_TRUE;
    auto error = glewInit();
    if(error != GLEW_OK){
        cerr << "Could not initialize glew " << glewGetErrorString(error) << endl;
        return false;
    }
    return true;
}
