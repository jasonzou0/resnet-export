This is a demo of exporting the RESNET 50 model from pytorch into a set of model files on disk, consisting of a graph representation of the model and the tensors representing weights for each computation node in the graph, so that this model can be later loaded into any runtime environment for Inference.

See model_dump/README.txt for details of the exported model representation.