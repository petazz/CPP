#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Crear instancia de ClapTrap
    ClapTrap clap("Clappy");
    clap.attack("target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "----" << std::endl;

    // Crear instancia de ScavTrap
    ScavTrap scav("Scavvy");
    scav.attack("target2");
    scav.takeDamage(15);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "----" << std::endl;

    // Crear instancia de FragTrap
    FragTrap frag("Fraggy");
    frag.attack("target3");
    frag.takeDamage(20);
    frag.beRepaired(15);
    frag.highFivesGuys();

    return 0;
}
