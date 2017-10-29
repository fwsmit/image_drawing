#ifndef PROJECT_IMAGE_DRAWING_H
#define PROJECT_IMAGE_DRAWING_H

#include "Project.h"
#include <vector>
#include "SFML/Graphics.hpp"
#include <string>


class Project_imageDrawing : Project
{
    public:
        Project_imageDrawing(sf::RenderWindow& _window);
        virtual ~Project_imageDrawing();
        void loop();
		int randInt(int min, int max);

    protected:

    private:
		int radius = 5;
		std::string file_name;
		std::vector<sf::CircleShape> circles;
		sf::CircleShape shape;
		sf::Image img;
};
#endif // PROJECT_IMAGE_DRAWING_H

