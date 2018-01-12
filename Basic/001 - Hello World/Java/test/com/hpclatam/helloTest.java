package com.hpclatam;

import static org.junit.Assert.*;

import org.junit.*;

public class helloTest {

    public helloTest(){

    } 

	@Test
	public void testSayHello() {
		Hello hello = new Hello();
		assertEquals("Hello World", hello.sayHello());
	}

}
