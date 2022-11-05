package org.YD.config;

import org.springframework.context.annotation.*;


@Configuration
@ComponentScan({"org.YD.service"})
@PropertySource({"classpath:druid.properties"})
@Import({DruidConfig.class, MyBatisConfig.class})
public class SpringConfig {
}
