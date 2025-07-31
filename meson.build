project(
  'cpp_epic_template',
  'cpp',
  version: '0.1',
  meson_version: '>= 1.3.0',
  default_options: [
    'warning_level=3',
    'cpp_std=c++26',
    'optimization=3',
    'werror=true',
    'b_sanitize=address'
  ],
)

shut_up_options = [
  'warnging_level=0',
  'werror=false',
  'b_sanitize=none'
]

conf_data = configuration_data({
  'name': meson.project_name(),
  'version': meson.project_version(),
  'prefix': get_option('prefix'),
  'libdir': get_option('libdir'),
  'libexecdir': get_option('libexecdir'),
  'datadir': get_option('datadir'),
  'bindir': get_option('bindir'),
  'sbindir': get_option('sbindir'),
})

program_data_dir = get_option('datadir') / meson.project_name()

configure_file(copy: true, install: false, input: 'gen', output: 'gen')

subdir('src')
subdir('tests')