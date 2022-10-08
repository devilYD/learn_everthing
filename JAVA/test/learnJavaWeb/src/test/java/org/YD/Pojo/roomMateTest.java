package org.YD.Pojo;

import com.alibaba.druid.pool.DruidDataSourceFactory;
import org.junit.jupiter.api.Test;

import javax.sql.DataSource;
import java.io.FileInputStream;
import java.util.Properties;

class roomMateTest {
    @Test
    public void InsertDemo() throws Exception {
        Properties prop = new Properties();
        prop.load(new FileInputStream("src/main/resources/druid.properties"));
        DataSource dataSource = DruidDataSourceFactory.createDataSource(prop);

        roomMate rm = new roomMate(0,"王创",21);
        rm.Insert(dataSource.getConnection());

    }
}