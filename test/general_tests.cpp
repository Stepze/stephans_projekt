#define BOOST_TEST_MODULE My Test

#include <boost/test/included/unit_test.hpp>

#include <stack.hpp>

struct nonempty_stack{
nonempty_stack(){
    int foo = 3, bar =5, so = 1337;
    stack.push(foo); stack.push(bar); stack.push(so); stack.push(42);
}

    stack stack;

};

BOOST_AUTO_TEST_CASE(empty_stack) {
    stack stack;
    BOOST_CHECK_EQUAL(stack.empty(),true);
    stack.push(1);
    BOOST_CHECK_EQUAL(stack.empty(),false);
    stack.pop();
    BOOST_CHECK_EQUAL(stack.empty(),true);
}


BOOST_AUTO_TEST_CASE(count) {
    nonempty_stack stack;
    BOOST_CHECK_EQUAL(stack.stack.count(),4);
}

BOOST_AUTO_TEST_CASE(push) {
    nonempty_stack stack;
    BOOST_CHECK_EQUAL(stack.stack.pop(),42);
    BOOST_CHECK_EQUAL(stack.stack.pop(),1337);
    BOOST_CHECK_EQUAL(stack.stack.pop(),5);
    BOOST_CHECK_EQUAL(stack.stack.pop(),3);
}

BOOST_AUTO_TEST_CASE(empty_pop) {
    stack stack;
    BOOST_CHECK_EXCEPTION(stack.pop(),std::runtime_error,[](const std::exception &e){return true;});
}