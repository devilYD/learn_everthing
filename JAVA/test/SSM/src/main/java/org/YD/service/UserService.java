package org.YD.service;

import org.YD.domain.User;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Transactional
public interface UserService {
    /**
     * 保存
     * @param user 要保存的对象
     * @return 执行结果
     */
    public boolean save(User user);

    /**
     * 删除
     * @param id 要删除的对象id
     * @return 执行结果
     */
    public boolean delete(Integer id);

    /**
     * 修改
     * @param user 要修改的对象
     * @return 执行结果
     */
    public boolean update(User user);


    /**
     * 通过id查找单个数据
     * @param id 对应的id
     * @return 对应的数据
     */
    public User getById(Integer id);

    /**
     * 查询全部
     * @return 表中全部数据
     */
    public List<User> getAll();
}
