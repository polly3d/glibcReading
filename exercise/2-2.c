int main(void)
{
	int i,c;
	i = 0;
	c = 0;
	char s[100] = {0};
	while(i < 99)
	{
		c = getchar();
		if(c == EOF)
			break;
		else if(c == '\n')
			break;
		s[i++] = c;
	}

	s[i] = '\0';
	return 0;
}