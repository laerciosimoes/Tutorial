<?php
declare(strict_types=1);

use PHPUnit\Framework\TestCase;


final class Hello
{
  private function __construct()
    {
    }

    public function sayHello(): string
    {
        return 'Hello World';
    }


}

final class HelloTest extends TestCase
{

    public function testDisplayHelloWorld()
    {
        $this->assertEquals(
            'Hello World',
            Hello::sayHello()
        );
    }
}
?>