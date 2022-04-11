#ifndef DJANGO_H
#define DJANGO_H
/**
 * struct dog - Django ID data
 * @name: dog´s name
 * @age: how old it is
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
