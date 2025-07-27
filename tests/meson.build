catch2 = subproject(
  'catch2', default_options: ['install=false']
).get_variable('catch2_with_main_dep')

test(
  'basic',
  executable(
    'basic',
    'basic.cpp',
    dependencies: [
      catch2
    ],
    include_directories: ['../src/'],
    install: false,
  ),
)