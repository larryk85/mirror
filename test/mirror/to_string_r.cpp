/**
 *  .file test/mirror/to_string_r.cpp
 *  .brief Test case for compile-time to_string operation
 *
 *  .author Matus Chochlik
 *
 *  Copyright Matus Chochlik.
 *  Distributed under the Boost Software License, Version 1.0.
 *  See accompanying file LICENSE_1_0.txt or copy at
 *   http://www.boost.org/LICENSE_1_0.txt
 */
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MIRROR_to_string
#include <boost/test/unit_test.hpp>

#include <mirror/to_string.hpp>
#include <mirror/equal.hpp>
#include <mirror/value.hpp>
#include <reflexpr>

BOOST_AUTO_TEST_SUITE(mirror_to_string)

struct sl_abcde
{
	static constexpr const char value[6] = "abcde";
};

struct sl_foo
{
	static constexpr const char value[4] = "foo";
};

BOOST_AUTO_TEST_CASE(mirror_to_string_1)
{
	using namespace mirror;

	BOOST_CHECK_EQUAL((value<equal<
		to_string<sl_abcde>,
		string<'a','b','c','d','e'>
	>>), true);
	BOOST_CHECK_EQUAL((value<equal<
		to_string<sl_foo>,
		string<'f','o','o'>
	>>), true);

	using sl_int = std::meta::get_base_name<reflexpr(int)>;
	BOOST_CHECK_EQUAL((value<equal<
		to_string<sl_int>,
		string<'i','n','t'>
	>>), true);
}

BOOST_AUTO_TEST_SUITE_END()

