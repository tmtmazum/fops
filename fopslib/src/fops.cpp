
constexpr auto USAGE = LR"(
  fops [options] enum [starting_directory]
  fops [options] index [starting_directory]

Indexing Options:
  -o <output_file>  Specifies output file
  -c <cache_file>   Specifies existing cache file as input
  -f                Filenames only
  -r <regex>        Index filenames (full path) that match regex only
)"
