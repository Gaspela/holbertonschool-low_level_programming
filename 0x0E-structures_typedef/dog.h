#ifndef Macro_god
#define Macro_god
/**
 * struct dog - Elementos of dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
*/
struct dog
{

	char *name;
	float *age;
	char *owner;

};
/**
 * dog_t - New elements dog.
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
