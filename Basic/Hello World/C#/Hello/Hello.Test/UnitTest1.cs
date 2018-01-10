using Microsoft.VisualStudio.TestTools.UnitTesting;
using Hello.Service;

namespace Hello.Test
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
            var hello  = new  HelloService();
            Assert.AreEqual("Hello World", hello.SayHello());
        }
    }
}
