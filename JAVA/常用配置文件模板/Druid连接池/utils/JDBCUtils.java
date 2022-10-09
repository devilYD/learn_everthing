//package org.YD.utils;
//放在源码文件夹utils包下，按照具体情况修改包名

import com.alibaba.druid.pool.DruidDataSourceFactory;
import javax.sql.DataSource;
import java.io.FileInputStream;
import java.sql.*;
import java.util.Properties;

/*
 * Druid数据库连接池工具类
 * getConnection()  获取连接
 * close(PreparedStatement pstmt, Connection conn)  释放资源
 * close(ResultSet rs, PreparedStatement pstmt, Connection conn)    释放资源
 * getDs()  获取连接池对象
 */

 /*
  * Maven配置如下：
  	<dependency>
		<groupId>com.alibaba</groupId>
		<artifactId>druid</artifactId>
		<version>${druid-version}</version>
	</dependency>
  */

public class JDBCUtils {
    //定义成员变量ds
    private static DataSource ds;

    //初始化
    static {
        try {
            Properties prop = new Properties();
            prop.load(new FileInputStream("src/main/resources/druid.properties"));
            //配置文件链接

            ds = DruidDataSourceFactory.createDataSource(prop);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }

    //获取连接
    public static Connection getConnection() throws SQLException {
        return ds.getConnection();
    }

    //释放资源
    public static void close(PreparedStatement pstmt, Connection conn){
        if (pstmt != null){
            try {
                pstmt.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }

        if (conn !=null){
            try {
                conn.close();//归还连接
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }

        //close(null,stmt,conn);
    }

    //释放资源重载
    public static void close(ResultSet rs, PreparedStatement pstmt, Connection conn){
        if (rs != null){
            try {
                rs.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }

        if (pstmt != null){
            try {
                pstmt.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }

        if (conn !=null){
            try {
                conn.close();//归还连接
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }

    //获取连接池方法
    public  static DataSource getDs(){
        return ds;
    }

}

