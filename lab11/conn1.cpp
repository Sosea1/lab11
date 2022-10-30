#include "conn1.h"
#include "Form1.h"
#include "mysql.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);






   
    
        cout << endl;
        cout << "Running 'SELECT 'Hello World!' »
            AS _message'..." << endl;

            try {
            sql::Driver* driver;
            sql::Connection* con;
            sql::Statement* stmt;
            sql::ResultSet* res;

            /* Create a connection */
            driver = get_driver_instance();
            con = driver->connect("tcp://127.0.0.1:3306", "root", "root");
            /* Connect to the MySQL test database */
            con->setSchema("test");

            stmt = con->createStatement();
            res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
            while (res->next()) {
                cout << "\t... MySQL replies: ";
                /* Access column data by alias or column name */
                cout << res->getString("_message") << endl;
                cout << "\t... MySQL says it again: ";
                /* Access column data by numeric offset, 1 is the first column */
                cout << res->getString(1) << endl;
            }
            delete res;
            delete stmt;
            delete con;

        }
        catch (sql::SQLException& e) {
            cout << "# ERR: SQLException in " << __FILE__;
            cout << "(" << __FUNCTION__ << ") on line " »
                << __LINE__ << endl;
            cout << "# ERR: " << e.what();
            cout << " (MySQL error code: " << e.getErrorCode();
            cout << ", SQLState: " << e.getSQLState() << " )" << endl;
        }

        cout << endl;

        return EXIT_SUCCESS
    
	


}
