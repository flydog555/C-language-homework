#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				for (d = 0; d <= 1; d++)
				{
					for (e = 0; e <= 1; e++)
					{
						for (f = 0; f <= 1; f++)
						{
							if (a == 0 && b == 0)
								;
							else
							{
								if (a == 1 && d == 1)
									;
								else
								{
									if ((b == 0 && c == 0) || (b == 1 && c == 1))
									{
										if ((c == 0 && d == 1) || (c == 1 && d == 0))
										{
											if ((a == 0 && e == 1 && f == 1) || (a == 1 && e == 1 && f == 0) || (a == 1 && e == 0 && f == 1))
											{
												if (d == 0 && e == 1)
													;
												else
												{
													//A
													if (a == 1)
													{
														printf("A will be assigned.\n");
													}
													else
													{
														printf("A will not be assigned.\n");
													}
													//B
													if (b == 1)
													{
														printf("B will be assigned.\n");
													}
													else
													{
														printf("B will not be assigned.\n");
													}
													//C
													if (c == 1)
													{
														printf("C will be assigned.\n");
													}
													else
													{
														printf("C will not be assigned.\n");
													}
													//D
													if (d == 1)
													{
														printf("D will be assigned.\n");
													}
													else
													{
														printf("D will not be assigned.\n");
													}
													//E
													if (e == 1)
													{
														printf("E will be assigned.\n");
													}
													else
													{
														printf("E will not be assigned.\n");
													}
													//F
													if (f == 1)
													{
														printf("F will be assigned.\n");
													}
													else
													{
														printf("F will not be assigned.\n");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}