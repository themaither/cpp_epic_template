catch2 = subproject(
  'catch2', default_options: shut_up_options + ['install=false']
).get_variable('catch2_with_main_dep').as_system()

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