/*
 * Copyright Matus Chochlik.
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt
 */
//[mirror_op_is_private
template <__std_meta_RecordMember M>
using is_private<__metaobject<M>>
 = __bool_<__std_meta_is_private_v<M>>;

template <__std_meta_Inheritance I>
using is_private<__metaobject<I>>
 = __bool_<__std_meta_is_private_v<I>>;

template <__std_meta_Object O>
using is_private<__metaobject<O>> = __none;

using is_private<__none> = none;
//]

