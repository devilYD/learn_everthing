package org.yd.multithreading;

public class ShopDemo implements Runnable{

    private int item;

    public ShopDemo(int item) {
        this.item = item;
    }

    @Override
    public void run() {
        for ( int i = 0; i < 100; i++) {
            if ( this.item > 0) {
                System.out.println("商品被购买，还剩" + --item + "件");
            } else {
                System.out.println("商品已售尽，请下次再来");
            }
        }
    }
}
