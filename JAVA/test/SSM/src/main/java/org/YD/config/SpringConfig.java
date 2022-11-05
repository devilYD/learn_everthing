package org.YD.config;

import org.springframework.context.annotation.*;
import org.springframework.transaction.annotation.EnableTransactionManagement;


@Configuration
@ComponentScan({"org.YD.service"})
@PropertySource({"classpath:druid.properties"})
@EnableTransactionManagement
@Import({DruidConfig.class, MyBatisConfig.class})
public class SpringConfig {
}
