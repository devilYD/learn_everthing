package org.YD.config;

import org.springframework.context.annotation.*;

@Configuration
@ComponentScan("org.YD")
@EnableAspectJAutoProxy
@PropertySource("classpath:druid.properties")
@Import({DruidConfig.class,MyBatisConfig.class})
public class SpringConfig {
}
