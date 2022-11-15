package org.YD.controller;

import org.YD.domain.User;
import org.YD.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/users")
public class UserController {

    @Autowired
    private UserService userService;

    @PostMapping
    public Result save(@RequestBody User user) {
        boolean flag = userService.save(user);
        return new Result(flag ? Code.SAVE_OK : Code.SAVE_ERR,null);
    }

    @DeleteMapping("/{id}")
    public Result delete(@PathVariable Integer id) {
        boolean flag = userService.delete(id);
        return new Result(flag ? Code.DELETE_OK : Code.DELETE_ERR,null);
    }

    @PutMapping
    public Result update(@RequestBody User user) {
        boolean flag = userService.update(user);
        return new Result(flag ? Code.UPDATE_OK : Code.UPDATE_ERR,null);
    }

    @GetMapping("/{id}")
    public Result getById(@PathVariable Integer id) {
        User data = userService.getById(id);
        Integer code = data != null ? Code.GET_OK : Code.GET_ERR;
        String massage = data != null ? "" : "查询失败，请重试！";
        return new Result(code,data,massage);
    }

    @GetMapping
    public Result getAll() {
        List<User> data = userService.getAll();
        Integer code = data != null ? Code.GET_OK : Code.GET_ERR;
        String massage = data != null ? "" : "查询失败，请重试！";
        return new Result(code,data,massage);
    }
}
