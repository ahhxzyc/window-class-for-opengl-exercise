#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Window.h"

Window::Window(int w, int h) : width(w), height(h) {}

Window::~Window() {}

void Window::run() {
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(width, height, "ZYC's window for learning purposes", NULL, NULL);
    glfwMakeContextCurrent(window);
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
    startup();
    while (!glfwWindowShouldClose(window))
    {
        render();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    shutdown();
    glfwTerminate();
}