#include "./console/console.hpp"
#include "./io/input.hpp"
#include "./io/output.hpp"
static input *_input = nullptr;
static input_tofile *_input_tofile = nullptr;
static file_output *_output = nullptr;

void Init(void);