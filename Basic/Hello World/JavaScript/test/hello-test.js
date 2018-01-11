var chai = require('chai');
var expect = chai.expect; // we are using the "expect" style of Chai
var Hello = require('../src/hello');


describe('HelloTest', function() {
  it('sayHello() should return Hello World', function() {
    var hello = new Hello([]);
    expect(hello.sayHello()).to.equal('Hello World');
  });
});
