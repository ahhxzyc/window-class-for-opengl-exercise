#ifndef WINDOW_H
#define WINDOW_H

class Window {
private:
    int width;
    int height;

public:
    Window(int w, int h);
    ~Window();

    virtual void startup() {}
    virtual void render() {}
    virtual void shutdown() {}
    
    void run();
};

#endif