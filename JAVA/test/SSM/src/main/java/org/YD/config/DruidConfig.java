package org.YD.config;

import com.alibaba.druid.pool.DruidDataSource;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.Bean;
import org.springframework.jdbc.datasource.DataSourceTransactionManager;
import org.springframework.transaction.PlatformTransactionManager;

import javax.sql.DataSource;

public class DruidConfig {
    @Value("${druid.driverClassName}")
    private String driverClassName;

    @Value("${druid.url}")
    private String url;

    @Value("${druid.username}")
    private String username;

    @Value("${druid.password}")
    private String password;

    @Value("${druid.initialSize}")
    private int initSize;

    @Value("${druid.maxActive}")
    private int maxActive;

    @Value("${druid.maxWait}")
    private int maxWait;

    /**
     * 创建数据库连接池对象
     * @return 数据库连接池对象
     */
    @Bean
    public DataSource dataSource() {
        DruidDataSource ds = new DruidDataSource();
        ds.setDriverClassName(driverClassName);
        ds.setUrl(url);
        ds.setUsername(username);
        ds.setPassword(password);
        ds.setInitialSize(initSize);
        ds.setMaxActive(maxActive);
        ds.setMaxWait(maxWait);

        return ds;
    }

    /**
     * 创建数据库连接池事务管理器
     * @return 数据库连接池事务管理器对象
     */
    @Bean
    public PlatformTransactionManager transactionManager(DataSource dataSource) {
        DataSourceTransactionManager transactionManager = new DataSourceTransactionManager();
        transactionManager.setDataSource(dataSource);

        return transactionManager;
    }
}
