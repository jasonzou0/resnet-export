original_onnx/ contains the Onnx serialization of the original pretrained Resnet18 model that was used to dumpmodel to the individual tensors and metadata format, described below.

tensors/ contains one binary file for each tensor in the inference computation graph of Resnet18. Each file is a binary encoding of float32s in little endians. Dimensions of the tensor is in the metadata/ directory.

metadata/ contains tensor metadata, such as its dimensions, and topology of the inference computation graph connected by input, output, and operator initializer tensors. Only operator initializer tensors have been dumped into the tensors/ directory because that's where all the model parameters are.
