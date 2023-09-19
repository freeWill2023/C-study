
int queue[100];
int front;
int rear;

void push(int data)
{
	queue[rear] = data;
	++rear;
}

int pop(void)
{
	int result = queue[front];
	++front;
	
	return result;
}
