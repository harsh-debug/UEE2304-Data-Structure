/*	=================== _traverse =================== 	Inorder tree traversal. To process a node, we use 	the function passed when traversal was called.	   Pre   Tree has been created (may be null) 	   Post  All nodes processed */void _traverse (NODE* root,                 void (*process) (void* dataPtr)) {//	Statements if  (root)    {     _traverse (root->left, process);     process   (root->dataPtr);     _traverse (root->right, process);    } // if return;}  // _traverse