static int stack[100];
static int tos;             //topOfStack;

void push(int data)
{
	stack[tos] = data;
	++tos;
}

int pop(void)
{
	--tos;
	return stack[tos];
}

