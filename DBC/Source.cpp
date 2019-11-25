#include <iostream>
#include <windows.h>
#include <sqltypes.h>
#include <sql.h>
#include <sqlext.h>
#define US_LEN 15  
#define PASS_LEN 50 
#define ROLE_LEN 2

using namespace std;

int main() {
#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000
	//define handles and variables
	SQLHANDLE	sqlConnHandle;
	SQLHANDLE	sqlStmtHandle;
	SQLHANDLE	sqlEnvHandle;
	SQLWCHAR	retconstring[SQL_RETURN_CODE_LEN];
	SQLCHAR     szNetwork_id[US_LEN], szPassword[PASS_LEN], szRole[ROLE_LEN];
	SQLINTEGER  cbNetwork_id, cbPassword, cbRole;
	SQLRETURN   retcode;


	
			//initializations
			sqlConnHandle = NULL;
			sqlStmtHandle = NULL;
			//allocations
			if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
				goto COMPLETED;
			if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
				goto COMPLETED;
			if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
				goto COMPLETED;
			//output
			cout << "Attempting connection to SQL Server...";
			cout << "\n";
			//connect to SQL Server  
			//I am using a trusted connection and port 14808
			//it does not matter if you are using default or named instance
			//just make sure you define the server name and the port
			//You have the option to use a username/password instead of a trusted     connection
			//but is more secure to use a trusted connection
			switch (SQLDriverConnectW(sqlConnHandle,
				NULL,
				(SQLWCHAR*)L"Driver={ODBC Driver 13 for SQL Server};Server=tcp:cs3321lmsdb.database.windows.net,1433;Database=LMS;Uid=Admins;Pwd=Supereasypass1;Encrypt=yes;TrustServerCertificate=no;Connection Timeout=30;",
				//(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost, 1433;DATABASE=master;Trusted=true;",
				SQL_NTS,
				retconstring,
				1024,
				NULL,
				SQL_DRIVER_NOPROMPT)) {
			case SQL_SUCCESS:
				cout << "Successfully connected to SQL Server";
				cout << "\n";
				break;
			case SQL_SUCCESS_WITH_INFO:
				cout << "Successfully connected to SQL Server";
				cout << "\n";
				break;
			case SQL_INVALID_HANDLE:
				cout << "Could not connect to SQL Server";
				cout << "\n";
				goto COMPLETED;
			case SQL_ERROR:
				cout << "Could not connect to SQL Server";
				cout << "\n";
				goto COMPLETED;
			default:
				break;
			}
			//if there is a problem connecting then exit application
			if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
				goto COMPLETED;
			//output
			cout << "\n";
			cout << "Executing T-SQL query...";
			cout << "\n";
			//if there is a problem executing the query then exit application
			//else display query result
			//___________________________
			if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLCHAR*)"SELECT Network_id, Password, Role FROM Login", SQL_NTS)) {
				cout << "Error querying SQL Server";
				cout << "\n";
				goto COMPLETED;
			}
			else {
				//declare output variable and pointer
				//SQLCHAR sqlVersion[SQL_RESULT_LEN];
				//SQLINTEGER ptrSqlVersion;
				cout << "\nQuery Result:\n\n";
				while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
					SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, szNetwork_id, US_LEN, &cbNetwork_id);
					SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, szPassword, PASS_LEN, &cbPassword);
					SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, szRole, ROLE_LEN, &cbRole);
					//display query result
					cout << szNetwork_id << szPassword << szRole << endl;



				}
			}
			//close connection and free resources	
		COMPLETED:
			SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
			SQLDisconnect(sqlConnHandle);
			SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
			SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
			//pause the console window - exit when key is pressed
			cout << "\nPress any key to exit...";
			getchar();
		}


