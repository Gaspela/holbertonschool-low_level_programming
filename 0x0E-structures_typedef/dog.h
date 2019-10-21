#ifndef Macro_dog
#define Macro_dog
/**
 * struct dog - Elementos of dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
*/
typedef struct dog
{

	char *name;
	float *age;
	char *owner;

} dog_t;
/**
 * dog_t - New elements dog.
 * @name: Dog name.
 * @age: Dog age.
 * @owner: Dog owner.
 * @d: data.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
