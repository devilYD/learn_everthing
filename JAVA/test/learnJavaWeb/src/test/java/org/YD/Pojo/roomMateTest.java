package org.YD.Pojo;

import org.junit.jupiter.api.Test;

class roomMateTest {
    @Test
    public void InsertDemo() throws Exception {
        roomMate rm = new roomMate(0,"王创",21);
        rm.Insert();
    }

    @Test
    public void DeleteDemo() throws Exception {
        roomMate rm = new roomMate(0,"王创",21);
        int howMuch = rm.Delete();
        System.out.println("您杀死了" + howMuch + "个室友，恭喜您！");
    }
}