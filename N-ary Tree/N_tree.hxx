//TAD nodo n-ario

#ifndef N_TREE_HXX_INCLUDED
#define N_TREE_HXX_INCLUDED

template< class T>
N_tree<T>::N_tree()
{
	root = NULL;
};
template< class T>
N_tree<T>::N_tree(T& dat)
{
	root = new N_node<T>(dat);
};
template< class T>
N_tree<T>::~N_tree()
{

};

template< class T>
bool N_tree<T>::is_empty()
{
	if(root == NULL)
	{
		return true;
	}
	return false;
};

template< class T>
N_node<T>* N_tree<T>::get_root()
{
	return root;
};
template< class T>
void N_tree<T>::set_root(N_node<T>* new_root)
{
	root = new_root;
};
template< class T>
bool N_tree<T>::add_node(T& father, T& son)
{
	if(root == NULL)
	{
		return false;
	}
	else
	{
		if(root->find_item(father))
		{
			return root->add_son(father,son);
		}
	}
	return false;
};
template< class T>
bool N_tree<T>::del_node(T& data)
{
	if(root == NULL)
	{
		return false;
	}
	else
	{
		if(root->find_item(data))
		{
			return root->del_son(data);
		}
	}
	return false;
};

template< class T>
bool N_tree<T>::empty_root()
{
	if (root == NULL)
	{
		return true;
	}
	else
	{
		if(root->is_leaf())
		{
			return true;
		}
		return false;
	}
};

template< class T>
void N_tree<T>::clear_node(T& data)
{
	if(root == NULL)
	{
		return false;
	}
	else
	{
		if(root->find_item(data))
		{
			return root->clear_list(data);
		}
	}
	return false;
};
template< class T>
bool N_tree<T>::find_item(T& item)
{
	if(!empty_root())
	{
		return root->find_item(item);
	}
};
template< class T>
unsigned int N_tree<T>::height(N_node<T>* node)
{

};
template< class T>
unsigned int N_tree<T>::size(N_node<T>* node)
{

};

template< class T>
void N_tree<T>::in_order(N_node<T>* node)
{

};
template< class T>
void N_tree<T>::pre_order(N_node<T>* start)
{
	std::cout << "El arbor ordenado en Pre-Orden es:" << std::endl;
	std::cout << start->get_data() << " ";
	start->pre_order();
	std::cout << std::endl;
};
template< class T>
void N_tree<T>::pos_order(N_node<T>* start)
{
	std::cout << "El arbor ordenado en Pos-Orden es:" << std::endl;
	start->pos_order();
	std::cout << start->get_data() << " ";
	std::cout << std::endl;
};
template< class T>
void N_tree<T>::level_order(N_node<T>* node)
{

};

template< class T>
void N_tree<T>::print()
{
	root->print();
};

#endif  //TAD nodo n-ariotop
