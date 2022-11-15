package org.YD.service.impl;

import org.YD.dao.UserDao;
import org.YD.domain.User;
import org.YD.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class UserServiceImpl implements UserService {

    @Autowired
    private UserDao userDao;

    @Override
    public boolean save(User user) {
        userDao.save(user);
        return true;
    }

    @Override
    public boolean delete(Integer id) {
        userDao.delete(id);
        return true;
    }

    @Override
    public boolean update(User user) {
        userDao.update(user);
        return true;
    }

    @Override
    public User getById(Integer id) {
        return userDao.getById(id);
    }

    @Override
    public List<User> getAll() {
        return userDao.getAll();
    }
}
