The first 40 tensors with names start with 'b2' correspond to 20 convolution operators, with one tensor for kernel and one for bias for each convolution.

The last two tensors, with name fc.weight and fc.bias correspond to the final fully connected layer in the resnet.

Relu, MaxPool, Add, Residue connection, GlobalAveragePool, Flatten are not representable as tensors and hence ommited from the per-tensor dump. Refer to the attached PNG file for where they are in the network.
