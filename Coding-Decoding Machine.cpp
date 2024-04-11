#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int Filter(string line, int position)
{
	if (line[position] == 'a' || line[position] == 'b' || line[position] == 'c' || line[position] == 'd' || line[position] == 'e' || line[position] == 'f' ||
		line[position] == 'g' || line[position] == 'h' || line[position] == 'i' || line[position] == 'j' || line[position] == 'k' || line[position] == 'l' ||
		line[position] == 'm' || line[position] == 'n' || line[position] == 'o' || line[position] == 'p' || line[position] == 'q' || line[position] == 'r' ||
		line[position] == 's' || line[position] == 't' || line[position] == 'u' || line[position] == 'v' || line[position] == 'w' || line[position] == 'x' ||
		line[position] == 'y' || line[position] == 'z') return 1;
	else if (line[position] == 'A' || line[position] == 'B' || line[position] == 'C' || line[position] == 'D' || line[position] == 'E' || line[position] == 'F' ||
		line[position] == 'G' || line[position] == 'H' || line[position] == 'I' || line[position] == 'J' || line[position] == 'K' || line[position] == 'L' ||
		line[position] == 'M' || line[position] == 'N' || line[position] == 'O' || line[position] == 'P' || line[position] == 'Q' || line[position] == 'R' ||
		line[position] == 'S' || line[position] == 'T' || line[position] == 'U' || line[position] == 'V' || line[position] == 'W' || line[position] == 'X' ||
		line[position] == 'Y' || line[position] == 'Z') return 2;
	else return 3;
}

int IfText(string key)
{
	for (int i = 0; i < key.length(); i++)
	{
		if (key[i] == 'A' || key[i] == 'B' || key[i] == 'C' || key[i] == 'D' || key[i] == 'E' || key[i] == 'F' ||
			key[i] == 'G' || key[i] == 'H' || key[i] == 'I' || key[i] == 'J' || key[i] == 'K' || key[i] == 'L' ||
			key[i] == 'M' || key[i] == 'N' || key[i] == 'O' || key[i] == 'P' || key[i] == 'Q' || key[i] == 'R' ||
			key[i] == 'S' || key[i] == 'T' || key[i] == 'U' || key[i] == 'V' || key[i] == 'W' || key[i] == 'X' ||
			key[i] == 'Y' || key[i] == 'Z');
		else return 0;
	}
	return 1;
}

int IfInt(string buffor, int shift)
{
	int buff = 0, j=0;
	for (int i = 0; i < buffor.length(); i++)
	{
		if (i == 0 && buffor[i] == '-') buff = 1;
		else if (buffor[i] == '0' || buffor[i] == '1' || buffor[i] == '2' || buffor[i] == '3' || buffor[i] == '4' || buffor[i] == '5' || buffor[i] == '6' ||
			buffor[i] == '7' || buffor[i] == '8' || buffor[i] == '9');
		else return 0;
	}
	for (int i = buffor.length() - 1; i >= 0; i--)
	{
		if (buffor[i] == '-');
		else if(buffor[i]=='0') shift += 0 * pow(10, j);
		else if (buffor[i] == '1') shift += 1 * pow(10, j);
		else if (buffor[i] == '2') shift += 2 * pow(10, j);
		else if (buffor[i] == '3') shift += 3 * pow(10, j);
		else if (buffor[i] == '4') shift += 4 * pow(10, j);
		else if (buffor[i] == '5') shift += 5 * pow(10, j);
		else if (buffor[i] == '6') shift += 6 * pow(10, j);
		else if (buffor[i] == '7') shift += 7 * pow(10, j);
		else if (buffor[i] == '8') shift += 8 * pow(10, j);
		else if (buffor[i] == '9') shift += 9 * pow(10, j);
		j++;
	}
	if (buff == 1) shift *= (-1);
	return shift;
}

