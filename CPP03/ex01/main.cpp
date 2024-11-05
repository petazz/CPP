#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    // Crear una instancia de ClapTrap
    ClapTrap clap("Clappy", 100, 50, 20);
    clap.attack("Target1");  // ClapTrap ataca

    std::cout << std::endl;

    // Crear una instancia de ScavTrap
    ScavTrap scav("Scavvy");
    scav.attack("Target2");  // ScavTrap ataca
    scav.guardGate();        // ScavTrap activa su modo de guardia

    std::cout << std::endl;

    // Prueba de destrucción para ver la cadena de destrucción

	return 0;
}