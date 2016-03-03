//ADT N-ary tree

#ifndef N_NODE_HXX_INCLUDED
#define N_NODE_HXX_INCLUDED

template< class T>
N_node<T>::N_node()
{
	data == NULL;
};
template< class T>
N_node<T>::~N_node()
{

};
template< class T>
N_node<T>::N_node(T& dat)
{
	data = dat;
}

template< class T>
T& N_node<T>::get_data()
{
	return data;
};
template< class T>
void N_node<T>::set_data(T& new_data)
{
	data = new_data;
};


template< class T>
bool N_node<T>::add_son(T&father,T& son)
{
	if(data == father)
	{
		desc.push_front(new N_node<T>(son));
		return true;
	}
	else
	{
		bool res = false;
		if(is_leaf())
		{
			return res;
		}
		else
		{
			typename std::list< N_node<T>* >::iterator it = desc.begin();
			for(it;it != desc.end();it++)
			{
				res = (*it)->add_son(father,son);
				if(res)
				{
					return res;
				}
			}
		}
		return res;
	}
};
template< class T>
void N_node<T>::clear_list()
{
	while(!desc.empty())
	{
		if(desc.front()->is_leaf())
		{
			delete desc.front();
			desc.pop_front();
		}
		else
		{
			desc.front()->clear_list();
			delete desc.front();
			desc.pop_front();
		}
	}
};
template< class T>
bool N_node<T>::del_son(T& item)
{
	if(data == item)
	{
		return true;
	}
	else
	{
		bool res = false;
	  	typename std::list< N_node<T>* >::iterator it = desc.begin();
    	for(it;it != desc.end();it++)
		{
			if((*it)->get_data() == item)
			{
				desc.remove(it);
				res = true;
			}
		}
		return res;
   }
};
template< class T>
bool N_node<T>::find_item(T& item)
{
	if(data == item)
	{
		return true;
	}
	else
	{
		bool res = false;
	  	typename std::list< N_node<T>* >::iterator it = desc.begin();
    	for(it;it != desc.end();it++)
		{
			res = (*it)->find_item(item);
			if(res)
			{
				return res;
			}
		}
		return res;
   }
};

template< class T>
bool N_node<T>::is_leaf()
{
	if(desc.empty())
	{
		return true;
	}
	return false;
};                  //

template< class T>
void N_node<T>::pre_order()
{
	typename std::list< N_node<T>* >::reverse_iterator it = desc.rbegin();
	for(it;it != desc.rend();it++)
	{
		std::cout << (*it)->get_data() << " ";
		if(!(*it)->is_leaf())
		{
			(*it)->print();
		}
	}
};

template< class T>
void N_node<T>::pos_order()
{
	typename std::list< N_node<T>* >::reverse_iterator it = desc.rbegin();
	for(it;it != desc.rend();it++)
	{
		//std::cout << (*it)->is_leaf() << std::endl;
		if(!(*it)->is_leaf())
		{
			(*it)->print();
		}
		std::cout << (*it)->get_data() << " ";
	}
};

template< class T>
void N_node<T>::print()
{
	typename std::list< N_node<T>* >::reverse_iterator it = desc.rbegin();
	for(it;it != desc.rend();it++)
	{
		//std::cout << (*it)->is_leaf() << std::endl;
		if(!(*it)->is_leaf())
		{
			(*it)->print();
		}
		std::cout << (*it)->get_data() << " ";
	}
};

#endif
