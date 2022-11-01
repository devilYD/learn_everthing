package org.YD.controller;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;

@Controller
public class UserController {

    @RequestMapping("/test00")
    @ResponseBody
    public String test00() {
        return "{'name':'王创'}";
    }
}
