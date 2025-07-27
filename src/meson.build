configure_file(input: 'config.hpp.in', output: 'config.hpp', configuration: conf_data)

executable(
  'program',
  'main.cpp',
  dependencies: [
  ],
  include_directories: include_directories('.'),
  install : true,
)

configure_file(copy: true, 
  install: true, 
  input: 'message.txt', 
  output: 'message.txt', 
  install_dir: program_data_dir)