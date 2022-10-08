package org.YD.Pojo;

import org.YD.utils.JDBCUtils;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class roomMate {
    private int id;
    private String name;
    private int age;

    public roomMate(int id, String name, int age) {
        this.id = id;
        this.name = name;
        this.age = age;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public boolean Insert() throws SQLException {
        Connection conn = JDBCUtils.getConnection();
        PreparedStatement pstmt0 = conn.prepareStatement("SELECT id FROM room WHERE id = ?");
        pstmt0.setInt(1,this.getId());
        ResultSet result0 = pstmt0.executeQuery();
        if (result0.next()) {
            System.out.println("失败，id重复。");
            result0.close();
            pstmt0.close();
            conn.close();
            return false;
        }else {
            PreparedStatement pstmt1 = conn.prepareStatement("INSERT INTO room VALUES(?,?,?)");
            pstmt1.setInt(1,this.getId());
            pstmt1.setString(2,this.getName());
            pstmt1.setInt(3,this.getAge());
            boolean bl = pstmt1.execute();
            result0.close();
            pstmt0.close();
            pstmt1.close();
            conn.close();
            return bl;
        }
    }

    public int Drop() throws Exception {
        Connection conn0 = JDBCUtils.getConnection();
        PreparedStatement pstmt = conn0.prepareStatement("DROP TABLE ");
    }
}
