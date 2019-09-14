project('ECS Arkanoid', 'cpp', default_options: ['cpp_std=c++17'])

sfml_graphics = dependency('sfml-graphics')
sfml_window = dependency('sfml-window')
sfml_system = dependency('sfml-system')

src = [
	'src/main.cpp',
]

executable(
	'main',
	src,
	dependencies: [sfml_graphics, sfml_window, sfml_system]
)
