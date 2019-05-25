#ifndef ASPACESHIP_HPP
# define ASPACESHIP_HPP

# include "AEntity.hpp"

class ASpaceShip : public AEntity
{
public:
	ASpaceShip(unsigned int hp, unsigned int xPos, unsigned int yPos, char form, int color, bool direction, unsigned int attackDamage, unsigned int speed);
	ASpaceShip(ASpaceShip const &src);
	virtual ~ASpaceShip();

	ASpaceShip  &operator=(ASpaceShip const &rhs);

	void	Shoot();
};

#endif // ASPACESHIP_HPP