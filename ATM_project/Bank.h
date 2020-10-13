#pragma once


/*****************************************************
*
*		TẠO CLASS BANK GỒM CÁC CHỨC NĂNG
*			@LOGIN
*			@REGIST
*			@MENU
*			@DEPOSIT
*			@WITHDRAW
*			@CHECK
*			@CREATE
*			@DISPLAY
*
*****************************************************/
class Bank
{
private:

	char _cName[20]; //tên tài khoản
	char _cAccountNumber[20]; //số tài khoản
	char _cAccountType[20]; //loại tài khoản
	int _iInitial, _iDeposit, _iWithdraw;

public:

	void login(); //đăng nhập nếu đã có tài khoản
	//void regist(); //đăng ký nếu chưa có tài khoản
	void menu(); //hiển thị menu
	//void deposit(); //nạp tiền vào
	//void check(); //kiểm tra tài khoản
	//void withdraw(); //rút tiền ra
	void create(); //chọn lựa nếu có tài khoản thì login nếu chưa thì register
	//void display();

};

