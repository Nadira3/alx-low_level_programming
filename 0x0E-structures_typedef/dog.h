#ifndef DOG_H
#define DOG_H
/**
 * struct dog - has three elements
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog_t dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
