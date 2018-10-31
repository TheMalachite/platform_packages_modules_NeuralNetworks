// clang-format off
// Generated file (from: maximum.mod.py). Do not edit
std::vector<MixedTypedExample> examples_simple = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 0.0f, -1.0f, 11.0f, -2.0f, -1.44f}}, {1, {-1.0f, 0.0f, 1.0f, 12.0f, -3.0f, -1.43f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 0.0f, 1.0f, 12.0f, -2.0f, -1.43f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_simple_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 0.0f, -1.0f, 11.0f, -2.0f, -1.44f}}, {1, {-1.0f, 0.0f, 1.0f, 12.0f, -3.0f, -1.43f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 0.0f, 1.0f, 12.0f, -2.0f, -1.43f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_simple_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {129, 127, 125, 149, 123, 124}}, {1, {125, 127, 129, 151, 121, 124}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {129, 127, 129, 151, 123, 124}}}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_simple_int32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 0, -1, 11, -2, -1}}, {1, {-1, 0, 1, 12, -3, -1}}},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 0, 1, 12, -2, -1}}},
  // int -> QUANT8_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_broadcast = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 0.0f, -1.0f, -2.0f, -1.44f, 11.0f}}, {1, {0.5f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 0.5f, 2.0f, 0.5f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_broadcast_relaxed = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 0.0f, -1.0f, -2.0f, -1.44f, 11.0f}}, {1, {0.5f, 2.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {{0, {1.0f, 2.0f, 0.5f, 2.0f, 0.5f, 11.0f}}},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_broadcast_quant8 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {129, 127, 125, 123, 124, 149}}, {1, {128, 131}}}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {},
  // int -> QUANT8_ASYMM map
  {{0, {129, 131, 128, 131, 128, 149}}}
}
},
}, // End of an example
};

std::vector<MixedTypedExample> examples_broadcast_int32 = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 0, -1, -2, -1, 11}}, {1, {0, 2}}},
  // int -> QUANT8_ASYMM map
  {}
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> FLOAT32 map
  {},
  // int -> INT32 map
  {{0, {1, 2, 0, 2, 0, 11}}},
  // int -> QUANT8_ASYMM map
  {}
}
},
}, // End of an example
};
