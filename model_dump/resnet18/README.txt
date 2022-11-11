original_onnx/ contains the Onnx serialization of the original pretrained Resnet18 model that was used to dumpmodel to the individual tensors and metadata format, described below.

tensors/ contains one binary file for each tensor in the inference computation graph of Resnet18.
- Each file is a binary encoding of float32s in little endians.
- The name of each file corresponds exactly to the name of the tensor in the metadata files.
- Dimensions of the tensor is in the metadata/ directory.

metadata/ contains metadata about the inference computation graph and metadata about tensors for the computation nodes.
- The graph metadata file encodes the computation graph
    + Each row in the graph metadata file correspond to one operator in the computation graph, with columns indicating the operator name, type of the operator, input tensor, output tensor, any padding and strides for Conv operator, name of the Weight and Bias tensor for Conv operator, and the Weight and Bias tensor for the Fully-Connected operator.
    + Only the Weight and Bias tensors have been exported into the tensors/ directory.
- The tensor metadata file stores the dimensions of tensors for the computation nodes. 
    + For Resnet model exported by Onnx, this means we only need to store tensors for the Convolution and Matrix Multiplication operators.


