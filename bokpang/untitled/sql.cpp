#include "sql.h"

sql::sql()
{
    db = QSqlDatabase::addDatabase("QMYSQL");

     db.setHostName("10.10.20.56");      // IP 또는 DNS Host name
     db.setPort(3306);
     db.setDatabaseName("coupang"); // DB명
     db.setUserName("aaa");     // 계정 명
     db.setPassword("1234");     // 계정 Password

     if(!db.open())
     {
         std::cout << "연결안됨" << std::endl;
     }
     else
         std::cout << "연결됨" << std::endl;
}
