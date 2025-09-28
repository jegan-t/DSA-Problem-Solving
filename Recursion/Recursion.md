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