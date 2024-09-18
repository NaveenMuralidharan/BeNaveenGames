#include "Bullet.h"
#include "Player.h"

//Bullet::Bullet(Player &player)
//{
//    dmg = 1;
//    speed = 10;
//    shape = sf::RectangleShape(sf::Vector2f(5.f, 10.f));
//    position = sf::Vector2f(player.getPosition());
//    markedForRemoval = false;
//
//}

Bullet::Bullet(sf::Vector2f playerPosition)
{
    dmg = 1;
    speed = 10;
    shape = sf::RectangleShape(sf::Vector2f(5.f, 10.f));
    position = sf::Vector2f(playerPosition);
    shape.setPosition(position);
    markedForRemoval = false;

}

void Bullet::updatePosition(){
    shape.setPosition(shape.getPosition().x, shape.getPosition().y - (float)speed);
}

void Bullet::collides(const std::vector<Enemy *> &enemies) 
{
    for(Enemy* enemy: enemies){
        if(this->shape.getGlobalBounds().intersects(enemy->getSprite().getGlobalBounds())){
            std::cout<<"bullet collide"<<std::endl;
            markedForRemoval = true;
            this->shape.setPosition(1000.f,1000.f);
            //change sprite to lil explosion?
        }
    }
}

void Bullet::destroy() 
{
    delete this;
};
