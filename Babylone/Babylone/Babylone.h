#include <list>

typedef struct pile {
	char color;
	unsigned int size;
} pile ;
 
struct state {
	pile pile;
	std::list<struct pile> fils;
} state;