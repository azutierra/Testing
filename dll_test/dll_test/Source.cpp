extern "C"
{
	__declspec(dllexport) int __stdcall sum(int a, int b)
	{
		return a + b;
	}
}