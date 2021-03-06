/**
 *  .file test/mire/ct/skip.cpp
 *  .brief Test case for compile-time skip meta-function
 *
 *  .author Matus Chochlik
 *
 *  Copyright 2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MIRE_CT_skip
#include <boost/test/unit_test.hpp>

#include <mire/ct/skip.hpp>
#include <mire/ct/compare.hpp>

BOOST_AUTO_TEST_SUITE(mire_ct_skip)

BOOST_AUTO_TEST_CASE(mire_ct_skip_range)
{
	using namespace mire::ct;

	typedef range<bool, char, short, int, long, float> r0;
	typedef range<char, short, int, long, float> r1;
	typedef range<short, int, long, float> r2;
	typedef range<int, long, float> r3;
	typedef range<long, float> r4;
	typedef range<float> r5;
	typedef range<> r6;

	typedef skip<r0, integral_constant<size_t, 1>>::type n1;
	typedef skip<r0, integral_constant<size_t, 2>>::type n2;
	typedef skip<r0, integral_constant<size_t, 3>>::type n3;
	typedef skip<r0, integral_constant<size_t, 4>>::type n4;
	typedef skip<r0, integral_constant<size_t, 5>>::type n5;
	typedef skip<r0, integral_constant<size_t, 6>>::type n6;

	BOOST_CHECK((equal<n1, r1>::value));
	BOOST_CHECK((equal<n2, r2>::value));
	BOOST_CHECK((equal<n3, r3>::value));
	BOOST_CHECK((equal<n4, r4>::value));
	BOOST_CHECK((equal<n5, r5>::value));
	BOOST_CHECK((equal<n6, r6>::value));
}

BOOST_AUTO_TEST_CASE(mire_ct_skip_string)
{
	using namespace mire::ct;

	typedef string<'s','t','r','i','n','g'> s0;
	typedef string<'t','r','i','n','g'> s1;
	typedef string<'r','i','n','g'> s2;
	typedef string<'i','n','g'> s3;
	typedef string<'n','g'> s4;
	typedef string<'g'> s5;
	typedef string<> s6;

	typedef skip<s0, integral_constant<size_t, 1>>::type n1;
	typedef skip<s0, integral_constant<size_t, 2>>::type n2;
	typedef skip<s0, integral_constant<size_t, 3>>::type n3;
	typedef skip<s0, integral_constant<size_t, 4>>::type n4;
	typedef skip<s0, integral_constant<size_t, 5>>::type n5;
	typedef skip<s0, integral_constant<size_t, 6>>::type n6;

	BOOST_CHECK((equal<n1, s1>::value));
	BOOST_CHECK((equal<n2, s2>::value));
	BOOST_CHECK((equal<n3, s3>::value));
	BOOST_CHECK((equal<n4, s4>::value));
	BOOST_CHECK((equal<n5, s5>::value));
	BOOST_CHECK((equal<n6, s6>::value));
}

BOOST_AUTO_TEST_SUITE_END()

