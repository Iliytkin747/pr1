# include <stdio.h>
# include <stdlib.h>
#define INT_MAX 2147483647

////////////Очередь/////////////
typedef struct Line
{
	int value;
	struct Line *next;
	struct Line *early;
}
Line;

typedef struct OptLine
{
	Line* head;
	Line* tail;
}
OptLine;

OptLine* InitOptLine()
{

	struct Line * interim;

	interim = malloc(sizeof(struct Line));
	interim->value = -1;
	interim->next = NULL;
	interim->early = NULL;

	struct OptLine * interim1;

	interim1 = malloc(sizeof(struct OptLine));
	interim1->head = interim;
	interim1->tail = interim;

	return interim1;
}

int isEmptyLine(OptLine* g)
{
	if ((g->head->value == -1))
		return 1;
	else
		return 0;
}

void AddInLine(int a, OptLine* g)
{
	{
		if (g->head->value == -1)
		{
			g->head->value = a;
		}
		else
		{

			struct Line * interim = malloc(sizeof(struct Line));
			g->tail->next = interim;
			interim->value = a;
			interim->early = g->tail;
			interim->next = NULL;
			g->tail = interim;
		}
	}
}

void DeleteLine(OptLine* g)
{
	if (g->head != NULL)
	{
		Line* interim = g->head;
		Line* n = NULL;
		int i = 1;
		for (i; interim != NULL; i++)
		{
			n = interim->next;
			interim = NULL;
			interim = n;
		}
		g->head = NULL;
		g->tail = NULL;
		g = NULL;
	}
	else printf("Пустая строка1\n");
}
void DeleteFirstInLine(OptLine* g)
{
	for (; ; )
	{
		if (g->head != g->tail)
		{
			Line* interim = g->head;
			g->head = g->head->next;
			g->head->early = NULL;
			free(interim);
			break;
		}

		if ((g->head == g->tail) && (g->head->value != -1))
		{
			g->head->value = -1;
			g->head->next = NULL;
			g->head->early = NULL;
			break;
		}

		if (isEmptyLine(g) == 1)
		{
			printf("Пустая строка2\n");
			break;
		}
	}
}

int ShowFirstInLine(OptLine* g)
{
	if (isEmptyLine(g) == 0)
	{
		int val = g->head->value;
		return val;
	}
	else printf("Пустая строка3\n");
}

void Show(OptLine* g)
{
	printf("\n Очередь\n");
	Line* interim = g->head;
	while (interim != NULL)
	{
		printf("%d ", interim->value);
		interim = interim->next;
	}
}

///////////////Граф////////////////

//Структура описания связи
typedef struct Connect
{
	int weight;
	int value;
	struct Connect *next;
	struct Connect *early;
}
Connect;

//Структура вершин
typedef struct Node
{
	int value;
	struct Node *next;
	struct Node *early;
	Connect* StrucStart; //Ссылка на начало списка связей
	Connect* StrucEnd;
}
Node;

//Структура, хранящая начало и конец цепочки вершин
typedef struct HTNode
{
	Node* head;
	Node* tail;
}
HTNode;

//Инициализация списка вершин
HTNode* CreateList()
{
	Node* interim = malloc(sizeof(Node));

	interim->value = -1;
	interim->next = NULL;
	interim->early = NULL;
	interim->StrucStart = NULL;
	interim->StrucEnd = NULL;

	HTNode* interim1 = malloc(sizeof(HTNode));

	interim1->head = interim;
	interim1->tail = interim;

	return interim1;
}

//Добавление вершины в список
void AddInList(int a, HTNode* g)
{
	if (g->head->value == -1)
	{
		g->head->value = a;
	}
	else
	{
		Node *roster = malloc(sizeof(Node));

		roster->value = a;
		roster->next = NULL;
		roster->StrucStart = NULL;
		roster->StrucEnd = NULL;
		roster->early = g->tail;
		roster->early->next = roster;
		g->tail = roster;
	}
}

