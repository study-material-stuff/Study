import tensorflow as tf

node1 = tf.constant(3.0,tf.float32)
node2 = tf.constant(4.0,tf.float32)

output = node1 * node2

sobj = tf.compat.v1.Session()

File_Writer = tf.compat.v1.summary.FileWriter("Demo",sobj.graph)

print(sobj.run(output))

sobj.close()