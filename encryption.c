for(int i = 0, length = strlen(s); i < length; i++) 
{ 
	if(isalpha(s[i])) 
	{ 
		if(isupper(s[i])) 
		{ 
			s[i] = (s[i] - 65 + key) %26 +65; 
		} 
		else if (islower(s[i]))
		{ 
			s[i] = (s[i] -97 + key) %26 + 97; 
		} 
		printf("%s\n", s[i]); 
		return 0;
	}
}