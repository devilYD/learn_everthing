package org.YD.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

/*
在名为learn的数据库中创建一个名为room的表
 */

public class FirstLink {
    public static void main(String[] args) throws Exception{
        Class.forName("com.mysql.cj.jdbc.Driver");

        String url = "jdbc:mysql://127.0.0.1:3306/learn?useSSL=false";
        String user = "root";
        String pwd = "";

        Connection conn = DriverManager.getConnection(url,user,pwd);

        String sql = "CREATE TABLE IF NOT EXISTS room(id int PRIMARY KEY,name VARCHAR(20),age int)";

        Statement stmt = conn.createStatement();

        boolean count = stmt.execute(sql);

        stmt.close();
        conn.close();
    }
}
