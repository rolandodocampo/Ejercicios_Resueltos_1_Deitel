# 5.47

Este ejercicio es sólo para ver que imprime.

```c
int mistery(int a, int b)
{
	if(b == 1)
		return a;
	else
		return a + mistery(a, b - 1);
}
```

