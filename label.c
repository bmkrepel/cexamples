#include <ctype.h>

#include "gobjects.h"
#include "gwindow.h"

int main(void)
{
    GWindow window = newGWindow(320, 240);
    
    GLabel label = newGLabel("");
    setFont(label, "SansSerif-36");
    add(window, label);
    
    for (int i = 50; i >= 0; i--)
    {
        char s[3];
        
        sprintf(s, "%i", i);
        
        setLabel(label, s);

        double x = (getWidth(window) - getWidth(label)) / 2;
        double y = (getHeight(window) - getHeight(label)) / 2;
        setLocation(label, x, y);

        pause(100);
    }
    
    closeGWindow(window);
    return 0'
}
