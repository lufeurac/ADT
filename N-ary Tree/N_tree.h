//TAD nodo n-ario

#ifndef N_TREE_H_INCLUDED
#define N_TREE_H_INCLUDED

#include "N_node.h"

template< class T>
class N_tree
{
   protected:
		N_node<T>* root;

   public:
	   N_tree();												//
		N_tree(T& dat);									 	//
	   ~N_tree();												//

		bool is_empty();										//

	   N_node<T>* get_root();								//
	   void set_root(N_node<T>* new_root);				//
	   bool add_node(T& father, T& son);				//
		bool del_node(T& data);								//

		bool empty_root();									//
		void clear_node(T& item);
		bool find_item(T& item);							//
		unsigned int height(N_node<T>* node);
		unsigned int size(N_node<T>* node);

		void in_order(N_node<T>* node);
		void pre_order(N_node<T>* node);
		void pos_order(N_node<T>* node);
		void level_order(N_node<T>* node);
		void print();

};

#include "N_tree.hxx"

#endif
