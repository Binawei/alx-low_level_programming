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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
