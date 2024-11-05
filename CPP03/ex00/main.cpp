#include "ClapTrap.hpp"

int main(){
	ClapTrap pikachu("Pikachu", 10, 10, 5);
	ClapTrap charmander("Charmander", 10, 10, 10);
	pikachu.attack("Charmander");
	charmander.takeDamage(pikachu.getAttackDamage());
	charmander.beRepaired(5);
	charmander.attack("Pikachu");
	pikachu.takeDamage(charmander.getAttackDamage());
	return 0;
}