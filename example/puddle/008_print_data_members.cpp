/**
 * @example puddle/008_print_data_members.cpp
 * @brief Shows how to print out the values of class data members
 *
 * Copyright Matus Chochlik.
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt
 */

#include <puddle/metaobject_ops.hpp>
#include <puddle/sequence_ops.hpp>
#include <puddle/reflection.hpp>
#include <puddle/int_const.hpp>
#include <puddle/string.hpp>
#include <iostream>
#include <map>

struct S {
	static const int a = -321;
	bool b;
	char c;
	double d;
	float e;
};

const int S::a;

namespace puddle {

template <typename T>
class print_data_members
{
private:
	struct _printer {
		std::ostream& out;
		T& v;

		template <typename MO>
		void _print_value(MO mo, mirror::true_/*is_static*/) const
		{
			out << (*value(get_pointer(mo)));
		}

		template <typename MO>
		void _print_value(MO mo, mirror::false_/*is_static*/) const
		{
			out << (v.*value(get_pointer(mo)));
		}

		template <typename MO>
		void operator()(MO mo) const
		{
			if(is_static(mo)) {
				out << "static ";
			}
			out << c_str(get_base_name(get_type(mo)));
			out << " ";
			out << c_str(get_base_name(mo));
			out << " = ";
			_print_value(mo, is_static(mo));
			out << std::endl;
		}
	};
public:
	std::ostream& operator()(std::ostream& out, S& v) const
	{
		auto MDMs = unpack(get_data_members(PUDDLED(T)));
		_printer print{out, v};

		for_each(MDMs, print);

		return out;
	}
};

} // namespace puddle

int main(void)
{
	puddle::print_data_members<S> pdm;

	S x = {false, 'X', 1234.56, 78.9f};
	S y = {true, 'Y', 11.1111, 2222.22f};

	pdm(std::cout, x) << std::endl;
	pdm(std::cout, y) << std::endl;

	return 0;
}