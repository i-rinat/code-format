project('code-format', 'c')

glib = dependency('glib-2.0')
gtk3 = dependency('gtk+-3.0')
geany = dependency('geany')

library('codeformat',
    'format.c',
    'plugin.c',
    'prefs.c',
    'process.c',
    'style.c',
    dependencies: [glib, gtk3, geany],
    c_args: ['-DFMT_SYSTEM_CONFIG="/usr/share/geany-code-format/"',
             '-DFMT_README_FILE="/usr/share/doc/geany-code-format/README"'],
    name_prefix: '',
)
