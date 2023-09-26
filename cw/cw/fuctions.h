void SetCursor(int x, int y, int color, string text)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //���������� ����� ���� ������� (����������)
    COORD position;
    position.X = x; // ��������� ���������
    position.Y = y;
    SetConsoleCursorPosition(h, position); // ��������� ������� � ����������
	SetConsoleTextAttribute(h, color); // ��������� �����
	cout << text; // ����� ������ ������
}

void HideCursor(bool vision, int size) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// �������� �������� ������ � �������
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(h, &info);
}

void EndProgram(bool fail) {
	system("cls"); // ������� ������
	if (fail == false) {
		cout << "You win!!!\n\n"; // main() - ���������� ����������
	}
	else {
		cout << "You lost :(\n\n"; // main() - ���������� ����������
	}
	Sleep(INFINITE); // ����� �� ���� ������� ���� ������������ �� ������� ���������
}