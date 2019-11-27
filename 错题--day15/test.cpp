#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int FindSubString(char* pch) {
	int count = 0;
	char* p1 = pch;
	while (*p1 != '\0') {
		if (*p1 == p1[1] - 1) {
			p1++;
			count++;
		}
		else {
			break;
		}
	}
	int count2 = count;
	while (*p1 != '\0') {
		if (*p1 == p1[1] + 1) {
			p1++;
			count2--;
		}
		else {
			break;
		}
	}
	if (count2 == 0) {
		return count;
	}
	return 0;
}

void ModifyString(char* pText) {
	char* p1 = pText;
	char* p2 = p1;
	while (*p1 != '\0') {
		int count = FindSubString(p1);
		if (count > 0) {
			*p2++ = *p1;	//p2滞后了回文串长个字符，将后续字符赋值给前一个字符
			sprintf(p2, "%i", count);
			while (*p2 != '\0') {
				p2++;
			}
			p1 += count + count + 1;	//p1跳过回文串
		}
		else {
			*p2++ = *p1++;
		}
	}
}


//int main() {
//	char text[32] = "XYBCDCBABABA";
//	ModifyString(text);
//	printf("%s \n", text);
//	system("pause");
//
//	return 0;
//}

