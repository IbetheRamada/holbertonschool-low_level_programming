/**
* print_name - function what will print a name
*@name: a char what guard a name
*@f: a void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name)
	}
}
