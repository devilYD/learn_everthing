package org.YD.config;

import org.mybatis.spring.SqlSessionFactoryBean;
import org.mybatis.spring.mapper.MapperScannerConfigurer;
import org.springframework.context.annotation.Bean;

import javax.sql.DataSource;

public class MyBatisConfig {

    /**
     * 创建MyBatis的工厂类对象
     * @param dataSource
     * @return SqlSessionFactoryBean
     */
    @Bean
    public SqlSessionFactoryBean sqlSessionFactory(DataSource dataSource) {
        SqlSessionFactoryBean ssfb = new SqlSessionFactoryBean();
        ssfb.setDataSource(dataSource);
        ssfb.setTypeAliasesPackage("org.YD");

        return ssfb;
    }


    /**
     * 创建Mapper代理扫描器对象
     * 将mapper接口文件都自动注入到IoC容器中，
     * 实现类Bean的名称默认为接口类名的首字母小写
     * @return MapperScannerConfigurer
     */
    @Bean
    public MapperScannerConfigurer mapperScannerConfigurer() {
        MapperScannerConfigurer msc = new MapperScannerConfigurer();
        msc.setBasePackage("org.YD.dao");

        return msc;
    }
}
