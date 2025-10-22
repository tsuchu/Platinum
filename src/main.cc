#include <optional>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main(int argc, char** argv) {
    sf::RenderWindow window (sf::VideoMode({800, 600}), "Platinum");
    
    while(window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }

    return 0;
}