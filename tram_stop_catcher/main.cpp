#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <headers.hpp>

using namespace std;

int main()
{
<<<<<<< HEAD
    sf::RectangleShape rectangle(sf::Vector2f(160.0, 80.0));
    rectangle.setPosition(200.0, 300.0);


    sf::RenderWindow window(sf::VideoMode(800, 600), "Tram Stop Catcher");
    while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            window.clear(sf::Color::Black);
            window.draw(rectangle);
            window.display();
        }

        return 0;
=======
    cout << "Dobrze Cie widziec, przyjacielu!" << endl;
    return 0;
>>>>>>> d592be898096683ccd6c95662f1e5cc6c774bd8c
}
