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

subdir('include')
subdir('tests')