//Добавление связи для вершины
void AddConnect(int a, int b, Node* interim)
{
	Connect* t = malloc(sizeof(Connect));

	t->value = a;
	t->weight = b;
	t->next = NULL;

	if (interim->StrucStart == NULL)
	{
		interim->StrucStart = t;
		interim->StrucEnd = t;
		t->early = NULL;
	}
	else
	{
		t->early = interim->StrucEnd;
		interim->StrucEnd = t;
		t->early->next = t;
	}
}

//Поиск вершины по номеру
Node *SearchNode(int a, HTNode* g)
{
	Node *interim = g->head;

	while (interim != NULL)
	{
		int interimValue = interim->value;

		if (interimValue == a)
		{
			return interim;
		}
		interim = interim->next;
	}
}

//Вывод всех вершин и их связей
void PrintAll(int amount, HTNode *inter)
{
	Node *interim = inter->head;
	Connect *t = NULL;
	int i, j;

	for (i = 1; i <= amount; i++)
	{
		t = interim->StrucStart;
		printf("\nВершина %d ", i);
		while (t != NULL)
		{
			printf("\nСоединён с: %d Вес: %d", t->value, t->weight);
			t = t->next;
		}
		interim = interim->next;
	}
	printf("\n");
}

//Ввод кол. связей для вершин
int InputA(int amount)
{
	int a;

	scanf("%d", &a);

	if ((a > amount - 1) || (a < 0))
	{
		printf("Количество сообщений не может быть больше числа вершин или меньше нуля. Попробуй снова.\n");
		InputA(amount);
	}
	else
	{
		return a;
	}
}

//Ввод вершины, с которой будет свзяь
int InputB(int a, int amount)
{
	int b;

	scanf("%d", &b);

	if ((b > amount) || (b < 1) || (b == a))
	{
		printf("Ошибка. Попробуй снова.\n");
		InputB(a, amount);
	}
	else
	{
		return b;
	}
}

//Ввод веса
int InputC()
{
	int c;

	scanf("%d", &c);

	if (c < 0)
	{
		printf("Вес не может быть меньше нуля. Попробуйте снова.\n");
		InputC();
	}
	else
	{
		return c;
	}
}

//Короткий путь
void ShortWay(int amount, HTNode *t, int plenty2[][amount])
{
	Node *interim = t-> head;
	OptLine* Ochered1 = InitOptLine();

	int i, k, j;
	int plenty[amount];
	for (i = 0; i < amount; i++)
	{
		plenty[i] = 0;
	}

	for (i = 0; i < amount; i++)
	{
		Node *interim2 = interim;
		for (; ; )
		{
			Connect *interimc = interim2->StrucStart;
			while (interimc != NULL)
			{
				if (plenty[interimc->value - 1] == 0)
				{
					AddInLine(interimc->value, Ochered1);
					plenty[interimc->value - 1] = 1;
				}
				interimc = interimc->next;
			}

			interimc = interim2->StrucStart;

			k = plenty2[i][interim2->value - 1];

			while (interimc != NULL)
			{
				if (plenty2[i][interimc->value - 1] > interimc->weight + k)
				{
					plenty2[i][interimc->value - 1] = interimc->weight + k;
				}
				interimc = interimc->next;
			}
			if (isEmptyLine(Ochered1) == 1) break;
			interim2 = SearchNode(ShowFirstInLine(Ochered1), t);
			DeleteFirstInLine(Ochered1);
		}

		for (j = 0; j < amount; j++)
		{
			plenty[j] = 0;
		}

		interim = interim->next;
	}
}

int FindMinString(int string, int amount, int plenty2[][amount], int Isk)
{
	int i, min = INT_MAX;

	for (i = 0; i < amount; i++)
	{
		if ((i == string) || (plenty2[string][i] == -1) || (i == Isk))
		{
			continue;
		}
		else
		{
			if (plenty2[string][i] < min) min = plenty2[string][i];
		}
	}
	return min;
}

int FindMinColumn(int column, int amount, int plenty2[][amount], int Isk)
{
	int i, min = INT_MAX;

	for (i = 0; i < amount; i++)
	{
		if ((i == column) || (plenty2[i][column] == -1) || (i == Isk))
		{
			continue;
		}
		else
		{
			if (plenty2[i][column] < min) min = plenty2[i][column];
		}
	}
	return min;
}

