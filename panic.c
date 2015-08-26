#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, i, k, count = 0;
	char * KeyCode[] = { "EMPTY", "[ESC]", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "-", "=", "[Back Space]", "[Tab]", "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "[", "]", "[Enter]", "[Ctrl]", "A", "S", "D", "F", "G", "H", "J", "K", "L", ";", "'", "`", "[Left Shift]", "[Reverse Slash]", "Z", "X", "C", "V", "B", "N", "M", ",", ".", "/", "[Right Shift]", "*", "[Alt]", "[Space]", "[Caps Lock]", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "[Num Lock]", "[Scroll Lock]", "[Home]", "[Key Up]", "[Page Up]", "-", "[Key Left]", "[Center]", "[Right]", "+", "[End]", "[Key Down]", "[Page Down]", "[Insert]", "[Delete]", "/", "[Enter]", "F11", "F12", "[Insert]", "[Delete]", "[Home]", "[End]", "[Page Up]", "[Page Down]", "[Key Left]", "[Key Right]", "[Key Up]", "[Key Down]", "[Right Alt]", "[Right Ctrl]", "[Pause]" };
	char Code[] = { 0x24, 0x19, 0x39, 0x31, 0x24, 0x2d, 0x2d, 0x2d, 0x39, 0x32, 0x15, 0x39, 0x26, 0x25, 0x15, 0x30, 0x24, 0x18, 0x17, 0x11, 0x39, 0x19, 0x18, 0x1f, 0x39, 0x1e, 0x24, 0x31, 0x25, 0x39, 0x22, 0x17, 0x18, 0x2c, 0x15 };
	char * Flag;

	for (k = 0; k < sizeof(KeyCode); k++)
	{
		if (Code[k] == 57)
		{
			printf(" ");
			continue;
		}
		for (i = 0; i < 254; i++)
		{
			v3 = i;
			if (v3 > 24)
			{
				if (v3 > 35)
				{
					v13 = v3 - 37;
					if (!v13)
					{
						v18 = 38;
						goto LABEL_44;
					}
					v14 = v13 - 9;
					if (!v14)
					{
						v18 = 34;
						goto LABEL_44;
					}
					v15 = v14 - 6;
					if (!v15)
					{
						v18 = 45;
						goto LABEL_44;
					}
					if (v15 == 1)
					{
						v18 = 52;
						goto LABEL_44;
					}
				}
				else
				{
					if (v3 == 35)
					{
						v18 = 25;
						goto LABEL_44;
					}
					v10 = v3 - 30;
					if (!v10)
					{
						v18 = 24;
						goto LABEL_44;
					}
					v11 = v10 - 2;
					if (!v11)
					{
						v18 = 17;
						goto LABEL_44;
					}
					v12 = v11 - 1;
					if (!v12)
					{
						v18 = 48;
						goto LABEL_44;
					}
					if (v12 == 1)
					{
						v18 = 30;
						goto LABEL_44;
					}
				}
				goto LABEL_39;
			}
			if (v3 == 24)
			{
				v18 = 36;
				goto LABEL_44;
			}
			if (v3 > 6)
			{
				v7 = v3 - 18;
				if (!v7)
				{
					v18 = 37;
					goto LABEL_44;
				}
				v8 = v7 - 1;
				if (!v8)
				{
					v18 = 23;
					goto LABEL_44;
				}
				v9 = v8 - 3;
				if (!v9)
				{
					v18 = 49;
					goto LABEL_44;
				}
				if (v9 == 1)
				{
					v18 = 31;
					goto LABEL_44;
				}
				goto LABEL_39;
			}
			if (v3 == 6)
			{
				v18 = 8;
				goto LABEL_44;
			}
			v4 = v3 - 2;
			if (!v4)
			{
				v18 = 5;
				goto LABEL_44;
			}
			v5 = v4 - 1;
			if (!v5)
			{
				v18 = 9;
				goto LABEL_44;
			}
			v6 = v5 - 1;
			if (!v6)
			{
				v18 = 2;
				goto LABEL_44;
			}
			if (v6 != 1)
			{
			LABEL_39:
				continue;
			}
			v18 = 4;
		LABEL_44:
			v16 = v18;
			if (Code[k] == v18)
				break;
		LABEL_45:
			if (Code[k] == v18)
				break;
		}
		if (i > 253)
			printf("%s", KeyCode[Code[k]]);
		else
			printf("%s", KeyCode[i]);

		if (KeyCode[Code[k]] == "Y")	// 실행 중지 에러를 막기위해 넣은 코드
		{								// 실행 중지 에러를 막기위해 넣은 코드
			if (count == 2)				// 실행 중지 에러를 막기위해 넣은 코드
				break;					// 실행 중지 에러를 막기위해 넣은 코드
			else						// 실행 중지 에러를 막기위해 넣은 코드
				count += 1;				// 실행 중지 에러를 막기위해 넣은 코드
		}								// 실행 중지 에러를 막기위해 넣은 코드

	}
	printf("\n");
	return 0;
}
