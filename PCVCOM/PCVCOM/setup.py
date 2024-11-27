from setuptools import find_packages, setup

package_name = "PCVCOM"

setup(
    name=package_name,
    version="0.0.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="root",
    maintainer_email="root@todo.todo",
    description="TODO: Package description",
    license="Apache-2.0",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "eg = PCVCOM.example:main",
            "sub_string = PCVCOM.recvComString:main",
            "sub_float = PCVCOM.recvComFloat:main",
            "sub_float_val = PCVCOM.recvComFloat_val:main",
            "validation = PCVCOM.validation",
            # TODO: "pub = PCVCOM.pubCom:main",
        ],
    },
)
