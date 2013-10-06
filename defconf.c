// Included directly into prefs.c

static const char fmt_def_conf[] =
    "[code-format]\n"
    "\n"
    "# Coding style to use when formatting. Valid values are:\n"
    "#   llvm, google, chromium, mozilla, webkit, custom\n"
    "#\n"
    "# When using 'custom' there must be a .clang-format file with style\n"
    "# settings in it, at or above the document being formatted's directory.\n"
    "#\n"
    "# To create a custom style, on the command line, run:\n"
    "#   $ clang-format -style=<StyleToBaseOn> -dump-config > .clang-format\n"
    "#\n"
    "# And then customize the output file to suite your style. See the\n"
    "# 'clang-format' documentation for more information.\n"
    "style = custom\n"
    "\n"
    "# When enabled, a certain set of typed characters will trigger a\n"
    "# re-formatting. The re-formatting is blocking, and quite fast, and\n"
    "# it puts your caret in the correct place to keep typing, so you\n"
    "# might like to try it and see if you like it :)\n"
    "auto-format = false\n"
    "\n"
    "# Characters that when typed will trigger an automatic re-formatting\n"
    "# when the 'auto-format' option is enabled.\n"
    "auto-format-trigger-chars = })]\\;\n"
    "\n"
    "# Specific path to clang-format utility. If it's not in the PATH\n"
    "# environment variable, you can point this directly to the clang-format\n"
    "# binary and that will be used in preference to searching PATH. If no\n"
    "# path information is present, PATH will be searched by default.\n"
    "clang-format-path = clang-format\n"
    "\n"
    "# This option causes the active document to be re-formatted just\n"
    "# before it is saved to disk. This option is especially useful\n"
    "# when auto-formatting is not enabled.\n"
    "format-on-save=false\n"
    "\n";

static const size_t fmt_def_conf_length =
    (sizeof(fmt_def_conf) / sizeof(fmt_def_conf[0])) - 1;
