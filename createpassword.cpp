void account::create_password()
{	
	int alphabat_count = 0, number_count = 0, special_count = 0;
	account_password = "\0"; // password 초기화
	cout << "비밀번호 입력 (알파벳, 숫자, 특수문자 포함) : " ;
	cin >> account_password;
	int i;
	for (i = 0; i < account_password.length(); i++)
	{	
		// ASCII 수치 값을 이용해서 알파벳, 숫자, 특수문자를 count 함.
		if (account_password[i] >= 33 && account_password[i] <= 47)
			special_count++;
		if (account_password[i] >= 48 && account_password[i] <= 57)
			number_count++;
		if (account_password[i] >= 58 && account_password[i] <= 64)
			special_count++;
		if (account_password[i] >= 65 && account_password[i] <= 90)
			alphabat_count++;
		if (account_password[i] >= 91 && account_password[i] <= 96)
			special_count++;
		if (account_password[i] >= 97 && account_password[i] <= 122)
			alphabat_count++;
		if (account_password[i] >= 123 && account_password[i] <= 126)
			special_count++;
	}
	// 알파벳, 숫자, 특수문자 중 하나라도 포함되지 않을 경우 비밀번호를 설정할 수 없음.
	if (!alphabat_count || !number_count || !special_count)
	{
		cout << "조건에 맞지 않는 비밀번호" << endl;
		create_password();
	}
}
