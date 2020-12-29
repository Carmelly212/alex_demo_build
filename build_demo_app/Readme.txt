This is a demo app for build-runner

To build from ready sources, package-by-package:
./build.sh -a demo_app

To build from ready sources, as a single tree:
./build.sh -a demo_app --tree

To clean the project:
./build.sh -a demo_app --make --target clean


To update sources:
./build.sh -a demo_app --seed-dir demo_app -B master

To update sources, then make as a single tree in parallel:
./build.sh -a demo_app --seed-dir demo_app -B master --make --tree -- -j 3


To clone fresh sources:
./build.sh -a demo_app --seed-url git@github.com:bladerunnerlabs/build_demo_app.git -B master

