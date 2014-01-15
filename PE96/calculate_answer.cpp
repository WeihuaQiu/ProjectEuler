int calculate_answer(int s_m[][9][9])
{
	int thr_dig_number=0;
	int sum=0;
	int i;

	for(i=0;i<49;i++)
	{
		thr_dig_number = s_m[i][0][0]*100+s_m[i][0][1]*10+s_m[i][0][2];
		sum = sum + thr_dig_number;
	}

	return sum;
}