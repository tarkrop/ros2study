from setuptools import setup

package_name = "second_assignment_pkg"

setup(
    name=package_name,
    version="0.0.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="takrop",
    maintainer_email="takrop@todo.todo",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "enter_node = second_assignment_pkg.enter_node:main",
            "sum_node = second_assignment_pkg.sum_node:main",
            "multiply_node = second_assignment_pkg.multiply_node:main",
        ],
    },
)
