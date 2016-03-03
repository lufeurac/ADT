//ADT N-ary tree

#ifndef N_NODE_H_INCLUDED
#define N_NODE_H_INCLUDED

#include <list>

template< class T>
class N_node
{
   protected:
		T data;
		std::list< N_node<T>* > desc;

   public:
		N_node();
	   ~N_node();
	   N_node(T& dat);

	   T& get_data();
	   void set_data(T& new_data);
	   bool add_son(T& father,T& son);
	   void clear_list();
	   bool del_son(T& item);
	   bool find_item(T& item);
	   bool is_leaf();
		void in_order();
		void pre_order();
		void pos_order();
		void print();

};

#include "N_node.hxx"

#endif
