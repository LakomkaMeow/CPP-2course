#include "Tree.hpp"

Tree::Tree(){
    if (!treeTexture.loadFromFile("Tree.png")) {
        std::cerr << "Failed to load tree.png" << std::endl;
    }
    treeSprite.setTexture(treeTexture);
}

void Tree::Do(){
    std::cout << "I am tree!" << std::endl;
}

void Tree::Draw(sf::RenderWindow& window){
    treeSprite.setPosition(340, 310);
    window.draw(treeSprite);
}