string DecryptKey(string key)
{
	int ts = 26;
	vector<int> khelp;
	khelp.clear();
	for (int i = 0; i < key.length(); i++)
	{
		if (key[i] == 'A') khelp.push_back(0);
		else if (key[i] == 'B') khelp.push_back(1);
		else if (key[i] == 'C') khelp.push_back(2);
		else if (key[i] == 'D') khelp.push_back(3);
		else if (key[i] == 'E') khelp.push_back(4);
		else if (key[i] == 'F') khelp.push_back(5);
		else if (key[i] == 'G') khelp.push_back(6);
		else if (key[i] == 'H') khelp.push_back(7);
		else if (key[i] == 'I') khelp.push_back(8);
		else if (key[i] == 'J') khelp.push_back(9);
		else if (key[i] == 'K') khelp.push_back(10);
		else if (key[i] == 'L') khelp.push_back(11);
		else if (key[i] == 'M') khelp.push_back(12);
		else if (key[i] == 'N') khelp.push_back(13);
		else if (key[i] == 'O') khelp.push_back(14);
		else if (key[i] == 'P') khelp.push_back(15);
		else if (key[i] == 'Q') khelp.push_back(16);
		else if (key[i] == 'R') khelp.push_back(17);
		else if (key[i] == 'S') khelp.push_back(18);
		else if (key[i] == 'T') khelp.push_back(19);
		else if (key[i] == 'U') khelp.push_back(20);
		else if (key[i] == 'V') khelp.push_back(21);
		else if (key[i] == 'W') khelp.push_back(22);
		else if (key[i] == 'X') khelp.push_back(23);
		else if (key[i] == 'Y') khelp.push_back(24);
		else if (key[i] == 'Z') khelp.push_back(25);
	}
	for (int i = 0; i < khelp.size(); i++)
	{
		if ((26 - khelp.at(i)) % 26 == 0) key[i] = 'A';
		else if ((26 - khelp.at(i)) % 26 == 1) key[i] = 'B';
		else if ((26 - khelp.at(i)) % 26 == 2) key[i] = 'C';
		else if ((26 - khelp.at(i)) % 26 == 3) key[i] = 'D';
		else if ((26 - khelp.at(i)) % 26 == 4) key[i] = 'E';
		else if ((26 - khelp.at(i)) % 26 == 5) key[i] = 'F';
		else if ((26 - khelp.at(i)) % 26 == 6) key[i] = 'G';
		else if ((26 - khelp.at(i)) % 26 == 7) key[i] = 'H';
		else if ((26 - khelp.at(i)) % 26 == 8) key[i] = 'I';
		else if ((26 - khelp.at(i)) % 26 == 9) key[i] = 'J';
		else if ((26 - khelp.at(i)) % 26 == 10) key[i] = 'K';
		else if ((26 - khelp.at(i)) % 26 == 11) key[i] = 'L';
		else if ((26 - khelp.at(i)) % 26 == 12) key[i] = 'M';
		else if ((26 - khelp.at(i)) % 26 == 13) key[i] = 'N';
		else if ((26 - khelp.at(i)) % 26 == 14) key[i] = 'O';
		else if ((26 - khelp.at(i)) % 26 == 15) key[i] = 'P';
		else if ((26 - khelp.at(i)) % 26 == 16) key[i] = 'Q';
		else if ((26 - khelp.at(i)) % 26 == 17) key[i] = 'R';
		else if ((26 - khelp.at(i)) % 26 == 18) key[i] = 'S';
		else if ((26 - khelp.at(i)) % 26 == 19) key[i] = 'T';
		else if ((26 - khelp.at(i)) % 26 == 20) key[i] = 'U';
		else if ((26 - khelp.at(i)) % 26 == 21) key[i] = 'V';
		else if ((26 - khelp.at(i)) % 26 == 22) key[i] = 'W';
		else if ((26 - khelp.at(i)) % 26 == 23) key[i] = 'X';
		else if ((26 - khelp.at(i)) % 26 == 24) key[i] = 'Y';
		else if ((26 - khelp.at(i)) % 26 == 25) key[i] = 'Z';
	}
	return key;
}

string CaesarCipher(int filter, string line, int i, string character, int shift)
{
	int ccipher = 0;
	if (filter == 1)
	{
		if (line[i] == 'a') ccipher = (0 + shift + 26) % 26;
		else if (line[i] == 'b') ccipher = (1 + shift + 26) % 26;
		else if (line[i] == 'c') ccipher = (2 + shift + 26) % 26;
		else if (line[i] == 'd') ccipher = (3 + shift + 26) % 26;
		else if (line[i] == 'e') ccipher = (4 + shift + 26) % 26;
		else if (line[i] == 'f') ccipher = (5 + shift + 26) % 26;
		else if (line[i] == 'g') ccipher = (6 + shift + 26) % 26;
		else if (line[i] == 'h') ccipher = (7 + shift + 26) % 26;
		else if (line[i] == 'i') ccipher = (8 + shift + 26) % 26;
		else if (line[i] == 'j') ccipher = (9 + shift + 26) % 26;
		else if (line[i] == 'k') ccipher = (10 + shift + 26) % 26;
		else if (line[i] == 'l') ccipher = (11 + shift + 26) % 26;
		else if (line[i] == 'm') ccipher = (12 + shift + 26) % 26;
		else if (line[i] == 'n') ccipher = (13 + shift + 26) % 26;
		else if (line[i] == 'o') ccipher = (14 + shift + 26) % 26;
		else if (line[i] == 'p') ccipher = (15 + shift + 26) % 26;
		else if (line[i] == 'q') ccipher = (16 + shift + 26) % 26;
		else if (line[i] == 'r') ccipher = (17 + shift + 26) % 26;
		else if (line[i] == 's') ccipher = (18 + shift + 26) % 26;
		else if (line[i] == 't') ccipher = (19 + shift + 26) % 26;
		else if (line[i] == 'u') ccipher = (20 + shift + 26) % 26;
		else if (line[i] == 'v') ccipher = (21 + shift + 26) % 26;
		else if (line[i] == 'w') ccipher = (22 + shift + 26) % 26;
		else if (line[i] == 'x') ccipher = (23 + shift + 26) % 26;
		else if (line[i] == 'y') ccipher = (24 + shift + 26) % 26;
		else if (line[i] == 'z') ccipher = (25 + shift + 26) % 26;

		if (ccipher == 0) character = "a";
		else if (ccipher == 1) character = "b";
		else if (ccipher == 2) character = "c";
		else if (ccipher == 3) character = "d";
		else if (ccipher == 4) character = "e";
		else if (ccipher == 5) character = "f";
		else if (ccipher == 6) character = "g";
		else if (ccipher == 7) character = "h";
		else if (ccipher == 8) character = "i";
		else if (ccipher == 9) character = "j";
		else if (ccipher == 10) character = "k";
		else if (ccipher == 11) character = "l";
		else if (ccipher == 12) character = "m";
		else if (ccipher == 13) character = "n";
		else if (ccipher == 14) character = "o";
		else if (ccipher == 15) character = "p";
		else if (ccipher == 16) character = "q";
		else if (ccipher == 17) character = "r";
		else if (ccipher == 18) character = "s";
		else if (ccipher == 19) character = "t";
		else if (ccipher == 20) character = "u";
		else if (ccipher == 21) character = "v";
		else if (ccipher == 22) character = "w";
		else if (ccipher == 23) character = "x";
		else if (ccipher == 24) character = "y";
		else if (ccipher == 25) character = "z";
	}
	else if (filter == 2)
	{
		if (line[i] == 'A') ccipher = (0 + shift + 26) % 26;
		else if (line[i] == 'B') ccipher = (1 + shift + 26) % 26;
		else if (line[i] == 'C') ccipher = (2 + shift + 26) % 26;
		else if (line[i] == 'D') ccipher = (3 + shift + 26) % 26;
		else if (line[i] == 'E') ccipher = (4 + shift + 26) % 26;
		else if (line[i] == 'F') ccipher = (5 + shift + 26) % 26;
		else if (line[i] == 'G') ccipher = (6 + shift + 26) % 26;
		else if (line[i] == 'H') ccipher = (7 + shift + 26) % 26;
		else if (line[i] == 'I') ccipher = (8 + shift + 26) % 26;
		else if (line[i] == 'J') ccipher = (9 + shift + 26) % 26;
		else if (line[i] == 'K') ccipher = (10 + shift + 26) % 26;
		else if (line[i] == 'L') ccipher = (11 + shift + 26) % 26;
		else if (line[i] == 'M') ccipher = (12 + shift + 26) % 26;
		else if (line[i] == 'N') ccipher = (13 + shift + 26) % 26;
		else if (line[i] == 'O') ccipher = (14 + shift + 26) % 26;
		else if (line[i] == 'P') ccipher = (15 + shift + 26) % 26;
		else if (line[i] == 'Q') ccipher = (16 + shift + 26) % 26;
		else if (line[i] == 'R') ccipher = (17 + shift + 26) % 26;
		else if (line[i] == 'S') ccipher = (18 + shift + 26) % 26;
		else if (line[i] == 'T') ccipher = (19 + shift + 26) % 26;
		else if (line[i] == 'U') ccipher = (20 + shift + 26) % 26;
		else if (line[i] == 'V') ccipher = (21 + shift + 26) % 26;
		else if (line[i] == 'W') ccipher = (22 + shift + 26) % 26;
		else if (line[i] == 'X') ccipher = (23 + shift + 26) % 26;
		else if (line[i] == 'Y') ccipher = (24 + shift + 26) % 26;
		else if (line[i] == 'Z') ccipher = (25 + shift + 26) % 26;

		if (ccipher == 0) character = "A";
		else if (ccipher == 1) character = "B";
		else if (ccipher == 2) character = "C";
		else if (ccipher == 3) character = "D";
		else if (ccipher == 4) character = "E";
		else if (ccipher == 5) character = "F";
		else if (ccipher == 6) character = "G";
		else if (ccipher == 7) character = "H";
		else if (ccipher == 8) character = "I";
		else if (ccipher == 9) character = "J";
		else if (ccipher == 10) character = "K";
		else if (ccipher == 11) character = "L";
		else if (ccipher == 12) character = "M";
		else if (ccipher == 13) character = "N";
		else if (ccipher == 14) character = "O";
		else if (ccipher == 15) character = "P";
		else if (ccipher == 16) character = "Q";
		else if (ccipher == 17) character = "R";
		else if (ccipher == 18) character = "S";
		else if (ccipher == 19) character = "T";
		else if (ccipher == 20) character = "U";
		else if (ccipher == 21) character = "V";
		else if (ccipher == 22) character = "W";
		else if (ccipher == 23) character = "X";
		else if (ccipher == 24) character = "Y";
		else if (ccipher == 25) character = "Z";
	}
	return character;
}

string CaesarDecipher(int filter, string line, int i, string character, int shift)
{
	int ccipher = 0;
	if (filter == 1)
	{
		if (line[i] == 'a') ccipher = (0 - shift + 26) % 26;
		else if (line[i] == 'b') ccipher = (1 - shift + 26) % 26;
		else if (line[i] == 'c') ccipher = (2 - shift + 26) % 26;
		else if (line[i] == 'd') ccipher = (3 - shift + 26) % 26;
		else if (line[i] == 'e') ccipher = (4 - shift + 26) % 26;
		else if (line[i] == 'f') ccipher = (5 - shift + 26) % 26;
		else if (line[i] == 'g') ccipher = (6 - shift + 26) % 26;
		else if (line[i] == 'h') ccipher = (7 - shift + 26) % 26;
		else if (line[i] == 'i') ccipher = (8 - shift + 26) % 26;
		else if (line[i] == 'j') ccipher = (9 - shift + 26) % 26;
		else if (line[i] == 'k') ccipher = (10 - shift + 26) % 26;
		else if (line[i] == 'l') ccipher = (11 - shift + 26) % 26;
		else if (line[i] == 'm') ccipher = (12 - shift + 26) % 26;
		else if (line[i] == 'n') ccipher = (13 - shift + 26) % 26;
		else if (line[i] == 'o') ccipher = (14 - shift + 26) % 26;
		else if (line[i] == 'p') ccipher = (15 - shift + 26) % 26;
		else if (line[i] == 'q') ccipher = (16 - shift + 26) % 26;
		else if (line[i] == 'r') ccipher = (17 - shift + 26) % 26;
		else if (line[i] == 's') ccipher = (18 - shift + 26) % 26;
		else if (line[i] == 't') ccipher = (19 - shift + 26) % 26;
		else if (line[i] == 'u') ccipher = (20 - shift + 26) % 26;
		else if (line[i] == 'v') ccipher = (21 - shift + 26) % 26;
		else if (line[i] == 'w') ccipher = (22 - shift + 26) % 26;
		else if (line[i] == 'x') ccipher = (23 - shift + 26) % 26;
		else if (line[i] == 'y') ccipher = (24 - shift + 26) % 26;
		else if (line[i] == 'z') ccipher = (25 - shift + 26) % 26;

		if (ccipher == 0) character = "a";
		else if (ccipher == 1) character = "b";
		else if (ccipher == 2) character = "c";
		else if (ccipher == 3) character = "d";
		else if (ccipher == 4) character = "e";
		else if (ccipher == 5) character = "f";
		else if (ccipher == 6) character = "g";
		else if (ccipher == 7) character = "h";
		else if (ccipher == 8) character = "i";
		else if (ccipher == 9) character = "j";
		else if (ccipher == 10) character = "k";
		else if (ccipher == 11) character = "l";
		else if (ccipher == 12) character = "m";
		else if (ccipher == 13) character = "n";
		else if (ccipher == 14) character = "o";
		else if (ccipher == 15) character = "p";
		else if (ccipher == 16) character = "q";
		else if (ccipher == 17) character = "r";
		else if (ccipher == 18) character = "s";
		else if (ccipher == 19) character = "t";
		else if (ccipher == 20) character = "u";
		else if (ccipher == 21) character = "v";
		else if (ccipher == 22) character = "w";
		else if (ccipher == 23) character = "x";
		else if (ccipher == 24) character = "y";
		else if (ccipher == 25) character = "z";
	}
	else if (filter == 2)
	{
		if (line[i] == 'A') ccipher = (0 - shift + 26) % 26;
		else if (line[i] == 'B') ccipher = (1 - shift + 26) % 26;
		else if (line[i] == 'C') ccipher = (2 - shift + 26) % 26;
		else if (line[i] == 'D') ccipher = (3 - shift + 26) % 26;
		else if (line[i] == 'E') ccipher = (4 - shift + 26) % 26;
		else if (line[i] == 'F') ccipher = (5 - shift + 26) % 26;
		else if (line[i] == 'G') ccipher = (6 - shift + 26) % 26;
		else if (line[i] == 'H') ccipher = (7 - shift + 26) % 26;
		else if (line[i] == 'I') ccipher = (8 - shift + 26) % 26;
		else if (line[i] == 'J') ccipher = (9 - shift + 26) % 26;
		else if (line[i] == 'K') ccipher = (10 - shift + 26) % 26;
		else if (line[i] == 'L') ccipher = (11 - shift + 26) % 26;
		else if (line[i] == 'M') ccipher = (12 - shift + 26) % 26;
		else if (line[i] == 'N') ccipher = (13 - shift + 26) % 26;
		else if (line[i] == 'O') ccipher = (14 - shift + 26) % 26;
		else if (line[i] == 'P') ccipher = (15 - shift + 26) % 26;
		else if (line[i] == 'Q') ccipher = (16 - shift + 26) % 26;
		else if (line[i] == 'R') ccipher = (17 - shift + 26) % 26;
		else if (line[i] == 'S') ccipher = (18 - shift + 26) % 26;
		else if (line[i] == 'T') ccipher = (19 - shift + 26) % 26;
		else if (line[i] == 'U') ccipher = (20 - shift + 26) % 26;
		else if (line[i] == 'V') ccipher = (21 - shift + 26) % 26;
		else if (line[i] == 'W') ccipher = (22 - shift + 26) % 26;
		else if (line[i] == 'X') ccipher = (23 - shift + 26) % 26;
		else if (line[i] == 'Y') ccipher = (24 - shift + 26) % 26;
		else if (line[i] == 'Z') ccipher = (25 - shift + 26) % 26;

		if (ccipher == 0) character = "A";
		else if (ccipher == 1) character = "B";
		else if (ccipher == 2) character = "C";
		else if (ccipher == 3) character = "D";
		else if (ccipher == 4) character = "E";
		else if (ccipher == 5) character = "F";
		else if (ccipher == 6) character = "G";
		else if (ccipher == 7) character = "H";
		else if (ccipher == 8) character = "I";
		else if (ccipher == 9) character = "J";
		else if (ccipher == 10) character = "K";
		else if (ccipher == 11) character = "L";
		else if (ccipher == 12) character = "M";
		else if (ccipher == 13) character = "N";
		else if (ccipher == 14) character = "O";
		else if (ccipher == 15) character = "P";
		else if (ccipher == 16) character = "Q";
		else if (ccipher == 17) character = "R";
		else if (ccipher == 18) character = "S";
		else if (ccipher == 19) character = "T";
		else if (ccipher == 20) character = "U";
		else if (ccipher == 21) character = "V";
		else if (ccipher == 22) character = "W";
		else if (ccipher == 23) character = "X";
		else if (ccipher == 24) character = "Y";
		else if (ccipher == 25) character = "Z";
	}
	return character;
}

string SubCipher(int filter, string line, int i, string character)
{
	if (filter == 1)
	{
		if (line[i] == 'a') character = "q";
		else if (line[i] == 'b') character = "w";
		else if (line[i] == 'c') character = "e";
		else if (line[i] == 'd') character = "r";
		else if (line[i] == 'e') character = "t";
		else if (line[i] == 'f') character = "y";
		else if (line[i] == 'g') character = "u";
		else if (line[i] == 'h') character = "i";
		else if (line[i] == 'i') character = "o";
		else if (line[i] == 'j') character = "p";
		else if (line[i] == 'k') character = "a";
		else if (line[i] == 'l') character = "s";
		else if (line[i] == 'm') character = "d";
		else if (line[i] == 'n') character = "f";
		else if (line[i] == 'o') character = "g";
		else if (line[i] == 'p') character = "h";
		else if (line[i] == 'q') character = "j";
		else if (line[i] == 'r') character = "k";
		else if (line[i] == 's') character = "l";
		else if (line[i] == 't') character = "z";
		else if (line[i] == 'u') character = "x";
		else if (line[i] == 'v') character = "c";
		else if (line[i] == 'w') character = "v";
		else if (line[i] == 'x') character = "b";
		else if (line[i] == 'y') character = "n";
		else if (line[i] == 'z') character = "m";
	}
	else if (filter == 2)
	{
		if (line[i] == 'A') character = "Q";
		else if (line[i] == 'B') character = "W";
		else if (line[i] == 'C') character = "E";
		else if (line[i] == 'D') character = "R";
		else if (line[i] == 'E') character = "T";
		else if (line[i] == 'F') character = "Y";
		else if (line[i] == 'G') character = "U";
		else if (line[i] == 'H') character = "I";
		else if (line[i] == 'I') character = "O";
		else if (line[i] == 'J') character = "P";
		else if (line[i] == 'K') character = "A";
		else if (line[i] == 'L') character = "S";
		else if (line[i] == 'M') character = "D";
		else if (line[i] == 'N') character = "F";
		else if (line[i] == 'O') character = "G";
		else if (line[i] == 'P') character = "H";
		else if (line[i] == 'Q') character = "J";
		else if (line[i] == 'R') character = "K";
		else if (line[i] == 'S') character = "L";
		else if (line[i] == 'T') character = "Z";
		else if (line[i] == 'U') character = "X";
		else if (line[i] == 'V') character = "C";
		else if (line[i] == 'W') character = "V";
		else if (line[i] == 'X') character = "B";
		else if (line[i] == 'Y') character = "N";
		else if (line[i] == 'Z') character = "M";
	}
	return character;
}

string SubDecipher(int filter, string line, int i, string character)
{
	if (filter == 1)
	{
		if (line[i] == 'q') character = "a";
		else if (line[i] == 'w') character = "b";
		else if (line[i] == 'e') character = "c";
		else if (line[i] == 'r') character = "d";
		else if (line[i] == 't') character = "e";
		else if (line[i] == 'y') character = "f";
		else if (line[i] == 'u') character = "g";
		else if (line[i] == 'i') character = "h";
		else if (line[i] == 'o') character = "i";
		else if (line[i] == 'p') character = "j";
		else if (line[i] == 'a') character = "k";
		else if (line[i] == 's') character = "l";
		else if (line[i] == 'd') character = "m";
		else if (line[i] == 'f') character = "n";
		else if (line[i] == 'g') character = "o";
		else if (line[i] == 'h') character = "p";
		else if (line[i] == 'j') character = "q";
		else if (line[i] == 'k') character = "r";
		else if (line[i] == 'l') character = "s";
		else if (line[i] == 'z') character = "t";
		else if (line[i] == 'x') character = "u";
		else if (line[i] == 'c') character = "v";
		else if (line[i] == 'b') character = "w";
		else if (line[i] == 'b') character = "x";
		else if (line[i] == 'n') character = "y";
		else if (line[i] == 'm') character = "z";
	}
	else if (filter == 2)
	{
		if (line[i] == 'Q') character = "A";
		else if (line[i] == 'W') character = "B";
		else if (line[i] == 'E') character = "C";
		else if (line[i] == 'R') character = "D";
		else if (line[i] == 'T') character = "E";
		else if (line[i] == 'Y') character = "F";
		else if (line[i] == 'U') character = "G";
		else if (line[i] == 'I') character = "H";
		else if (line[i] == 'O') character = "I";
		else if (line[i] == 'P') character = "J";
		else if (line[i] == 'A') character = "K";
		else if (line[i] == 'S') character = "L";
		else if (line[i] == 'D') character = "M";
		else if (line[i] == 'F') character = "N";
		else if (line[i] == 'G') character = "O";
		else if (line[i] == 'H') character = "P";
		else if (line[i] == 'J') character = "Q";
		else if (line[i] == 'K') character = "R";
		else if (line[i] == 'L') character = "S";
		else if (line[i] == 'Z') character = "T";
		else if (line[i] == 'X') character = "U";
		else if (line[i] == 'C') character = "V";
		else if (line[i] == 'V') character = "W";
		else if (line[i] == 'B') character = "X";
		else if (line[i] == 'N') character = "Y";
		else if (line[i] == 'M') character = "Z";
	}
	return character;
}

