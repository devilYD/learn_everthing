package org.YD.config;

import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Import;

@Configuration
@Import(SpringMvcSupport.class)
@ComponentScan("org.YD.controller")
public class SpringMVCConfig {
}