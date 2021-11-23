#ifndef __CANVAS_H__
#define __CANVAS_H__

#include <SFML/Graphics.hpp>
#include <string.h>
#include <vector>
#include "GUIElement.hpp"

class Canvas {
  private:
    bool visible = true; 
    std::vector<GUIElement*> elements;
  public:
    ~Canvas();
    void setVisible();
    void setInvisible();
    void addElement(GUIElement* element);
    void draw(sf::RenderWindow* target);
};

#endif