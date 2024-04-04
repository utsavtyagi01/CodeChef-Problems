int Floor(BinaryTreeNode<int> *node, int input)
{
		/*Write your code here. 
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/ 
	int result=-1;
	while(node){
		if(node->data==input){
			result=node->data;
			break;
		}
		else if(node->data > input){
			node=node->left;
		}
		else{
			result=node->data;
			node=node->right;
		}
	}
	return result;
}
