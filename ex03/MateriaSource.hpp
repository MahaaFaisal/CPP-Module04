#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_learned[4];
		int		_idx;

	public:
		MateriaSource();
		MateriaSource(MateriaSource &other);
		MateriaSource &operator=(MateriaSource &rhs);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif