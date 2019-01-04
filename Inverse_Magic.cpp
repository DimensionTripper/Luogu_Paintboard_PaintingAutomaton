#include <bits/stdc++.h>
#define ri register int
#define il inline
#define mp make_pair
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int N = 1e6 + 110;
const int maxn = 110;
const int inf = 0x7fffffff;
const double eps = 1e-8;

il int read()
{
	int x = 0, f = 1;
	char ch = getchar();
	while (!isdigit(ch))
	{
		if (ch == '-')
			f = -1;
		ch = getchar();
	}
	while (isdigit(ch))
	{
		x = (x << 3) + (x << 1) + ch - '0';
		ch = getchar();
	}
	return x * f;
}

bool f;

il void Get_str(char *s)
{
	char ch = getchar();
	int len = -1;
	while (ch != '\n' && ch != EOF)
	{
		s[++len] = ch;
		ch = getchar();
	}
	if (ch == EOF)
		f = 1;
}

int n, m;
char s[N];

struct color
{
	int r, g, b;
};
color dic[35];

il void init()
{
	dic[0] = (color) {0, 0, 0};
	dic[1] = (color) {255, 255, 255};
	dic[2] = (color) {170, 170, 170};
	dic[3] = (color) {85, 85, 85};
	dic[4] = (color) {254, 211, 199};
	dic[5] = (color) {255, 196, 206};
	dic[6] = (color) {250, 172, 142};
	dic[7] = (color) {255, 139, 131};
	dic[8] = (color) {244, 67, 54};
	dic[9] = (color) {233, 30, 99};
	dic[10] = (color) {226, 102, 158};
	dic[11] = (color) {156, 39, 176};
	dic[12] = (color) {203, 58, 183};
	dic[13] = (color) {63, 81, 181};
	dic[14] = (color) {0, 70, 112};
	dic[15] = (color) {5, 113, 151};
	dic[16] = (color) {33, 150, 243};
	dic[17] = (color) {0, 188, 212};
	dic[18] = (color) {59, 229, 219};
	dic[19] = (color) {151, 253, 220};
	dic[20] = (color) {22, 115, 0};
	dic[21] = (color) {55, 169, 60};
	dic[22] = (color) {137, 230, 66};
	dic[23] = (color) {215, 255, 7};
	dic[24] = (color) {255, 246, 209};
	dic[25] = (color) {248, 203, 140};
	dic[26] = (color) {255, 235, 59};
	dic[27] = (color) {255, 193, 7};
	dic[28] = (color) {255, 152, 0};
	dic[29] = (color) {255, 87, 34};
	dic[30] = (color) {184, 63, 39};
	dic[31] = (color) {121, 85, 72};
}	

il char Get_32base(int x)
{
	if (x < 10)
		return x + '0';
	else
		return x - 10 + 'a';
}

il int Get_Dec(char ch)
{
	if (isdigit(ch))
		return ch - '0';
	return ch - 'a' + 10;
}

int main()
{
	freopen("base32.txt", "r", stdin);
	freopen("pic.ppm", "w", stdout);
	init();
	printf("P3");
	n = read(), m = read();
	printf("\n%d %d", n, m);
	printf("\n255");
	for (ri i = 1; i <= m; i++)
	{
		for (ri j = 1; j <= n; j++)
		{
			char ch;
			cin >> ch;
			getchar();
			int id = Get_Dec(ch);
			printf("\n%d\n%d\n%d", dic[id].r, dic[id].g, dic[id].b);
		}
	}
	return 0;
}
