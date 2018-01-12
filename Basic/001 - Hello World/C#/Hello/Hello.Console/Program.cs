using System;
using Hello.Service;

namespace Hello.Console
{
    class Program
    {
        static void Main(string[] args)
        {
            var hello = new HelloService();
            System.Console.WriteLine(hello.SayHello());
        }
    }
}
