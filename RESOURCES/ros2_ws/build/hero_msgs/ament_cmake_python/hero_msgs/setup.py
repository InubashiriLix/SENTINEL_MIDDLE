from setuptools import find_packages
from setuptools import setup

setup(
    name='hero_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('hero_msgs', 'hero_msgs.*')),
)
