// Generated from logistic_float_1.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::logistic_float_1 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, logistic_float_1) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, logistic_float_1) { execute(get_test_model()); }

} // namespace generated_tests::logistic_float_1

TEST_AVAILABLE_SINCE(V1_0, logistic_float_1, generated_tests::logistic_float_1::get_test_model());


namespace generated_tests::logistic_float_1 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, logistic_float_1_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, logistic_float_1_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::logistic_float_1

TEST_AVAILABLE_SINCE(V1_0, logistic_float_1_all_inputs_as_internal, generated_tests::logistic_float_1::get_test_model_all_inputs_as_internal());