string VigenereCipher(int filter, string line, int i, string character, string key, int keycount)
{
	if ((line[i] + key[keycount % key.length()]) % 26 == 0) character = 'A';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 1) character = 'B';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 2) character = 'C';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 3) character = 'D';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 4) character = 'E';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 5) character = 'F';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 6) character = 'G';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 7) character = 'H';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 8) character = 'I';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 9) character = 'J';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 10) character = 'K';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 11) character = 'L';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 12) character = 'M';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 13) character = 'N';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 14) character = 'O';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 15) character = 'P';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 16) character = 'Q';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 17) character = 'R';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 18) character = 'S';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 19) character = 'T';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 20) character = 'U';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 21) character = 'V';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 22) character = 'W';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 23) character = 'X';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 24) character = 'Y';
	else if ((line[i] + key[keycount % key.length()]) % 26 == 25) character = 'Z';

	return character;
}

int main()
{
	int turn = 0, side = 0, help = 0, filter = 0, shift = 0, keycount=0, help_d = 0;
	const int page = 15;
	string in = {}, out = {}, mode = {}, method = {}, move = {}, line = {}, character = {}, key = {}, buffor = {};
	cout << "Name of the entering file: ";
	cin >> in;
	cout << endl;
	cout << "Name of the exiting file: ";
	cin >> out;
	cout << endl;
	cout << "Cipher or Decipher: ";
	cin >> mode;
	if (mode == "Decipher" || mode == "decipher") help_d = 1;
	cout << endl;
	cout << "De/Ciphering method (currently available: Caesar, Sub, Vigenere): ";
	cin >> method;
	system("CLS");
	ifstream InFile, OutFileRead;
	ofstream OutFile;
	OutFile.open(out.c_str());
	if (OutFile.is_open() == false)
	{
		system("CLS");
		cout << "Unable to create OUT file" << endl;
		return 0;
	}
	while (1)
	{
		InFile.open(in.c_str());
		if (InFile.is_open()==false)
		{
			cout << "This file does not exist, please enter correct IN file's name: ";
			cin >> in;
			cout << endl;
		}
		else break;
	}
	while (1)
	{
		if (mode == "Cipher" || mode == "cipher" || mode == "Decipher" || mode == "decipher") break;
		else if (mode != "Cipher" || mode != "cipher" || mode != "Decipher" || mode != "decipher")
		{
			cout << "Please choose cipher or decipher (mind the spelling): ";
			cin >> mode;
			cout << endl;
		}
	}
	while (1)
	{
		if (method == "Caesar" || method == "caesar" || method == "Sub" || method == "sub" || method == "Vigenere" || method == "vigenere") break;
		else if (method != "Caesar" || method != "caesar" || method != "Sub" || method != "sub" || method != "Vigenere" || method != "vigenere")
		{
			cout << "Please choose one of the available methods (caesar, sub, vigenere): ";
			cin >> method;
			cout << endl;
		}
	}
	/*if (mode == "Cipher" || mode == "cipher") OutFile << "Cipher \n";
	else if (mode == "Decipher" || mode == "decipher") OutFile << "Decipher \n";*/
	if (method == "Caesar" || method == "caesar")
	{
		cout << "Declare the shift: ";
		cin >> buffor;
		cout << endl;
		while (1)
		{
			shift = IfInt(buffor, shift);
			if (shift == 0)
			{
				cout << "Shift must be an integer: ";
				cin >> buffor;
				cout << endl;
			}
			else break;
		}
		while (!InFile.eof())
		{
			getline(InFile, line);
			for (int i = 0; i < line.length(); i++)
			{
				filter = Filter(line, i);
				if (filter == 3)
				{
					character = line[i];
				}
				else if (filter == 1 || filter == 2)
				{
					if (mode == "Cipher" || mode == "cipher")
					{
						character = CaesarCipher(filter, line, i, character, shift);
					}
					else if (mode == "Decipher" || mode == "decipher")
					{
						character = CaesarDecipher(filter, line, i, character, shift);
					}
				}
				OutFile << character;
			}
			OutFile << "\n";
		}
	}
	else if (method == "Sub" || method == "sub")
	{
		while (!InFile.eof())
		{
			getline(InFile, line);
			for (int i = 0; i < line.length(); i++)
			{
				filter = Filter(line, i);
				if (filter == 3)
				{
					character = line[i];
				}
				else if (filter == 1 || filter == 2)
				{
					if (mode == "Cipher" || mode == "cipher")
					{
						character = SubCipher(filter, line, i, character);
					}
					else if (mode == "Decipher" || mode == "decipher")
					{
						character = SubDecipher(filter, line, i, character);
					}
				}
				OutFile << character;
			}
			OutFile << "\n";
		}
	}
	else if (method == "Vigenere" || method == "vigenere")
	{
		cout << "Enter the key: ";
		cin >> key;
		while (1)
		{
			if (IfText(key) == 0)
			{
				cout << "Please enter your key again (text only): ";
				cin >> key;
				cout << endl;
			}
			else if (IfText(key) == 1) break;
		}
		if (help_d == 1) key=DecryptKey(key);
		while (!InFile.eof())
		{
			getline(InFile, line);
			for (int i = 0; i < line.length(); i++)
			{
				filter = Filter(line, i);
				if (filter == 1 || filter == 3)
				{
					character = line[i];
				}
				else if (filter == 2)
				{
					if (mode == "Cipher" || mode == "cipher")
					{
						character = VigenereCipher(filter, line, i, character, key, keycount);
						keycount++;
					}
					else if (mode == "Decipher" || mode == "decipher")
					{
						character = VigenereCipher(filter, line, i, character, key, keycount);
						keycount++;
					}
				}
				OutFile << character;
			}
			OutFile << "\n";
		}
	}
	InFile.close();
	OutFile.close();
	OutFileRead.open(out.c_str());
	if (OutFileRead.is_open() == false)
	{
		system("CLS");
		cout << "Unable to open OUT file." << endl;
		return 0;
	}
	system("CLS");
	cout << endl;
	for (int i = 0; i < page; i++)
	{
		getline(OutFileRead, line);
		cout << line << endl;
		line = {};
	}
	while (1)
	{
		cout << "Next page, switch or exit: ";
		cin >> move;
		if (move == "switch" && side == 0)
		{
			side = 1;
			OutFileRead.close();
			if (OutFileRead.is_open() == true)
			{
				system("CLS");
				cout << "Unable to close OUT file." << endl;
				return 0;
			}
			InFile.open(in.c_str());
			if (InFile.is_open() == false)
			{
				system("CLS");
				cout << "Unable to open IN file." << endl;
				return 0;
			}
			system("CLS");
			help = turn;
			while (1)
			{
				if (InFile.eof()) break;
				cout << endl;
				for (int i = 0; i < page; i++)
				{
					getline(InFile, line);
					cout << line << endl;
					line = {};
				}
				if (help > 0)
				{
					system("CLS");
					help--;
				}
				else break;
			}
		}
		else if (move == "switch" && side == 1)
		{
			side = 0;
			InFile.close();
			if (InFile.is_open() == true)
			{
				system("CLS");
				cout << "Unable to close IN file." << endl;
				return 0;
			}
			OutFileRead.open(out.c_str());
			if (OutFileRead.is_open() == false)
			{
				system("CLS");
				cout << "Unable to open OUT file." << endl;
				return 0;
			}
			system("CLS");
			help = turn;
			while (1)
			{
				if (OutFileRead.eof()) break;
				cout << endl;
				for (int i = 0; i < page; i++)
				{
					getline(OutFileRead, line);
					cout << line << endl;
					line = {};
				}
				if (help > 0)
				{
					system("CLS");
					help--;
				}
				else break;
			}
		}
		if (side == 0)
		{
			if (move == "exit") return 0;
			else if (move == "next")
			{
				if (OutFileRead.eof()) break;
				turn++;
				system("CLS");
				cout << endl;
				for (int i = 0; i < page; i++)
				{
					getline(OutFileRead, line);
					cout << line << endl;
					line = {};
				}
			}
		}
		else if (side == 1)
		{
			if (move == "exit") return 0;
			else if (move == "next")
			{
				if (InFile.eof()) break;
				turn++;
				system("CLS");
				cout << endl;
				for (int i = 0; i < page; i++)
				{
					getline(InFile, line);
					cout << line << endl;
					line = {};
				}
			}
		}
	}
	return 0;
}