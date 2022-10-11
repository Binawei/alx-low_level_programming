#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure for dogs
 * @name: member 1.
 * @age: member 2.
 * @owner: third member
 *
 * Discription: define a new type struct dog with the element
 * name, age amd owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*DOG_H*/
