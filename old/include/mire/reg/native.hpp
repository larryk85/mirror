/**
 *  @file mire/reg/native.cpp
 *  @brief Pre-registering of native C++ types.
 *
 *  @note This is an automatically generated header file, do not modify manually.
 *
 *  Copyright 2012-2015 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
#ifndef MIRE_REG_NATIVE_1311042119_HPP
#define MIRE_REG_NATIVE_1311042119_HPP

#include <mire/reg/global_scope.hpp>

namespace mire {
namespace reg {

namespace _void {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef void original_type;

		typedef mire::ct::string<'v','o','i','d'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X void_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X void_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : void_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _void
template <>
struct _type_reg<void>
{
	typedef _void::_ type;
};


namespace _bool {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef bool original_type;

		typedef mire::ct::string<'b','o','o','l'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X bool_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X bool_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : bool_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _bool
template <>
struct _type_reg<bool>
{
	typedef _bool::_ type;
};


namespace _char {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef char original_type;

		typedef mire::ct::string<'c','h','a','r'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X char_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X char_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : char_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _char
template <>
struct _type_reg<char>
{
	typedef _char::_ type;
};


namespace _signed_char {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef signed char original_type;

		typedef mire::ct::string<'s','i','g','n','e','d',' ','c','h','a','r'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X signed_char_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X signed_char_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : signed_char_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _signed_char
template <>
struct _type_reg<signed char>
{
	typedef _signed_char::_ type;
};


namespace _unsigned_char {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef unsigned char original_type;

		typedef mire::ct::string<'u','n','s','i','g','n','e','d',' ','c','h','a','r'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X unsigned_char_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X unsigned_char_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : unsigned_char_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _unsigned_char
template <>
struct _type_reg<unsigned char>
{
	typedef _unsigned_char::_ type;
};


namespace _wchar_t {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef wchar_t original_type;

		typedef mire::ct::string<'w','c','h','a','r','_','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X wchar_t_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X wchar_t_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : wchar_t_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _wchar_t
template <>
struct _type_reg<wchar_t>
{
	typedef _wchar_t::_ type;
};


namespace _char16_t {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef char16_t original_type;

		typedef mire::ct::string<'c','h','a','r','1','6','_','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X char16_t_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X char16_t_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : char16_t_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _char16_t
template <>
struct _type_reg<char16_t>
{
	typedef _char16_t::_ type;
};


namespace _char32_t {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef char32_t original_type;

		typedef mire::ct::string<'c','h','a','r','3','2','_','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X char32_t_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X char32_t_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : char32_t_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _char32_t
template <>
struct _type_reg<char32_t>
{
	typedef _char32_t::_ type;
};


namespace _short_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef short int original_type;

		typedef mire::ct::string<'s','h','o','r','t',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X short_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X short_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : short_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _short_int
template <>
struct _type_reg<short int>
{
	typedef _short_int::_ type;
};


namespace _unsigned_short_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef unsigned short int original_type;

		typedef mire::ct::string<'u','n','s','i','g','n','e','d',' ','s','h','o','r','t',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X unsigned_short_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X unsigned_short_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : unsigned_short_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _unsigned_short_int
template <>
struct _type_reg<unsigned short int>
{
	typedef _unsigned_short_int::_ type;
};


namespace _int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef int original_type;

		typedef mire::ct::string<'i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _int
template <>
struct _type_reg<int>
{
	typedef _int::_ type;
};


namespace _unsigned_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef unsigned int original_type;

		typedef mire::ct::string<'u','n','s','i','g','n','e','d',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X unsigned_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X unsigned_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : unsigned_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _unsigned_int
template <>
struct _type_reg<unsigned int>
{
	typedef _unsigned_int::_ type;
};


namespace _long_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef long int original_type;

		typedef mire::ct::string<'l','o','n','g',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X long_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X long_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : long_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _long_int
template <>
struct _type_reg<long int>
{
	typedef _long_int::_ type;
};


namespace _unsigned_long_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef unsigned long int original_type;

		typedef mire::ct::string<'u','n','s','i','g','n','e','d',' ','l','o','n','g',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X unsigned_long_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X unsigned_long_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : unsigned_long_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _unsigned_long_int
template <>
struct _type_reg<unsigned long int>
{
	typedef _unsigned_long_int::_ type;
};


namespace _long_long_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef long long int original_type;

		typedef mire::ct::string<'l','o','n','g',' ','l','o','n','g',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X long_long_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X long_long_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : long_long_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _long_long_int
template <>
struct _type_reg<long long int>
{
	typedef _long_long_int::_ type;
};


namespace _unsigned_long_long_int {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef unsigned long long int original_type;

		typedef mire::ct::string<'u','n','s','i','g','n','e','d',' ','l','o','n','g',' ','l','o','n','g',' ','i','n','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X unsigned_long_long_int_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X unsigned_long_long_int_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : unsigned_long_long_int_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _unsigned_long_long_int
template <>
struct _type_reg<unsigned long long int>
{
	typedef _unsigned_long_long_int::_ type;
};


namespace _float {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef float original_type;

		typedef mire::ct::string<'f','l','o','a','t'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X float_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X float_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : float_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _float
template <>
struct _type_reg<float>
{
	typedef _float::_ type;
};


namespace _double {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef double original_type;

		typedef mire::ct::string<'d','o','u','b','l','e'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X double_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X double_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : double_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _double
template <>
struct _type_reg<double>
{
	typedef _double::_ type;
};


namespace _long_double {
	struct _ : mire::reg::defaults
	{
		typedef mirror::type_tag category;
		typedef mire::reg::_ scope;
		typedef long double original_type;

		typedef mire::ct::string<'l','o','n','g',' ','d','o','u','b','l','e'>
			base_name;

		template <typename X>
		struct _named_typedef
		{
			typedef X long_double_;
		};

		template <typename X>
		struct _named_mem_var
		{
			X long_double_;

			template <typename ... P>
			_named_mem_var(P&& ... p)
			 : long_double_(std::forward<P>(p)...)
			{ }
		};
	};
} // namespace _long_double
template <>
struct _type_reg<long double>
{
	typedef _long_double::_ type;
};

} // namespace reg
} // namespace mire
#endif // include guard
