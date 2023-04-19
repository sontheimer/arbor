#  taken from:
# https://people.duke.edu/~ccc14/sta-663-2018/notebooks/S13C_pybind11.html
import os, sys

from distutils.core import setup, Extension
from distutils import sysconfig

cpp_args = ['-std=c++11']

ext_modules = [
    Extension(
    'wrap1',
        ['remote.hpp', 'remote_wrapper.cpp'],
        include_dirs=['pybind11/include'],
    language='c++',
    extra_compile_args = cpp_args,
    ),
]

setup(
    name='wrap1',
    version='0.0.1',
    author='Cliburn Chan',
    author_email='cliburn.chan@duke.edu',
    description='Example',
    ext_modules=ext_modules,
)