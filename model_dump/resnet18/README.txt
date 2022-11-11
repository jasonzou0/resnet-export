original_onnx/ contains the Onnx serialization of the original pretrained Resnet18 model that was used to dumpmodel to the individual tensors and metadata format, described below.

tensors/ contains one binary file for each tensor in the inference computation graph of Resnet18.
+ Each file is a binary encoding of float32s in little endians.
+ Dimensions of the tensor is in the metadata/ directory.

metadata/ contains tensor metadata, such as its dimensions, and topology of the inference computation graph connected by input, output, and operator initializer tensors.
+ Each row in the graph metadata file correspond to one operator in the computation graph, with columns indicating the operator name, type of the operator, input tensor, output tensor, any padding and strides for Conv operator, name of the Weight and Bias tensor for Conv operator, and the Weight and Bias tensor for the Fully-Connected operator.
+ Only the Weight and Bias tensors have been exported into the tensors/ directory.
