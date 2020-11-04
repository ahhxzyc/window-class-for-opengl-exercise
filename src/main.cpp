
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Window/Window.h"

class MyWindow : public Window {
public:
    MyWindow(int w, int h) : Window(w, h) {}

public:
    void render() {
        static const GLfloat red[] = {1.0f, 0.0f, 0.0f, 1.0f};
        glClearBufferfv(GL_COLOR, 0, red);
    }
};

int main()
{
    MyWindow window(800, 600);
    window.run();
    return 0;
}