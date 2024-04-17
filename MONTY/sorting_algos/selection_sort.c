/* illustrates selection sort */
for (i = 0; i < n-1; i++)
{
	int min = i; /* stores variable i into minimum element */
	for (m = i+1; m < n; m++) /*iterates for comparison */
	{
		if (array[m] < array[min]) /* compares array[m] with minimum */
			min = m /* updates minimum to a value less than itself */
	}
	if (min != i) /* updated minimum is compared to the initial i */
		swap(array[i], array[min]) /* swaps i with minimum */
}
