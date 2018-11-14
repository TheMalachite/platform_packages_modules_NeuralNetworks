# model
model = Model()
i1 = Input("op1", "TENSOR_FLOAT16", "{1, 2}")
i2 = Input("op2", "TENSOR_FLOAT16", "{2, 2}")
act = Int32Scalar("act", 0)
i3 = Output("op3", "TENSOR_FLOAT16", "{2, 2}")
model = model.Operation("MUL", i1, i2, act).To(i3)

# Example 1. Input in operand 0,
input0 = {i1: # input 0
          [1, 2],
          i2: # input 1
          [1, 2, 3, 4]}

output0 = {i3: # output 0
           [1, 4, 3, 8]}

# Instantiate an example
Example((input0, output0))
