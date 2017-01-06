#define BOOST_TEST_MODULE My Test

#include <boost/test/included/unit_test.hpp>

#include <stack.hpp>


BOOST_AUTO_TEST_CASE(auto_true) {
    BOOST_CHECK_EQUAL(1,1);
}
