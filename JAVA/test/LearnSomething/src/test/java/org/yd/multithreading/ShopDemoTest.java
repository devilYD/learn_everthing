package org.yd.multithreading;

import org.junit.jupiter.api.Test;

public class ShopDemoTest {
    @Test
    public void shoppingTest() {
        ShopDemo shopDemo = new ShopDemo(200);

        new Thread(shopDemo).start();
        new Thread(shopDemo).start();
        new Thread(shopDemo).start();
    }
}
