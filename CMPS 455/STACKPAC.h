#ifndef STACKPAC
#define STACKPAC

template <class T, int n>
class STACK
{
private: T a[n]; int counter;
public:
	void ClearStack()
	{
		counter = 0;
	}
	bool EmptyStack()
	{
		if (counter == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool FullStack()
	{
		if (counter == n)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
	void PushStack(T x)
	{
		a[counter] = x; counter++;
	}
	T PopStack()
	{
		counter--; return a[counter];
	}
};
#endif
