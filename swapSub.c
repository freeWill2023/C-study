void swap(*pa, *pb)
{	
	int *temp;
	temp = &pa;
	pa = &pb;
	pb = &temp;
}
