#! /bin/sh -e
# tup - A file-based build system
#
# Copyright (C) 2009-2018  Mike Shal <marfey@gmail.com>
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

# Same as t2044, only the order of the rules in the second Tupfile are
# reversed.

. ./tup.sh
cat > Tupfile << HERE
: |> touch foo |> bar
HERE
tup touch Tupfile
parse
tup_dep_exist . 'touch foo' . bar

cat > Tupfile << HERE
: |> touch bar |> bar
: |> touch foo |> foo
HERE
tup touch Tupfile
parse
tup_dep_exist . 'touch foo' . foo
tup_dep_exist . 'touch bar' . bar
tup_dep_no_exist . 'touch foo' . bar

eotup
