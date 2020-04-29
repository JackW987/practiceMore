#include<stdio.h>
struct Book{
	char title[128];
	char author[40];
	struct Book *next;
};
void addBook(struct Book *library){
	library={"FuckintToday","lll",NULL}; 
}
int main(void){
	struct Book *library=NULL;
	addBook(library);
	return 0;
}
