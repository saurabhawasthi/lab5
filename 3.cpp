# lab5
// Bubble sort for array
int main()
{

	int n, i, arr[50], j;bubbleshort b;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements sorted successfully..!!\n";
	int *temp=b.arrsort(arr,n);
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
		cout<<*(temp+i)<<" ";
	}
	
	return 0;
}
// bubble sort for linked list
int main()
{
    int arr[] = {5,4,3,2,1};
    int list_size, i;
 
    /* start with empty linked list */
     Node *start = NULL;
 
    /* Create linked list from the array arr[].
      Created linked list will be 1->11->2->56->12 */
    for (i = 0; i< 6; i++)
        insertAtTheBegin(&start, arr[i]);
 
    /* print list before sorting */
    printf("\n Linked list before sorting ");
    printList(start);
 
    /* sort the linked list */
    bubbleSort(start);
 
    /* print list after sorting */
    printf("\n Linked list after sorting ");
    printList(start);
 
    getchar();
    return 0;
}
 
 
 //quick sort for array and linked list
 int  main( )
{
/*	array a ;
	a.add ( 11 ) ;
	a.add ( 2 ) ;
	a.add ( 9 ) ;
	a.add ( 13 ) ;
	a.add ( 57 ) ;
	a.add ( 25 ) ;
	a.add ( 17 ) ;
	a.add ( 1 ) ;
	a.add ( 90 ) ;
	a.add ( 3 ) ;
	a.add ( 35 ) ;
	a.add ( 77 ) ;
	a.add ( 10 ) ;
	a.add ( 199 ) ;
	a.add ( 138 ) ;
	a.add ( 125 ) ;
	a.add ( 171 ) ;
	a.add ( 100) ;
	a.add ( 109) ;
	a.add ( 301 ) ;
	
	cout << "\nQuik sort.\n" ;
	cout << "\nArray before sorting:" << endl ;
	a.display( ) ;
	int c = a.getcount( ) ;
	a.quiksort ( 0, c - 1 ) ;
	cout << "\nArray after quick sorting:" << endl ;
	a.display( ) ;
*/	
cout<<endl<<endl;
	LLNode *head = NULL;
    LLNode *tail = NULL;

    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 16);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 1);
    //insertAtBeginning(&head, 23);
     insertAtBeginning(&head, 66);
    insertAtBeginning(&head, 76);
    insertAtBeginning(&head, 45);
    insertAtBeginning(&head, 80);
    insertAtBeginning(&head, 10);
     insertAtBeginning(&head, 86);
    insertAtBeginning(&head, 19);
    insertAtBeginning(&head, 14);
    insertAtBeginning(&head, 51);
    insertAtBeginning(&head, 156);
     insertAtBeginning(&head, 46);
    insertAtBeginning(&head, 86);
    insertAtBeginning(&head, 05);
    insertAtBeginning(&head, 150);
    insertAtBeginning(&head, 100);
     insertAtBeginning(&head,106);
    insertAtBeginning(&head, 168);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 109);
 
    cout << "Linked List before sorting \n";
    display(&head);
 
    quickSort(&head);
 
    cout << "Linked List after sorting \n";
    display(&head);
	return 0;
}
 ////////////////////////////////////////////////////////////////////////////////////////////
for bubble sort array (bsa)
bubble sort linked list (bsl)
quick sort array (qsa)
quick sort linked list (qsl)
Table for execution time in seconds
No of elements  		5 		10		15		20		25
	bsa                    7.027            14.01         18.81            28.75           34.78
	bsl                    0.544            1.451         1.705            1.583		1.393
	qsa 			1.868		0.892		0.842		0.831		0.829
	qsl			2.144		3.769		3.954		4.855		5.244
///////////////////////////////////////////////////////////////////////////////////////////////