int circuit(int amount, int plenty2[][amount])
{
	int i, j;
	for (i = 0; i < amount; i++)
	{
		for (j = 0; j < amount; j++)
		{
			if (plenty2[i][j] == INT_MAX) return -1;
		}
	}
	int min;
	int amount2 = amount;
	int weight = 0;

	int plenty3[amount][amount];
	for (i = 0; i < amount; i++)
	{
		for (j = 0; j < amount; j++)
		{
			plenty3[i][j] = plenty2[i][j];
		}
	}

	while (amount2 != 0)
	{
		//отнимаем от строк
		for (i = 0; i < amount; i++)
		{
			min = FindMinString(i, amount, plenty2, -1);
			if (min != INT_MAX)
			{
				for (j = 0; j < amount; j++)
				{
					if ((i == j) || (plenty2[i][j] == -1)) continue;
					plenty2[i][j] -= min;
				}
			}
		}

		//отнимаем столбцы
		for (i = 0; i < amount; i++)
		{
			min = FindMinColumn(i, amount, plenty2, -1);
			if (min != INT_MAX)
			{
				for (j = 0; j < amount; j++)
				{
					if ((i == j) || (plenty2[i][j] == -1)) continue;
					plenty2[j][i] -= min;
				}
			}
		}

		//ищем макс оценку
		int asses = -1;
		int check1, check2, r;
		int j0, i0;
		for (i = 0; i < amount; i++)
		{
			for (j = 0; j < amount; j++)
			{
				if ((i == j) || (plenty2[i][j] == -1)) continue;
				if (plenty2[i][j] == 0)
				{
					check1 = FindMinColumn(j, amount, plenty2, i);
					check2 = FindMinString(i, amount, plenty2, j);

					if ((check1 == INT_MAX) || (check2 == INT_MAX))
					{
						r = INT_MAX;
					}
					else
					{
						r = check1 + check2;
					}

					if (asses <= r)
					{
						asses = r;
						i0 = i;
						j0 = j;
					}
				}
			}
		}

		//редукция
		for (i = 0; i < amount; i++)
		{
			plenty2[i0][i] = -1;
		}

		for (i = 0; i < amount; i++)
		{
			plenty2[i][j0] = -1;
		}

		//отсечка обратного пути
		if (amount != 2)
		{
			plenty2[j0][i0] = -1;
		}

		weight += plenty3[i0][j0];
		amount2 -= 1;
	}
	return weight;
}

int main()
{
	HTNode *roster1 = CreateList();
	int amount, i, j, a, b, c;

	printf("G: [Количество вершин][Количество связей вершины i][Номер вершины, с которой осуществляется связь][Вес связи]\n");
	scanf("%d", &amount);

	for (i = 1; i <= amount; i++)
	{
		AddInList(i, roster1);
		a = InputA(amount);
		for (j = 1; j <= a; j++)
		{
			b = InputB(i, amount);
			c = InputC();
			AddConnect(b, c, roster1->tail);
		}
	}

	PrintAll(amount, roster1);

	/////////////////////////////////////////
	int plenty2[amount][amount];
	for (i = 0; i < amount; i++)
	{
		for (j = 0; j < amount; j++)
		{
			if (i == j)
			{
				plenty2[i][j] = 0;
			}
			else
			{
				plenty2[i][j] = INT_MAX;
			}
		}
	}

	ShortWay(amount, roster1, plenty2);

	FILE *TXTFILE;
	TXTFILE = fopen("graph.txt", "w");
	if (TXTFILE == NULL) { printf("graph.txt не найден"); exit(0); }

	for (int i = 0; i < amount; i++)
	{
		fprintf(TXTFILE, "\n");
		for (int j = 0; j < amount; j++)
		{
			if (plenty2[i][j] == INT_MAX) { fprintf(TXTFILE, "- "); }
			else
				fprintf(TXTFILE, "%d ", plenty2[i][j]);
		}
	}
	fprintf(TXTFILE, "\n%d", circuit(amount, plenty2));
	fclose(TXTFILE);
	printf("\nУспешное сохранение в graph.txt\n");
	return 0;
}
