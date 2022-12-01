#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int i;
    int s, k, w = 0, num = 1, a['i'];


    printf_s("insert massive length: ");
    scanf_s("%d", &i);


	for (s = 0; s < i; s++) {
		printf_s("insert massive element #%d : ", s);
		scanf_s("%d", &num);
		a[s] = num;
		
	}

	printf_s("{");
	for (k = 0; k < i; k++) {
		printf_s("%d,", a[k]);
	}
	printf_s("}\n");


	int max = a[0], ind_w = 0;
	while(w<i)
	{
		if (a[w] > max)
		{
			max = a[w];
			ind_w = w;
		}
		
		w++;
	}
	

	int m = 0, ind_m = 0;
	int min = a[0];
	while (m < i)
	{
		if (a[m] < min)
		{
			min = a[m];
			ind_m = m;
		}
		
		m++;
	}
	printf_s("min = %d\n max = %d\n", min, max);

	int b['i'];

	int g = 0;

	printf_s("{");
	for (k = 0; k < i; k++) {
		if(ind_m > k) {
			printf_s("%d,", a[k]);
			
		}
		if (ind_w < k) {
			printf_s("%d,", a[k]);

		}
	}
	printf_s("}\n");

  
}


