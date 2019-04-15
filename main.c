/* test file */

/* missing semicolon at end of struct or union */
typedef struct {
	int a;
	int b
} my_struct;

int main(){
	/* unused variable */
	int i;
	return 0;
}