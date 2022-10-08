package org.YD.JDBC;

import com.alibaba.druid.pool.DruidDataSourceFactory;
import org.junit.jupiter.api.Test;

import javax.sql.DataSource;
import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.Properties;

public class testdruid {
    @Test
    public void testDruid() throws Exception {
        Properties prop = new Properties();
        prop.load(new FileInputStream("src/main/resources/druid.properties"));

        DataSource dataSource = DruidDataSourceFactory.createDataSource(prop);

        Connection conn = dataSource.getConnection();

        PreparedStatement pstmt = conn.prepareStatement("SELECT * FROM room");

        ResultSet rst = pstmt.executeQuery();

        while (rst.next()) {
            System.out.println(rst.getInt(1));
            System.out.println(rst.getString(2));
            System.out.println(rst.getInt(3));
        }

        rst.close();
        pstmt.close();
        conn.close();

    }

    @Test
    public void where() throws Exception{
        System.out.println(System.getProperty("user.dir"));
    }
}
