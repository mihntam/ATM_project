#include "LinkList.h"
#include <iostream>

using namespace std;

/***********************************************************
* @Depcription Khởi tạo một Node mới có giá trị là data
***********************************************************/
template <class Datatype>
Node <Datatype>::Node(Datatype _data)
{
	_data = data;
	_pNext = NULL;
}

/***********************************************************
* @Depcription Hiển thị giá trị Node
***********************************************************/
template <class Datatype>
void Node <Datatype>::display()
{
	cout << _data << end;
}
/// phá chơi nè!!!