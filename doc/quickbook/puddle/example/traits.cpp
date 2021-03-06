/*
 * Copyright Matus Chochlik.
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt
 */

//[puddle_example_traits_1
#include <puddle/reflection.hpp>
#include <puddle/traits.hpp>
#include <puddle/int_const.hpp>
//]
//[puddle_example_traits_2
enum E { a, b, c };
class C { public: long l; short s; struct X { }; };
struct S { using T = int; T x, y, z; };
union U { float f; double d; };

static int i = 0;
//]
//[puddle_example_traits_3
int main(void)
{
	using namespace puddle;
//]
//[puddle_example_traits_4
	static_assert( __value(__reflects_global_scope(__PUDDLED())));
	static_assert( value(reflects_global_scope(PUDDLED(::))));
	static_assert( value(__reflects_namespace(PUDDLED())));
	static_assert( value(reflects_namespace(PUDDLED(std))));

	static_assert( value(__reflects_type(PUDDLED(int))));
	static_assert( value(reflects_type(PUDDLED(std::size_t))));
	static_assert( value(__reflects_alias(PUDDLED(std::size_t))));

	static_assert( value(reflects_type(PUDDLED(C::X))));
	static_assert( value(__reflects_record_member(PUDDLED(C::X))));

	static_assert( value(reflects_type(PUDDLED(S::T))));
	static_assert( value(reflects_alias(PUDDLED(S::T))));
	static_assert( value(reflects_record_member(PUDDLED(S::T))));

	static_assert( value(__reflects_tag_type(PUDDLED(E))));
	static_assert( value(reflects_tag_type(PUDDLED(C))));
	static_assert( value(reflects_tag_type(PUDDLED(S))));
	static_assert( value(reflects_tag_type(PUDDLED(U))));

	static_assert( value(__reflects_enum(PUDDLED(E))));
	static_assert( value(__reflects_record(PUDDLED(C))));
	static_assert( value(reflects_record(PUDDLED(S))));
	static_assert( value(reflects_record(PUDDLED(U))));

	static_assert( value(__reflects_class(PUDDLED(C))));
	static_assert( value(reflects_class(PUDDLED(S))));

	static_assert( value(__reflects_variable(PUDDLED(i))));

	static_assert( value(__reflects_enum_member(PUDDLED(a))));
	static_assert( value(__reflects_constant(PUDDLED(a))));

	static_assert( value(reflects_record_member(PUDDLED(C::l))));
	static_assert( value(reflects_record_member(PUDDLED(S::x))));
	static_assert( value(reflects_record_member(PUDDLED(U::f))));

	static_assert( value(__reflects_variable(PUDDLED(C::l))));
	static_assert( value(reflects_variable(PUDDLED(S::x))));
	static_assert( value(reflects_variable(PUDDLED(U::f))));

	static_assert( value(__reflects_specifier(PUDDLED(static))));
	static_assert( value(reflects_specifier(PUDDLED(private))));
//
//]
//[puddle_example_traits_end
	return i;
}
//]

