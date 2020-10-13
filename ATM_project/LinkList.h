#pragma once

template <class Datatype>

class Node {
private:
	Datatype _data;	// Giá trị của con trỏ Node
	Node* _pNext;		// Con trỏ đến Node kế tiếp

public:
	Node(Datatype _data);	// Khởi tạo node mới có giá trị là Data
	void display();	// Hiển thị giá trị của Node
};
