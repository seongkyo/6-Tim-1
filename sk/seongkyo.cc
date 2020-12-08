
#include<cstdio>
#include<cstdlib>
#include<iostream>

typedef struct list_node {
	int value;
	struct list_node *next;
} NODE;

using namespace std;

void print_list(NODE *);
NODE* head_insert(NODE *, int);
NODE* head_delete(NODE *);
NODE* tail_insert(NODE *, int);
NODE* tail_delete(NODE *);

int main() {

	int i, num;
	int *data;
	NODE *first = NULL;

	/*Data Insert*/
	cout << "The number of insert_data: ";
	cin >> num;

	data = (int *)malloc(num * sizeof(int));

	cout << endl;
	for (i = 0; i < num; i++) {
		cout << "The value of insert_data " << i + 1 << " : ";
		cin >> data[i];
	}
	cout << endl;

	cout << "Expected head insert result: ";
	for (i = 0; i < num; i++) {
		cout << data[num-1-i] << " ";
	}
	cout << endl << endl;

	/*Head Insert*/
	cout << "Head insert starting..." << endl;
	for (i = 0; i < num; i++) {
		first = head_insert(first, data[i]);
		if (!first) {
			cout << "Head insert error" << endl;
			exit(1);
		}
	}
	cout << "Head insert performed: ";
	print_list(first);
	cout << endl << endl;

	/*Head Delete*/
	cout << "Head delete starting..." << endl;
	for (i = 0; i < num; i++) {
		first = head_delete(first);
		cout << "Deleting...: ";
		print_list(first);
		cout << endl;
	}
	if (first) {
		cout << "Head delete fail" << endl;
		exit(1);
	}
	cout << "Head delete success" << endl;

	cout << "Expected tail insert result: ";
	for (i = 0; i < num; i++) {
		cout << data[i] << " ";
	}
	cout << endl << endl;

	/*Tail Insert*/
	cout << "Tail insert starting..." << endl;
	for (i = 0; i < num; i++) {
		first = tail_insert(first, data[i]);
		if (!first) {
			cout << "Tail insert error" << endl;
			exit(1);
		}
	}
	cout << "Tail insert performed: ";
	print_list(first);
	cout << endl << endl;

	/*Tail Delete*/
	cout << "Tail delete starting..." << endl;
	for (i = 0; i < num; i++) {
		first = tail_delete(first);
		cout << "Deleting...: ";
		print_list(first);
		cout << endl;
	}
	if (first) {
		cout << "Tail delete fail" << endl;
		exit(1);
	}
	cout << "Tail delete success" << endl;
	return 0;
}

