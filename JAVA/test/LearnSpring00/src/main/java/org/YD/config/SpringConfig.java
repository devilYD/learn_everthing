package org.YD.config;

import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Import;
import org.springframework.context.annotation.PropertySource;

@Configuration
@ComponentScan("org.YD")
@PropertySource("classpath:druid.properties")
@Import({DruidConfig.class,MyBatisConfig.class})
public class SpringConfig {
}
