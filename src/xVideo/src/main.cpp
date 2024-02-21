#include <GLFW/glfw3.h>

int main(void)
{
    int width = 1000;
    int height = 800;

    GLFWwindow* window;

    /* инициализация */
    if (!glfwInit())
        return -1;

    /* создание контекста окна */
    window = glfwCreateWindow(width, height, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* добовление контекста к окну */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}