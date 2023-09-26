void SetCursor(int x, int y, int color, string text)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //уникальный номер окна консоли (дескриптор)
    COORD position;
    position.X = x; // настройка координат
    position.Y = y;
    SetConsoleCursorPosition(h, position); // установка курсора в координату
	SetConsoleTextAttribute(h, color); // установка цвета
	cout << text; // вывод строки текста
}

void HideCursor(bool vision, int size) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// скрываем мигающий курсор в консоли
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 100;
	SetConsoleCursorInfo(h, &info);
}

void EndProgram(bool fail) {
	system("cls"); // очистка экрана
	if (fail == false) {
		cout << "You win!!!\n\n"; // main() - перезапуск приложения
	}
	else {
		cout << "You lost :(\n\n"; // main() - перезапуск приложения
	}
	Sleep(INFINITE); // пауза до того момента пока пользователь не закроет программу
}