# Recursion
* A function calling itself is called recursion 
* There must be a base condition that will terminate the recursion otherwise it will go into infinite loop

## Syntax
```c++
Type fun(param)
{
    if(<base condition>)
    {
        1. .........
        2. fun(param)
        3. ..........
    }
}
```
### Example
```c++
void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " " ;
        fun1( n - 1);
         
    }
}

void main()
{
    int x = 3;
    fun1(x);
}

// Once the functions are executed and the end result is obtained then 
// it trace back to the previous functions and terminates it until all the calls are closed and terminated 
```

## Static and Global Variables in Recursion 
* A Stack is created as, for every call each time a new variable will be created inside memory and it'll have its value this is also know as local variable of function 

```c++
int func(int n){
    Static int x = 0;
    if(n > 0){
    x++;
    return func(n-1) + x;
    }
    return 0;
}

main(){
    int a = 5;
    cout << func(5);
}
```