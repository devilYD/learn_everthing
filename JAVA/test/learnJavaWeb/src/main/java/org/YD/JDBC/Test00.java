package org.YD.JDBC;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import org.junit.jupiter.api.Test;

public class Test00 {

    @Test
    public void testDML() throws Exception{

        String url = "jdbc:mysql://127.0.0.1:3306/learn?useSSL=false";
        String user = "root";
        String pwd = "";

        Connection conn = DriverManager.getConnection(url,user,pwd);

        Statement stat = conn.createStatement();

        String sql = "INSERT INTO room(id,name,age) VALUE(0,'王创',21)";

        int a = stat.executeUpdate(sql);

        stat.close();
        conn.close();
    }

}
