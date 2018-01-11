import unittest
import sys

sys.path.append("../src")

import  hello

class TestUM(unittest.TestCase):

    def setUp(self):
        pass

    def test_hello(self):
        h = hello.Hello()
        x = h.sayHello()
        self.assertEqual( "Hello World", x)

if __name__ == '__main__':
    unittest.main()
