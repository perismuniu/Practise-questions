#ifndef MAIN_H
#define MAIN_H

/*Delcare all functions*/

int sum(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);
int mod(int, int);

/*Define all functions*/

int sum(int x, int y)
{
return (x + y);
}
int sub(int x, int y)
{
return (x - y);
}
int mult(int x, int y)
{
return (x * y);
}
int div(int x, int y)
{
return ((x == 0 || y == 0) ? 0 : (x / y));
}
int mod(int x, int y)
{
return (x % y);
}

#endif
