#include "Player.h"

Player::Player(std::string fname, std::string lname, std::string game){
	firstName = fname;
	lastName = lname;
	this->game = game;
}
Player::~Player() {

}

void Player::printInfo() {
	std::cout << "Name: " << this->getFirstName() << " " << this->getLastName() << " plays " << this->game << std::endl;
}
