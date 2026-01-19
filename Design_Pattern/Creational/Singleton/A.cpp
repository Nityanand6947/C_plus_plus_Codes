#include <iostream>
#include <string>

using namespace std;

class GameSetting
{
    static GameSetting *instance;
    int brightness;
    int width;
    int height;
    GameSetting() : width(786), height(1300), brightness(75) {}

public:
    static GameSetting *getInstance()
    {
        if (instance == NULL)
            instance = new GameSetting();
        return instance;
    }
    void setWidth(int width) { this->width = width; }
    void setHeight(int height) { this->height = height; }
    void setBrightness(int brightness) { this->brightness = brightness; }

    int getWidth() { return width; }
    int getHeight() { return height; }
    int getBrightness() { return brightness; }

    void display()
    {
        cout << "brightness: " << brightness << endl;
        cout << "height: " << height << endl;
        cout << "width: " << width << endl
             << endl;
    }
};
GameSetting *GameSetting::instance = NULL;
void someFunction()
{
    GameSetting *setting = GameSetting::getInstance();
    setting->display();
}
int main()
{
    GameSetting *setting = GameSetting::getInstance();
    setting->display();
    setting->setBrightness(100);
    someFunction();
}